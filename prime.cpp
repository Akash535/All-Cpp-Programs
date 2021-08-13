
#include<iostream>
using namespace std;
int main(){
   int i,n;
   cout<<"\nEnter any number";
   cin>>n;
   
   
   for(i=2;i<n;i++)
   {
       if(n%i==0){
           cout<<n<<" is NOT a PRIME";
           break;
       }
       
   }
    if(n==i)
    cout<<n<<" is a PRIME";
       
    return 0;
}