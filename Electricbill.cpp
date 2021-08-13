/*Q.3 An electricity board charges the following rates to domestic users to
discourage large consumption of energy:
For the first 30 units - 1.50/- per unit
For next 200 units - 3.00/- per unit
Beyond 300 units - 4.25/- per unit
Create a class ElectricityBill for atleast 5 users with following opeartions….
Write a program to read the name of the user and number of units consumed
and print out the charges with names.
If the total amount is more than Rs. 500.00 then an additional surcharge of 15%
is added.*/ 
#include <iostream>
#include<string.h>
using namespace std;
class bill   //electric bill
{
   

    public:
     string name[100];
    float unit[100];
    float c[100];
    bill()
    {
        for(int i=1;i<=5;i++)
        {
            cout<<"\nEnter the name of customer = ";
            cin>>name[i];
            cout<<"Enter billing unit = ";
            cin>>unit[i];
            
        }
       
    }
    void show()
    {
        for(int i=1 ;i<=5;i++){
            if(unit[i]<30)
            {
                cout<<"\n\nThe charges will applied in given unit is 1.5rs per unit";
                c[i]=unit[i]*1.5;
                cout<<"\nName of customer = "<<name[i]<<"\namount bill for given "<<unit[i]<<" unit is = "<<c[i];
            }
            else if(unit[i]>30 && unit[i]<300)
            {
                cout<<"\n\nThe charges will applied in given unit is 3rs per unit";
                c[i]=unit[i]*3;
                
                if(c[i]>500)
                {
                    cout<<"\nThe customer had total amount is more than Rs. 500.00 then an additional surcharge of 15%  ";
                    c[i]= c[i] + (c[i]*15/100);
                cout<<"\nName of customer = "<<name[i]<<"\namount bill for given "<<unit[i]<<" unit is = "<<c[i];
                }
               else
                cout<<"\nName of customer = "<<name[i]<<"\namount bill for given "<<unit[i]<<" unit is = "<<c[i];

            }
            else if(unit[i]>300)
            {
                cout<<"\n\nThe charges will applied in given unit is 4.25rs per unit";
                c[i]=unit[i]*4.25;
                if(c[i]>500)
                {
                    cout<<"\nThe customer had total amount is more than Rs. 500.00 then an additional surcharge of 15%  ";
                    c[i]= c[i] + (c[i]*15/100);
                    cout<<"\nName of customer = "<<name[i]<<"\namount bill for given "<<unit[i]<<" unit is = "<<c[i];
                }

            }

        }
        cout<<"\n\nName of customer\tamount";
        for(int i=1 ;i<=5;i++)
        {
            cout<<"\n\t"<<name[i]<<"\t\t"<<c[i];        }
    }
};
int main()
{
    bill b;
    b.show();
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ electricbill.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ electricbill.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe

Enter the name of customer = sachin
Enter billing unit = 150

Enter the name of customer = dev
Enter billing unit = 25

Enter the name of customer = akash
Enter billing unit = 350

Enter the name of customer = sakshi
Enter billing unit = 400

Enter the name of customer = suraj
Enter billing unit = 100


The charges will applied in given unit is 3rs per unit
Name of customer = sachin
amount bill for given 150 unit is = 450

The charges will applied in given unit is 1.5rs per unit
Name of customer = dev
amount bill for given 25 unit is = 37.5

The charges will applied in given unit is 4.25rs per unit
The customer had total amount is more than Rs. 500.00 then an additional surcharge of 15%
Name of customer = akash
amount bill for given 350 unit is = 1710.62

The charges will applied in given unit is 4.25rs per unit
The customer had total amount is more than Rs. 500.00 then an additional surcharge of 15%
Name of customer = sakshi
amount bill for given 400 unit is = 1955

The charges will applied in given unit is 3rs per unit
Name of customer = suraj
amount bill for given 100 unit is = 300

Name of customer        amount
        sachin          450
        dev             37.5
        akash           1710.62
        sakshi          1955
        suraj           300
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> 
*/