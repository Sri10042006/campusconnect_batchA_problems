#include<iostream>
using namespace std;
class Father{
    public:
    void fatherproperty(){
        cout <<"father's property"<< endl;
    }
};
class Mother{
    public:
    void motherproperty(){
        cout<<"mother's property"<<endl;
    }
};
class Child:public Father,public Mother
{
    public:
    void childproperty(){
        cout<<"child's property"<<endl;
    }
};
int main(){
    Child c;
    c.fatherproperty();
    c.motherproperty();
    c.childproperty();
}
