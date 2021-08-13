/*
Find out largest number between two numbers by implementing two 
different classes as
    a. Number1-include n1 as variable and get_a(),disp_a() as 
    functions.
    b. Number2-include n2 as variable and get_b(),disp_b() as 
    functions.
    c. Create one common function as friend of both Number1 and 
    Number2 class
*/
#include<iostream>
using namespace std;
class Num2;
class Num1{
    int a;
    public:
    void get_a(){
        cout<<"\nEnter the no of a : ";cin>>a;
    }
    void set_a(){
        cout<<"\nThe value of a : "<<a;
    }
    friend void max(Num1,Num2);
};
class Num2{
    int b;
    public:
    void get_b(){
        cout<<"Enter the no of b : ";cin>>b;
    }
    void set_b(){
        cout<<"\nThe value of b : "<<b;
    }
    friend void max(Num1,Num2);

};
void max(Num1 n1,Num2 n2){
    if(n1.a>n2.b)
        cout<<"\n\ngreater no is : "<<n1.a;
    else
        cout<<"\n\ngreater no is : "<<n2.b;
}
int main(){
    Num1 n1;
    Num2 n2;
    n1.get_a();
    n2.get_b();

    n1.set_a();
    n2.set_b();

    max(n1,n2);
}
/*
Output:
    Enter the no of a : 12
    Enter the no of b : 15

    The value of a : 12
    The value of b : 15

    greater no is : 15
*/