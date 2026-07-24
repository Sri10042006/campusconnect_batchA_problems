#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class Animal
{
    public:
    void sound(){
        cout<<"animal makes souds"<<endl;

    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"dog barks"<<endl;
    }
};
int main(){
    Dog d;
    d.sound();
    d.bark();
    return 0; 
}