#include<iostream>
using namespace std;
int main(){
    int a[100],n,sum=0,i;
    cout<<"enter the no of array:\n";
    cin>>n;
    cout<<"enter no :\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array is :\n";
    for(i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"\nsum is: "<<sum;
    
}