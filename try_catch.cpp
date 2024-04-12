#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    try{
        if(b!=0){
            c=a/b;
            cout<<"Divison: "<<c;
        }
        else{
            throw(b);
        }
    }
    catch(int b){
        cout<<"Divided by "<<b;
    }
return 0;
}