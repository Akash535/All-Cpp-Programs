#include<iostream>
using namespace std;
int main(){
    int a[100],n,i;
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
    cout<<"\nArray reverse is :\n";
    for(i=n-1;i>=0;i--){
        cout<<"\t"<<a[i];
    }
}