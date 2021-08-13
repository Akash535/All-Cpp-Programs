/*
Demonstrate static member function with static data member in one 
class
*/
#include<iostream>
using namespace std;
class StaticMember{
    static  int n;
    
    public:
     static void  show(){
         cout<<"\nbefor increment value of n : "<<n;
         n++;
         cout<<"\nafter increment value of n : "<<n;
     }
};
 int StaticMember::n=100;
// void StaticMember::show(){
//     cout<<"\nvalue of n : "<<n;
// }
int main(){
    StaticMember sm;
    sm.show();
}
/*
Output :

    befor increment value of n : 100
    after increment value of n : 101
*/