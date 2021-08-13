#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,max,min;
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
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(max<a[i])
            max=a[i];
    }
    for(i=0;i<n;i++){
        if(min>a[i])
            min=a[i];
    }
    cout<<"\nmax element is "<<max;
    cout<<"\nmin element is "<<min;
}