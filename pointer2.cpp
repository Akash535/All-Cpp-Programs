#include<iostream>
using namespace std;
int main(){

    int a=20,*ptr;
    ptr=&a;
    cout<<"address of a="<<&a<<" \n";
    cout<<"address of ptr="<<&ptr<<" \n";
    ptr+2;
    cout<<"value of ptr="<<*ptr<<" \n";
    ptr++;
    cout<<"address of ptr="<<&ptr<<" \n";
    cout<<"value of ptr="<<*ptr<<" \n";
}