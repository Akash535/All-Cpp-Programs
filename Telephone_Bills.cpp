/*
Write a program to implement a telephone bill class with Name, Address,
Tel. No., No. of calls as data members. Compute the amount to be paid if the
charges per call is Rs. 2/-
*/

#include<iostream>
using namespace std;
class Telephone{
    public :
    double no[100];
    int n,bi[100];
    string name[100],address[100],telno[100];
    void show(){
        cout<<"enter the no of user\n";
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<"\tUser "<<i<<":\n";
            cout<<"Enter User Name : ";cin>>name[i];
            cout<<"Enter User Address : ";cin>>address[i];
            cout<<"Enter Telephone no : ";cin>>telno[i];
            cout<<"Enter No of Calls : ";cin>>no[i];
            bi[i]=no[i]*2;
        }
        cout<<".....................................................................................................";
        cout<<"\nSr.No\t\tName\t\tAddress\t\tTelephone_no\t\tNo_of_Calls\t\tBills\n\n";
        for(int i=1;i<=n;i++){
            cout<<i<<"\t\t"<<name[i]<<"\t\t"<<address[i]<<"\t\t"<<telno[i]<<"\t\t"<<no[i]<<"\t\t"<<bi[i]<<" rs\n";
        }
        cout<<".....................................................................................................";
    }
};
int main(){
    Telephone t;
    t.show();
}


/*
Output:

.....................................................................................................
Sr.No           Name            Address         Telephone_no            No_of_Calls             Bills

1               akash           kharadi         7721842203              14                  28 rs
2               sachin          vimannagar      8999004504              22                  44 rs
3               omkar           kharadi         7350089474              13                  26 rs
.....................................................................................................

*/