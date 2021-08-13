#include <iostream>
using namespace std;
void swap(int &x , int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swap(char &x , char &y)    //function overloading becoz of same function name
{
    char temp;
    temp=x;
    x=y;
    y=temp;   
}
int main()
{
    int a,b;
    char c,d;
    cout<<"\nEnter the two numbers = ";
    cin>>a>>b;
    cout<<"\nBefore swaping "<<a<<" and "<<b;
    swap(a,b);
    cout<<"\nAfter swaping "<<a<<" and "<<b;
    


    cout<<"\nEnter the two charecters = ";
    cin>>c>>d;
    cout<<"\nBefore swaping "<<c<<" and "<<d;
    swap(c,d);
    cout<<"\nAfter swaping "<<c<<" and "<<d;
 
    return 0;
}
/*OUTPUT
    Enter the two numbers = 10
    20

    Before swaping 10 and 20
    Aftere swaping 20 and 10
    Enter the two charecters = A
    B

    Before swaping A and B
    Aftere swaping B and A
*/