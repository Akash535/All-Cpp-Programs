//swap using referance variable
#include <iostream>
using namespace std;
void swap(int* x,int* y)
{
    int temp;
   temp = *x;
   *x = *y;
   *y = temp;

}
int main()
{
    int a,b;
     cout<<"\nEnter the value of a and b = ";
    cin>>a>>b;
    cout<<"\nBefor swaping\na = "<<a<<"\nb = "<<b;
    swap(&a,&b);
    cout<<"\nAfter swaping\na = "<<a<<"\nb = "<<b;
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ swap.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe     

Enter the value of a and b = 10
20

Befor swaping
a = 10
b = 20
After swaping
a = 20
b = 10
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/