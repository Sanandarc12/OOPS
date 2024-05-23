#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
        void set_a(){
            cout<<"Enter the first no: ";
            cin>>a;
        }
        friend void max_no(A ,B);
};
class B{
    int b;
    public:
        void set_b(){
            cout<<"Enter the second no: ";
            cin>>b;
        }
        friend void max_no(A ,B );
};
void max_no(A aa,B bb){
    if(aa.a>bb.b)
        cout<<"Max "<<aa.a<<endl;
    else if(aa.a<bb.b)
        cout<<"Max "<<bb.b<<endl;
}
int main(){
    A obj1;
    B obj2;
    obj1.set_a();
    obj2.set_b();
    max_no(obj1,obj2);
    return 0;
}