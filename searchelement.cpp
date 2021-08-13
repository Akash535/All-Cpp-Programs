#include<iostream>
using namespace std;
int main(){
    int a[25],i,n,f=0;
    cout<<"Enter the 25 nos in array :\n";
    for(i=1;i<=25;i++){
        cin>>a[i];
    }
    cout<<"Array is :\n";
    for(i=1;i<=25;i++){
        cout<<"\t"<<a[i];
    }
    cout<<"\nEnter the search element :\n";
    cin>>n;
    for(i=1;i<=25;i++){
        if(n==a[i]){
            f++;
        }     
    }
    if(f>0)
        cout<<n<<" no is present.\n";
    else
         cout<<n<<" no is not present.\n";
    
}