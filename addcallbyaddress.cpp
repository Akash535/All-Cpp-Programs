#include<iostream>
using namespace std;
int main(){
    int n1,n2,*a,*b,sum=0;
    cout<<"enter the two no: \n";
    cin>>n1>>n2;
    a=&n1;b=&n2;

    sum=*a + *b;
    cout<<"Addition is :\n"<<sum;
}