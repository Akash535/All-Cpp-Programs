#include<iostream>
using namespace std;
int main(){
    int a[100],b[100],n,i;
    cout<<"enter the no of array:\n";
    cin>>n;
    cout<<"enter no :\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array A is :\n";
    for(i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
    
    for(i=0;i<n;i++){
       b[i]=a[i];
    }
    
    cout<<"\nArray B is :\n";
    for(i=0;i<n;i++){
        cout<<"\t"<<b[i];
    }
}