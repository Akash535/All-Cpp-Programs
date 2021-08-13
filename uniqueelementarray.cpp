#include<iostream>
using namespace std;
int main(){
    int a[100],b[100],i,n,j,c=0,k;
    cout<<"enter the size in array :\n";
    cin>>n;
    cout<<"enter element :\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array is :\n";
    for(i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
    cout<<"\nUnique element is \n";
    for(i=0;i<n;i++){
        c=0;
        for(j=0,k=n;j<k+1;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    c++;
                }
            }
        }
        if(c==0){
            cout<<"\t"<<a[i];
        }
    } 
    cout<<"\n";  
}