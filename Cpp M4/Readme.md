### CPP Module 04
***

To enter the world of this module, we need first to know & understand the overall types of polymorphism:

***
#### 1. Static Polymorphism (Compile-Time Polymorphism) * (Ad-Hoc Polymorphism)

* ***Function Overloading***, same function name, difffernet parameter list, the polymorphism happens in the compile time, when it arrives into the runtime, the compiler has already changed the name of the polymorphic function using **Name Mangling**, by adding suffixes to the name, creating two seperate function, therefore the polymorphism has already dissolved at this point.

* ***Operator Overloading***, Redifines how operators work for user-defined types, aslo resolved at compile time.

#### 2. Dynamic Polymorphism (Runtime Polymorphism) * (SubType Polymorphism)

* Virtual functions, requires ```virtual``` keyword in the base class, usese base class pointer/refrence, implemented via **Vtable**, without the ```vitual``` keyword base version is called.

Example by ChatGPT
```
class Animal {
public:
    virtual void speak();
};

class Dog : public Animal {
public:
    void speak();
};

main:
Animal* a = new Dog();
a->speak();   // calls Dog::speak()
```

### Deep dive into the concepts:

