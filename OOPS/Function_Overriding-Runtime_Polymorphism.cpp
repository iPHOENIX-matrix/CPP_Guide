#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void make_sound()
    {
        cout << "Generic animal sounds :\n";
    }
};

class Dog : public Animal
{
public:
    void make_sound() override
    {
        cout << "Bark\n";
    }
};

class Cat : public Animal
{
public:
    void make_sound() override
    {
        cout << "Meow\n";
    }
};

class Cow : public Animal
{
public:
    void make_sound() override
    {
        cout << "Moo\n";
    }
};

class Lion : public Animal
{
public:
    void make_sound() override
    {
        cout << "Roar\n";
    }
};

int main()
{
    Animal *my_animal;
    my_animal = new Animal();
    my_animal->make_sound();

    my_animal = new Dog();
    my_animal->make_sound();

    my_animal = new Cat();
    my_animal->make_sound();

    my_animal = new Cow();
    my_animal->make_sound();

    my_animal = new Lion();
    my_animal->make_sound();

    delete my_animal;
    return 0;
}
