#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,t;
    cout<<"enter the no :\n";
    cin>>n;
    t=n;
    while (n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==t)
        cout<<t<<" is palindrome.\n";
    else
        cout<<t<<" is not palindrome.\n";
    
}