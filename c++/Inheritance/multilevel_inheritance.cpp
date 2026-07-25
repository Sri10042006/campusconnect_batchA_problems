#include<iostream>
using namespace std;
class Animal{
    public:
    void sound(){
        cout<<"Animal makes sound"<<endl;

    }

};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"Dog barks"<<endl;
    }
};
class Puppy:public Dog{
    public:
    void weep(){
        cout<<"puppy weeps"<<endl;
    }
};
int main(){
    Puppy p;
    p.sound();
    p.bark();
    p.weep();
    return 0;

}