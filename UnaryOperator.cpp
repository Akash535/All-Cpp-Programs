#include<iostream>
using namespace std;
class incr 
{
    int i;
    public:
        void operator++()
        {
             cout<<"\nEnter the i value = ";
             cin>>i;
            cout<<"incremental value of i is "<<++i;
        }
        void operator--()
        {
             cout<<"\nEnter the i value = ";
            cin>>i; 
             cout<<"decremental value of i is "<<--i;
        }
};




int main()
{
    incr a;   
    ++a;
    --a;
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ unaryOperator.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe

Enter the i value = 10
incremental value of i is 11
Enter the i value = 10
decremental value of i is 9
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/