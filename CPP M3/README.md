### C++ Module 03
***
![Logo](Img/cpp03.png)
***

In this Module we will learn about ***Inheritance**.

##### What is Inheritance ?

**Inheritance** is a concept in **(OOP)**, where one class (**Child**) inherits features from its (**Parent**) Class without having to rewrite them.

* Example by Chatgpt:

Let's say we have one class, Animal and it has two methods [Sleep, Eat] & Dog class.

```
class Animal{
    public:
        void eat();
        void sleep();
};

class Dog : public Animal -> this lets us inherit features from Animal class {
    public:
        void bark();
}

int main()
{
    Dog MyDog;

    MyDog.eat();
    MyDog.sleep();
    MyDog.bark();
}
```

As you can see, the eat & sleep member functions belong to the Animal class (**Parent**), meanwhile bark() belongs solely to the Dog class (**Child**).
the ***public** keyword means, that the child class inherits all the public attribute the parent class has.
