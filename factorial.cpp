#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1;
    cout<<"Enter the no :\n";
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" = "<<fact;
}