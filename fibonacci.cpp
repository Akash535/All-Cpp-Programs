// WAP to print  Fibonacci sequence 0 ,1, 1, 2, 3, 5,8,13,21,34,55 ...

// a=0
// b=1
// c=a+b
// a=b
// b=c

// Sol 1:

#include <iostream>
using namespace std;
// int main() {
//    int i,n;
//    int a=0,b=1,;
//    cout<<"\nEnter the range");
//    cin>>n;
 
//    cout<<"\n%d %d ",a,b);
   
//    for(i=1;i<=n-2;i++)
//    {
//       c=a+;
//     cout<<"%d  ",c);
//     a=b;
//    b=c;
//    }
    
//     return 0;
// }

int main() {
   int i,n;
   int a=0,b=1,c;
   cout<<"\nEnter the range";
   cin>>n;
   
   cout<<"\n"<<a<<" , "<<b;
   
   i=1;//init
   
  while(i<=n-2)
   {
      c=a+b;
    cout<<" , "<<c;
    a=b;
   b=c;
   i++;
   }
    
    return 0;
}
