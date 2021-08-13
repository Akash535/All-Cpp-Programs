#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"The time taken by worker in hours(enter bet 2h to 5h more):\n";
    cin>>n;
    if(3>n && n>=2 )
        cout<<"the worker is highly efficient. \n";
   else if(4>n && n>=3 )
        cout<<"the worker is improve speed. \n";
   else if(5>n && n>=4 )
        cout<<"the worker is given training to improve his speed. \n";
   else
        cout<<"the worker has to leave the company. \n";
}


