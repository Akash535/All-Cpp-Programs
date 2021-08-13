#include<iostream>
using namespace std;
int fact(int n);
int main(){


    int n;
    cout<<"enter the value :\n";
    cin>>n;
    cout<<"factorial of "<<n<<" = "<<fact(n);
}
int fact(int n){
    if(n>=1)
        return n*fact(n-1);
    else
        return 1;
}