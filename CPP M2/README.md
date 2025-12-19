### C++ Module 02
***
![Logo](Img/cpp02.png)
***

In this module, we are going to explore concepts such as:

* Operator Overloading.
* Orthodox Canonical class form.
***
This module specifically uses floating point numbers & fixed point numbers and how they are stored in memory as concepts to reach the end gaol of this subject.

Before diving into these concepts, we will go through an overview and explanations of **Operator Overloading** & **Orthodox Canonical class form**.
***

#### Orthodox Canonical Form
It's a convention, a standard way of writing a class, mainly constructd upon these three features:

* Default Constructor.
* Copy Constructor.
* Copy assignment operator.
* Destructor.

For Default constructor & Destructor, we already seen that in previous modules, so we will look for the two in the middle:

#### * Copy Constructor/Assignment Operator.

The copy constructor defines how to create a new object using an already existing object.

* Example: (ChatGPT AI)
```
MyClass a;
MyClass b(a);
MyClass c = a;
```

Prototyped as such : ```MyClass(const MyClass& other)```.

* MyClass&: means we will create a **MyClass** object, the **const** so we cannot modify the object we are copying from, and lastly for **&**; let's say we pass it without reference: 
(MyClass(const MyClass other)), "other" is going to be passed as a copy, and to create a copy, the **Copy Constructor** is called, yet the copy constructor will also create another copy, then we are stuck at a loop.


The Assingment operator is used to overwrite an already existing class's data with a new one.

* Example: (ChatGPT AI)
```
MyClass a(10);
MyClass b(5);

b = a;
```

Prototyped as such: ```MyClass& operator=(const MyClass& other)```.

Notice the **&** in the function return, here in the Assignment operator, we return an already exsiting object, that will be the object we assgined to.
****

#### Operator Overloading

Operator Overloading allows us to define a custom behavior for different opertators like : **+ / -  * ==**.

Normally operators work with built in types (int, float...).
With overloading we can make them work with objects of out class.

Example of overloading (+): (Examples of code are by ChatGPT)
```
Point p1(1, 2);
Point p2(3, 4);
Point p3 = p1 + p2;
```

Lets say we have this class
```
class Point {
public:
    int x, y;

    Point(int x=0, int y=0) : x(x), y(y) {}

    // Example of operator overloading
    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }
};
```

Once we called ```Points p3 = p1 + p2```.
our operator overloading method is being called, and **P2** is passed as the other parameter, and to highlight the presence of **P1**, we can change the method return into this

```return Point(this->x + other.x, this->y + other.y);```.
P1 is held in the **this** operator, this->x & this->y refers to **P1**

then the method returns **Point** object that initialize **P3** which is the sum of x & y of **P1** and **P2**, here we see that we changed the behavior of (+) operator to suit our needs which is summing values of the classes attrubutes instead of doing normal sum of two integers or floating numbers.
***
