/*Add two values times and display resultant time in the hr.: min: sec
form using friend function(overload binary + operator)
a. T1- 2:40:35
b. T2- 3:35:30
c. Resultant time is- 06:16:05*/
#include<iostream>
using namespace std;
class time 
{
    int hr,m,s;
    public:
    void set(int x)
    {
        cout<<"\nEnter the "<<x<<" time \n ";
        cout<<"\nEnter the hr= ";
        cin>>hr;
         cout<<"\nEnter the minute= ";
        cin>>m;
         cout<<"\nEnter the sec= ";
        cin>>s;

       
        cout<<"\nThe "<<x<<" time is = "<<hr<<"hr : "<<m<<"min : "<<s<<"sec";

    }
     
    friend time operator+(time , time );

    void display()
    {
        if(s>60)
        {
            m=m+1;
            s=s-60;
        }
        if(m>60)
        {
            hr=hr+1;
            m=m-60;
        }
        cout<<"\n\nResultant time is = "<<hr<<"hr : "<<m<<"min : "<<s<<"sec";
    }
};
time operator+(time a , time b)
{
    time t;
    t.hr=a.hr+b.hr;
     t.m=a.m+b.m;
     t.s=a.s+b.s;
     return t;

}
int main()
{
    time a,b;
    a.set(1);
    b.set(2);
    a=a+b;
    a.display();
    return 0;
    
}
/*OUTPUT
    Enter the 1 time 

    Enter the hr= 2

    Enter the minute= 40

    Enter the sec= 35

    The 1 time is = 2:40:35
    Enter the 2 time

    Enter the hr= 3

    Enter the minute= 35

    Enter the sec= 30

    The 2 time is = 3:35:30

    Resultant time is = 6:16:5
*/