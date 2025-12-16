### C++ Module 01
***
![Logo](Img/cpp01.png)
***
In this Module, we build upon the previous concepts we learned in the Module 00.
Concepts compassed in this Module:

* Memory Allocation (New)
* Pointers to memebrs
* Refrences
***

#### **Compilation & Execution**
To compile & execute any of the provided exercises, all you need is to run, **Make**, and execute the program name specified for each exercise.
***
#### Exercise N*0

We need to create two seperate functions:
```
• Zombie* newZombie( std::string name );
This function creates a zombie, names it, and returns it so you can use it outside of the function scope.
```
```
• void randomChump( std::string name );
This function creates a zombie, names it, and makes it announce itself.
```

* **New** Operator:
Using the **New** operator helps us allocate data on the heap, and it's part of the C++ language itself, meanwhile **Malloc** belongs to C language. it allocate an object on the heap, while the pointer that points to it, stays on the stack and bound to the scope **(If/While statements)**. to avoid memory leaks, you need to use the **delete** operator that's by default calls the **Deconstructor** of the object allocated using the **New** operator.

Meanwhile, in the function **randomChump**, it create a normal object, on the stack, calls its constructor, intizalize it using a the name private attribute, and makes it announce itself.

The exercise goal is mainly to understand how to manage scopes, where & when to use an allocated object on the heap, and when to use one on the stack.
***
#### Exercise N*1

In this exercise, we do much as the previous one, but here instead we will allocate for a number **N**, an array of Zombies, and once we don't need the array, we should delete the allocate data before it goes out of scope.

```
Zombie *Z = new Zombie[N];
```

We also used a **Setter** method to assign the name provided to each zombie allocated
```
void Zombie::nameSet(std::string name){
    this->name = name;
}
```
The **this** keyword is used so we don't stumble upon a naming conflict, since this get the attribute defined in the scope, in this case the private attrubte **name**.
Once we are done, we call **delete[] Z;** on the pointer holding the addresses of the allocated zombies.
***
#### Exercise N*2

This exercise goal is address manipulation and to show how can we create an **alias** for another variable through the **&** (Address-of Operator), and changing the value through this variable, will cause a change in the same assinged variable.

```
std::string str = "HI THIS IS BRAIN";
std::string &stringREF = str;
```
***
#### Exercise N*3

In this exercsise we learn more about the reference alongside with constant.
we need to create a **Weapon** Class, that has a string attribute type, and a member function **getType()** that returns a constant refrence to **Type**, also another memeber function **setType()** that sets type using the new value passwed as a parameter.

Then, we create two other classes, **HumanA** & **HumanB**, they both have a **Weapon**, a name and a memeber function **attack()**, that display their name and the type of weapon they attacked with, as the following: (With no brackets).

```
  <name> attacks with their <weapon type>
```

The two classes are almost identical, except that the **HumanA** take the **Weapon** in its constructor, **HumanB** does not. Also **HumanB** may not always have a **Weapon**, whereas **HumanA** will always be armed.

As we noticed, the Class **HumanA**, has the **Weapon** member as a refrence to an exsisting weapon.
Therefore, when using a reference type, it should not be assigned in the constructor, instead we need to use an initializator list.

* Why? because, when the compiler sees **weapon &w**, it ask immedietly, what does this refrence refering to? and if we do somthing like:

```
HumanA::HumanA(std::string name, Weapon &w):
{
    W = w;
    this->name = name;
}
```

by the time you try to assign **w** to **W**, W is still not refering to anything yet, so we use initializater list and initilized it way before the constructor body runs :

```
HumanA::HumanA(std::string name, Weapon &w): W(w):
```
***
#### Exercise N*4

In this exercise we need to replace a string inside of a file with another provided string, in order to do that, we need first to open the file;
To do that we will use **ifstream**, which is a class in the C++ standard library,  which the input file stream & its used to read from files and we need to include **< fstream >**.
Once we get the filename, we use the **open** method from fstream, it requires two parameters, **filename** & **Modes**, in our case the mode is **std::ios::in**, **< ios >**, is another class, in which both **ifstream** & **ofstream** inherits from, and we use this class to define the mode of opening, in this case **in** -> input reading, ( < ios > itself inherits from < ios_base >, in which the mode gets defined).

* Table of modes from ChatGPT AI:

***
| Flag               | Meaning                                                       |
| ------------------ | ------------------------------------------------------------- |
| `std::ios::in`     | Open for reading (input)                                      |
| `std::ios::out`    | Open for writing (output)                                     |
| `std::ios::binary` | Open in binary mode                                           |
| `std::ios::ate`    | Seek to the end immediately after opening                     |
| `std::ios::app`    | Append to the end of the file when writing                    |
| `std::ios::trunc`  | Truncate file to zero length on open (default for `ofstream`) |
***

The implementation goes as follow: Read the whole data from the file, not character by character, find the starting point of the string we need to replace, erase it using this components (String starting index position + String Length), then we insert the provided string from the same starting position of the first string we want to replace.

* Error Handling: Make sure to handle empty files. The string we want to change has not been found in the file. File with no permission to open for reading. Closing the streams we opened for reading & writing at the end and in cases of error.

To Read the data as a whole from the file, we will use **std::ostringstream** which give us a reading from the output stream into a string, alonside with **rdbuf()**, that returns a pointer to the file buffer of the actual file, this file buffer is a way to speed up the reading process, since it holds partial data from the file, once called, it automatically keeps reading till the end, once we get the while data dumped into the **ostringstream**, we can convert it into a string using **.str()** method.

Now after we read the data into a string, we start our implementation, by scanning the string for S1, (S1 is the string we want to replace), we use the **find()** method to look for the string, and we catch the return of find, if it has found something it returns the index of the first match, if not it returns **npos**, which is a constant in the **string** class, which is a **size_t** constant initilized to -1, so it overflows to the maximum possible value a size_t can hold, in which no string can hold that number of characters; [18446744073709551615].
Since **find()**, returns the first index of the matching string, returning the npos safely guaranties that no matching found yet, no string can hold that much of characters anyway. so there is no case find returns a match at [18446744073709551615].

* We can use **npos** to handle the error of no S1 was found.

Then, we while upon the string till we the **find()** method returns the **npos** constant, and we erase & insert.
When the erase/insert phase is done, we take the base string that holds the changed data, and we write it to the provided file.

Using the same approach, we need an output file stream, which we gets from **ofstream**, we open it with mode of writing.
(Don't Forget to close the input file stream).

```
    infile.close();
    outfile.open(filename, std::ios::out);
    outfile << str;
    outfile.close();
```
***
#### Exercise N*5 (Mandatory part of the project is done)

The goal of this exercise is to use pointers to member functions.
We have a class named **Harl**, that has 4 private member functions:

```
• void debug( void );
• void info( void );
• void warning( void );
• void error( void );
```

And one public member function :
```
• void    complain( std::string level );
```

According to the level the function **complain** gets, we should call the appropriate private member function.

! Note : Without using if/else if/else.

#### What are pointers to member functions?

A pointer to members functions, is different than a normal pointer to a function.
It requires an object instance of the class to access the memebers, so we have to declare it first that it belongs to that class:

```
void (Harl::*functions[])() = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error
};
```

then when we want to actually use on of these memebrs, we need an object of the **Harl** class, let's say **obj**:
```
(obj.*functions[index])();
```
