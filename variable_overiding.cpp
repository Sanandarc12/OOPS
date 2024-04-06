#include<iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        void set_a(){
            a=5;
        }
};
class B: public A{
     protected:
        int a;
    public:
        void set_a1(){
            a=7;
        }
        void display(){
            cout<<"Base class a= "<<A::a<<endl;
            cout<<"Derived class a= "<<a<<endl;
            cout<<"Sum is= "<<A::a+a;
        }
};
int main(){
    B obj;
    obj.set_a();
    obj.set_a1();
    obj.display();

    return 0;
}