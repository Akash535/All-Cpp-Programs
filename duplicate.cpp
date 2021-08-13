#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,j;
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
    cout<<"\nDuplicate element :\n";
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
            if(a[i]==a[j])
                cout<<"\t"<<a[i];
    }
    
}