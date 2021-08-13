#include<iostream>
using namespace std;
int main(){
    int a[25],i;
    cout<<"Enter the 25 nos in array :\n";
    for(i=1;i<=5;i++){
        cin>>a[i];
    }
    cout<<"Array is :\n";
    for(i=1;i<=5;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\neven element:\n";
    for(i=1;i<=5;i++){
        if(a[i]%2==0)
            cout<<a[i]<<" ";
        
    }
    cout<<"\nodd element:\n";
    for(i=1;i<=5;i++){
        if(a[i]%2!=0)
            cout<<a[i]<<" ";
        
    }
    cout<<"\npositive element:\n";
    for(i=1;i<=5;i++){
        if(a[i]>=0)
            cout<<a[i]<<" ";
        
    }
    cout<<"\nnegative element:\n";
    for(i=1;i<=5;i++){
        if(a[i]<0)
            cout<<a[i]<<" ";
        
    }
}