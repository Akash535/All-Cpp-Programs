/*
Define class student which shows the information about the Student using
constructor and destructor - Include the following members
    Data Members
    1. Name of the Student
    2. Roll No
    3. Address
    4. Percentage
    Member functions
    1. To assign initial values
    2. To accept the values from user.
    3. To display all data to user including Grade by using following conditions 
        a. Per>=70 Distinction
        b. Per <70 and Per >=60 First Class
        c. Per<60 and Per>=40 Second class
        d. Per<40 Student is Fail
*/
#include<iostream>
using namespace std;
class Student{
    public :
    char name[100],address[100];
    int rollno;double per,n;
    Student(){
        cout<<"\nEnter the name of Student :\n"; cin>>name;
        cout<<"\nEnter the rollno :\n"; cin>>rollno;
        cout<<"\nEnter the Percentage :\n"; cin>>per;
        cout<<"\nEnter the address :\n"; cin>>address;
    }
    
    void student_data(){
        cout<<"\nStudent Info :";
        cout<<"\nName = "<<name<<"\tRollno = "<<rollno<<"\tPersentage = "<<per<<"\tAddress = "<<address<<"\n";
        if(per>=70){
            cout<<"\nStudent is Distinction";
        }
        else if(per<75 && per>=60){
            cout<<"\nStudent is First Class";
        }
        else if(per<60 && per>=40){
            cout<<"\nStudent is Secont Class";
        }
        else{
            cout<<"\nStudent is Fail"; 
        }
    }
};
int main(){
    Student s;
    s.student_data();
}

/*
Output :

    Enter the name of Student :
    Akash

    Enter the rollno :
    42

    Enter the Percentage :
    45.26

    Enter the address :
    Vimannagar

    Student Info :
    Name = Akash    Rollno = 42     Persentage = 45.26      Address = Vimannagar

    Student is Secont Class
*/