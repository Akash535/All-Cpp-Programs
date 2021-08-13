#include<iostream>
using namespace std;
int main(){
    int i,c,n,sum=0,sum1=0,sum2=0;
    cout<<"enter the range:\n";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            cout<<" +"<<i;
             sum1=sum1+(i);
        }
        else{
        cout<<-i;
        sum2=sum2+(-i);
        }
        sum=sum1+sum2;
    }
    cout<<"\nsum ="<<sum;
}