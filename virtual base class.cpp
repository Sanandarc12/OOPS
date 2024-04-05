#include <iostream>
using namespace std;
class A{
    public:
        void show1();
};
void A::show1(){
    cout<<"A";
}

class B:virtual public A{
    public:
        void display1(){
            cout<<"B";
        }
};
class C: virtual public A{
    public:
        void display2(){
            cout<<"C";
        }
};
class D:public B,public C{
    public:
        void display3(){
            cout<<"D";
        }
};
int main(){
    D d;
    d.show1();
    d.display1();
    d.display2();
    d.display3();
}
