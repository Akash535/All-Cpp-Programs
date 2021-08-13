/*
 WAP using generic function to find sum of 2 numbers.
*/
#include <iostream>
using namespace std;
template <typename T>
  
T add(T a, T b)
{
    return (a+b);
}
  
int main()
{   
    int a,b;
    float p,q;
    cout<<"Enter the integer two no : \n";cin>>a>>b;
    cout<<"Addition of integer is = "<<add(a,b);

    cout<<"\n\nEnter the float two no : \n";cin>>p>>q;
    cout<<"Addition of float is = "<<add(p,q);
    
  //  cout << add<double>(14.12, 7.14) << endl;
    return 0;
}
/*
Output:
    Enter the integer two no :
    14
    25
    Addition of integer is = 39

    Enter the float two no :
    36.25
    25.36
    Addition of float is = 61.61
*/