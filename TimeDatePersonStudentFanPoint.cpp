/*Create the following classes and write member functions and display proper
information to user using constructor and destructor.
a) Time b) Date c) Person d) Student e) Fan f) Point
*/
#include<iostream>
using namespace std;
class Time{
    public:
    char time[100];
    Time(){
        cout<<"\nEnter the Time (hours,min,sec):\n";
        cin>>time;
        cout<<"\nTime is : "<<time<<"\n\n";

    }
};
class Date{
    public:
    char date[100];
    Date(){
        cout<<"\nEnter the Date(DD/MM/YYYY):\n";
        cin>>date;
        cout<<"\nDate is : "<<date<<"\n\n";

    }
};
class Person{
    public:
    char name[100],add[100];
    Person(){
        cout<<"\nEnter the Person name:\n";
        cin>>name;
        cout<<"\nEnter the Address:\n";
        cin>>add;
        cout<<"\nperson Name is : "<<name<<"\taddress : "<<add<<"\n\n";

    }
};
class Student{
    public:
    char n[100];
    double per;
    Student(){
        cout<<"\nEnter the Student name:\n";
        cin>>n;
        cout<<"\nEnter the persentage:\n";
        cin>>per;
        cout<<"\nStudent name : "<<n<<"\tPersentage : "<<per<<"\n\n";

    }
};
class Fan{
    public:
    char fn[100];
    double price;
    Fan(){
        cout<<"\nEnter the Fan name:\n";
        cin>>fn;
        cout<<"\nEnter the Price:\n";
        cin>>price;
        cout<<"\nFan name : "<<fn<<"\tprice : "<<price<<"\n\n";

    }
};
int main(){
    Time t;
    Date d;
    Person p;
    Student s;
    Fan f;
    
}

/*
Output:
    Enter the Time (hours,min,sec):
    1hr-35min-34sec

    Time is : 1hr-35min-34sec


    Enter the Date(DD/MM/YYYY):
    13/12/1999

    Date is : 13/12/1999


    Enter the Person name:
    Akash

    Enter the Address:
    pune

    person Name is : Akash  address : pune


    Enter the Student name:
    Sachin

    Enter the persentage:
    58.21
    Student name : Sachin   Persentage : 58.21


    Enter the Fan name:
    sys

    Enter the Price:

    Fan name : sys  price : 888.21
*/