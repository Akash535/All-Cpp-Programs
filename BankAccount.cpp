/*
Define a class to represent a bank account. Include the following members
Data Members
    1. Name of the depositor
    2. Account number
    3. Type of account
    4. Balance amount in the account.
Member functions
    1. To assign initial values
    2. To deposit an amount
    3. To withdraw an amount after checking the balance
    4. To display name and balance.
*/
#include<iostream>
using namespace std;
class Bank_Account
{

    public:
        char namedep[100],acno[100],ty[100];
        double bal;
        int n,d,i;  
        double dep;
        public:
        Bank_Account(){
            
                
                cout<<"\nEnter name of member : ";cin>>namedep;
                cout<<"Enter Account no : ";cin>>acno;
                cout<<"Enter type of account : ";cin>>ty;
                cout<<"Enter balance : ";cin>>bal;
            
        }
         void initial(){
            cout<<"...................................................";
            cout<<"\nMember info: "<<"\n\tName = "<<namedep<<"\n\tAccount no = "<<acno<<"\n\tType of account = "<<ty<<"\n\tBalance = "<<bal<<"\n";         
            cout<<"....................................................";
        }
        void deposit(){         
                    cout<<"\ndeposit ammount = ";cin>>dep;
                    bal=bal+dep;
                    cout<<"\tNow Balance is : "<<bal;
        }
        void balance(){
            double with;
                cout<<"\n....................................................";
                cout<<"\n\nEnter the Withdraw Ammount  = ";cin>>with;
                bal=bal-with;
            }
        
        void display(){
            cout<<"To withdraw an amount after checking the balance is :\n";
            cout<<"\n\tNmae = "<<namedep<<"\tAvailable Ammount = "<<bal;
            cout<<"\n....................................................";

        }
};
int main(){
    Bank_Account ba;
    ba.initial();
    ba.deposit();
    ba.balance();
    ba.display();
}
/*
Output:

    Enter name of member : akash
    Enter Account no : 7721842203
    Enter type of account : saving
    Enter balance : 45000
    ...................................................
    Member info:
            Name = akash
            Account no = 7721842203
            Type of account = saving
            Balance = 45000
    ....................................................
    deposit ammount = 4512
            Now Balance is : 49512
    ....................................................

    Enter the Withdraw Ammount  = 9821
    To withdraw an amount after checking the balance is :

            Nmae = akash    Available Ammount = 39691
    ....................................................
*/