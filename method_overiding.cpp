#include<iostream>
using namespace std;
class A{
    public:
        void display(){
            cout<<"Base class"<<endl;
        }
};
class B: public A{
    public:
        void display(){
            cout<<"Derived class"<<endl;
        }
};
int main(){
    B obj;
    obj.display();
    obj.A::display();
    return 0;
}