#include<iostream>
using namespace std;
int main(){
    int a=10;
    char b='B';
    int* p;
    int **r;
    char* q;
    p=&a;
    q=&b;
    r=&p;

    cout<<"address of a = "<<&a<<" \n";
    cout<<"address of b = "<<&b<<" \n";
    cout<<"address of *p = "<<&p<<" \n";
    cout<<"address of *q = "<<&q<<" \n";
    cout<<"address of **r = "<<&r<<" \n";
    
    cout<<"value of a = "<<a<<" \n";
    cout<<"value of b = "<<b<<" \n";
    cout<<"value of *p = "<<*p<<" \n";
    cout<<"value of *q = "<<*q<<" \n";
    cout<<"value of **r = "<<**r<<" \n";

    cout<<"p store address of a = "<<p<<" \n";
    cout<<"q store address of b = "<<q<<" \n";
}