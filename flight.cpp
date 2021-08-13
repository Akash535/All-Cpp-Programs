/*Write a program to implement flight class with data member as flight no.,
source, destination and fare. Write a copy constructor and a member
function to display the flight information.*/
#include<iostream>
#include <string>
using namespace std;
class flight
{
      public :  string name;
        int fno;
        string source;
        string dest;
        float fare;
      public :
        flight(string name, int fno,string source, string dest,float fare)
        {
              cout<<"\nthe name of customer = "<<name;
            cout<<"\nthe flight number = "<<fno;
            cout<<"\nthe peakup city airpot = "<<source;
            cout<<"\nthe destination = "<<dest;
            cout<<"\nthe fare of ticket(amount of ticket) ="<<fare;
        }

        flight(const flight &f1)
        {
                name = f1.name;
              fno = f1.fno;
              source =f1.source;
              dest = f1.dest;
              fare = f1.fare;
        cout<<"\n\nthe name of customer = "<<name;
            cout<<"\nthe flight number = "<<fno;
            cout<<"\nthe peakup city airpot = "<<source;
            cout<<"\nthe destination = "<<dest;
            cout<<"\nthe fare of ticket(amount of ticket) ="<<fare;

        }
     


};
int main()
{
            // cout<<"\nEnter the name of customer = ";
            // cin>>name;
            // cout<<"\nEnter the flight number = ";
            // cin>>fno;
            // cout<<"\nEnter the peakup city airpot = ";
            // cin>>source;
            // cout<<"\nEnter the destination = ";
            // cin>>dest;
            // cout<<"\nEnter the fare of ticket(amount of ticket) =";
            // cin>>fare;
  flight f1("Sachin",205045,"Kolhapur","Mumbai",50.40);
  flight f2 = f1;
  return 0;
}