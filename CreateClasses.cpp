#include <iostream>
#include<string.h>
using namespace std;
class time
{
    int hr,m,s;
    public: 
    time()
   {
       cout<<"\nEnter the time (hr,min,sec) = ";
       cin>>hr>>m>>s;
   }
   void showtime() 
   {
       cout<<"Time = "<<hr<<"hr : "<<m<<"min : "<<s<<"sec";

   }
};
class date
{
    string dob;
    public: 
    date()
   {
       cout<<"\nEnter the date of birth of person (dd/mm/yyyy)= ";
        cin>>dob;
   }
   void showdate() 
   {
       cout<<"Date = "<<dob;
   }

};
class person
{
    string name;
    string dob;
    string city;
    public :
    person()
    {
        cout<<"\n\nEnter the name of person = ";
        cin>>name;
        cout<<"Enter the date of birth of person (dd/mm/yyyy)= ";
        cin>>dob;
         cout<<"Enter the city of person = ";
        cin>>city;
    }
    void showperson()
    {
        cout<<"\n :THE PERSON DETAIL IS : ";
        cout<<"\n NAME : "<<name<<"\t DOB : "<<dob<<"\t Address : "<<city;
    }
    
};
class student 
{
    string name,dob;
    string std;
    char div;
    public :
    student()
    {
        cout<<"\n\nEnter the name of student = ";
        cin>>name;
         cout<<"Enter the date of birth of student = ";
        cin>>dob;cout<<"Enter the standerd of student = ";
        cin>>std;
         cout<<"Enter the div of student = ";
        cin>>div;
    }
    void showstudent()
    {
        cout<<"\n :THE STUDENT DETAIL IS : ";
        cout<<"\n NAME : "<<name<<"\t DOB : "<<dob<<"\t standard : "<<std<<"\t division : "<<div;
    }
};



int main()
{
    time t;
    t.showtime();
    date d;
    d.showdate();
    person r;
    r.showperson();
    student s;
    s.showstudent();

    return 0;
}
/*OUTPUT:
    Enter the time (hr,min,sec) = 1
    1
    1
    Time = 1hr : 1min : 1sec
    Enter the date of birth of person (dd/mm/yyyy)= 12/14/1999
    Date = 12/14/1999

    Enter the name of person = akki
    Enter the date of birth of person (dd/mm/yyyy)= 13/12/1999
    Enter the city of person = pune

    :THE PERSON DETAIL IS :
    NAME : akki     DOB : 13/12/1999        Address : pune

    Enter the name of student = akki
    Enter the date of birth of student = 13/12/1999
    Enter the standerd of student = BE
    Enter the div of student = A

    :THE STUDENT DETAIL IS :
    NAME : akki     DOB : 13/12/1999        standard : BE   division : A
*/