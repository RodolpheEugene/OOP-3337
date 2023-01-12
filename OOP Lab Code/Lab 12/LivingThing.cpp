#include <iostream>
using namespace std;

class LivingThing
{
public:
    LivingThing()
    {
        cout << "√ LivingThing constructor called." << endl;
    }
    ~LivingThing()
    {
        cout << "x livingThing destructor called." << endl;
    }
    void virtual toString() const
    {
        cout << "= LivingThing toString called." << endl;
    }
};

class Animal: public LivingThing{
public:
    Animal()
    { 
        cout << "√√ Animal constructor called." << endl; 
    }
    ~Animal()
    {
        cout << "✕✕ Animal destructor called." << endl; 
    }
    void toString() const
    {
        cout << "== Animal toString called." << endl; 
    }
};

class Plant:public LivingThing{
public:
    Plant()
    { 
        cout << "√√ Plant constructor called." << endl; 
    }
    ~Plant(){
        cout << "✕✕ Plant destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "== Plant toString called." << endl; 
    }
};

class Fish : public Animal{
public:
    Fish()
    { 
        cout << "√√√ Fish constructor called." << endl; 
    }
    ~Fish()
    { 
        cout << "✕✕✕ Fish destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "=== Fish toString called." << endl; 
    }   
};

class Mammal : public Animal{
public:
    Mammal()
    { 
        cout << "√√√ Mammal constructor called." << endl; 
    }
    ~Mammal()
    { 
        cout << "✕✕✕ Mammal destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "=== Mammal toString called." << endl; 
    }   
};

class Tree : public Plant{
public:
    Tree()
    { 
        cout << "√√√ Tree constructor called." << endl; 
    }
    ~Tree()
    { 
        cout << "✕✕✕ Tree destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "=== Tree toString called." << endl; 
    }   
};

class Cat : public Mammal{
public:
    Cat()
    { 
        cout << "√√√√ Cat constructor called." << endl; 
    }
    ~Cat()
    { 
        cout << "✕✕✕✕ Cat destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "==== Cat toString called." << endl; 
    }   
};

class Lion : public Cat{
public:
    Lion()
    { 
        cout << "√√√√√ Lion constructor called." << endl; 
    }
    ~Lion()
    { 
        cout << "✕✕✕✕✕ Lion destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "===== Lion toString called." << endl; 
    }
};

class Tiger : public Cat{
public:
    Tiger()
    { 
        cout << "√√√√√ Tiger constructor called." << endl; 
    }
    ~Tiger()
    { 
        cout << "✕✕✕✕✕ Tiger destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "===== Tiger toString called." << endl; 
    }
};

class Sardine : public Fish{
public:
    Sardine()
    { 
        cout << "√√√√ Sardine constructor called." << endl; 
    }
    ~Sardine()
    { 
        cout << "✕✕✕✕ Sardine destructor called." << endl; 
    }
    void toString() const
    {   
        cout << "==== Sardine toString called." << endl; 
    }
};

class Bass : public Fish{
public:
    Bass()
    { 
        cout << "√√√√ Bass constructor called." << endl; 
    }
    ~Bass()
    { 
        cout << "✕✕✕✕ Bass destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "==== Bass toString called." << endl; 
    }
};

class Chestnut:public Tree{
public:
    Chestnut()
    { 
        cout << "√√√√ Chestnut constructor called." << endl; 
    }
    ~Chestnut()
    { 
        cout << "✕✕✕✕ Chestnut destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "==== Chestnut toString called." << endl; 
    }
};

class Cherry:public Tree{
public:
    Cherry()
    { 
        cout << "√√√√ Cherry constructor called." << endl; 
    }
    ~Cherry()
    { 
        cout << "✕✕✕✕ Cherry destructor called." << endl; 
    }
    void toString() const
    { 
        cout << "==== Cherry toString called." << endl; 
    }
};

void display(const LivingThing &obj)
{
    cout << "Display ";
    obj.toString();
}

int main(){
    cout << "Create Sardine: " << endl;
    Sardine Sardine;
    cout << endl << "Create Bass: " << endl;
    Bass Bass;
    cout << endl << "Create Tiger: " << endl;
    Tiger Tiger;
    cout << endl << "Create Lion: " << endl;
    Lion Lion;
    cout << endl << "Create Chestnut: " << endl;
    Chestnut Chestnut;
    cout << endl << "Create Cherry: " << endl;
    Cherry Cherry;
    cout << endl << "Create Tree: " << endl;
    Tree Tree;
    
    cout << endl;
    Tree.toString();
    display(Tree);
    Animal Animal;

    cout<< endl;
    Animal.toString();
    display(Animal);

    cout <<endl << "Call display on six objects of the six leaf classes respectively: \n";
    display(Sardine);
    display(Bass);
    display(Tiger);
    display(Lion);
    display(Chestnut);
    display(Cherry);

    cout << endl <<"deconstruction started..." <<endl;
    return 0;
}
