#include<iostream>
using namespace std;
int main(){
    int i,n,no,sum=0;
    cout<<"how many nos are enter:\n";
    cin>>n;
    for (i=1;i<=n;i++){
        cout<<"\nenter "<<i<<" no :";
        cin>>no;
        if(no%2==0)
        sum=sum+no;
        
    }
    cout<<"\nsum of even no :"<<sum;
}