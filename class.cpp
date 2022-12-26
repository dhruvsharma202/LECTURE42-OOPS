#include <iostream>
#include "hero.cpp" // put the class in seperate file
using namespace std;
class hero
{
public:
    int health;
    
    char  ans;

    // constructor cration
    hero(){
        cout<<"constructor called"<<endl;
    }
    hero(hero&temp){  // always use pass by referance in copy constructor
        this->health=temp.health;
    }
    // parametrized constructor
    hero(int health){
        health=health;// it will not print because 

        // this is akeyword
        this->health=health; // this is a pointer which store adress of current object
        // cout<<this;
    }
    void print(){
        cout<<health;
    
    }

    // public: // you should make getter setter as public in order to aceess them;

    // int returnhealth()
    // { // getter  - Get the private element outside the class;
    //     return health;
    // }
    // char returnlevel()
    // { // getter
    //     return ans;
    // }
    // void sethealth(int h)
    // { // setter set the value asing by dot operator outside the class;
    //     health = h;
    // }
    // void setans(char d)
    // { // setter
    //     ans = d;
    // }
};

int main()
{
   hero s(40);
   s.print();
   hero r(s); // copy constructor it is by default
   s.print();





    // hero h1(10); 
    // static memory allocation of object
    // cout<<"adress of h1  " << &h1<<endl;
    // cout<<h1.health;
    // dynamical allocation of object;
    // hero *m=new hero(11);


    // cout<<"size : "<<sizeof(h1)<<endl; // size 1 will be printed in case of empty class
    // insert value
    // h1.health=10;
    //  h1.setans('d');
    // h1.sethealth(10);

    // cout << h1.returnhealth() << h1.returnlevel() << endl;



    // m->sethealth(12);
    // m->setans('D');

    // printing value

    // it print garbage value
    
 
    // cout<<(*m).returnhealth()<<(*m).returnlevel()<<endl;
    // cout<<m->returnhealth()<<m->returnlevel()<<endl;


    // cout<<sizeof(h1)<<endl;
   

    return 0;
}