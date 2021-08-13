#include<iostream>
using namespace std;
int main(){
    int n,i,pr,a[20],sum=0,sum1;
    cout<<"how many product :\n";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<i<<" product value:";
        cin>>a[i];
        sum=sum+a[i];
    }
    if(sum>=1000){
        cout<<"u got profit by 10 %% of "<<sum;
        pr=sum/10;
        sum1=sum-pr;
    }
    else
        sum1=sum;

    
    cout<<"\nSum :"<<sum1;
}