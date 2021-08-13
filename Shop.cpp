/*A book shop maintains the inventory of books that are being sold at the
shop. The list includes details such as author, title, price, publisher and no. of
copies. Whenever a customer wants a book, the sales person inputs the title
and author and the system searches the list and displays whether it is
available or not. If it is not, an appropriate message is displayed. If it is, then
the system displays the book details and requests for the number of copies
required. If the requested copies are available, the total cost of the requested
copies is displayed; otherwise the message “Required copies not in stock” is
displayed.
Incorporate the following features:
1.Value of attributes should be assign to some value.
2.Create Accept_book_Info() and Display_Book_Status() methods.*/
#include<iostream>
#include<string>
using namespace std;
class library
{
    string author[100];
    string title[100],name;
    float price[100];
    int copy[200],n,no,i;
    public :
    void Accept_Book_info()
    {   
        cout<<"How many book data u will entered = ";
        cin>>n;
        for(i=0;i<n;i++)
        {
         cout<<"\n Enter the name of book = ";
         cin>>title[i];
          cout<<"\n Enter the author of book = ";
          cin>>author[i];
           cout<<"\n Enter the price of book = ";
           cin>>price[i];
        cout<<"\n Enter the books number of copy = ";
        cin>>copy[i];
        }

    }
    void Print_Book_info()
    {
        cout<<"\nName of book\tAuthor of book\tPrice of book\tNumber of copy";
    for(i=0;i<n;i++)
        cout<<"\n"<<title[i]<<"\t\t"<<author[i]<<"\t\t"<<price[i]<<"\t\t"<<copy[i];
    }
    void serch_Book()
    {
        cout<<"\nEnter the book name = ";
        cin>>name;
        for(i=0;i<=n;i++)
        {
        if(name==title[i])
        {
           cout<<"\nName of book : "<<title[i]<<"\nAuthor of book : "<<author[i]<<"\nPrice of book : "<<price[i]<<"\nNumber of copy : "<<copy[i]; 
            cout<<"\nEnter how many copy u want = ";
            cin>>no;
            if(no<=copy[i])
            {
                cout<<"\nYes no. of copy is avilable ";
            }
            else
            {
            cout<<"\nOut of stock !!! ";
            }
             break;
        }
         
        else if(name!=title[i])
        {
        cout<<"\nSorry !!!! Book is not avilable ";
        break;
        }
        }
   }
};
int main()
{
    library l;
    l.Accept_Book_info();
    l.Print_Book_info();
    l.serch_Book();
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ shop.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe     
How many book data u will entered = 1

 Enter the name of book = sun

 Enter the author of book = sachin

 Enter the price of book = 2500

 Enter the books number of copy = 600

Name of book    Author of book  Price of book   Number of copy

Name of book : sun
Author of book : sachin
Price of book : 2500
Number of copy : 600
Enter how many copy u want = 800

Out of stock !!!
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ shop.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe     
How many book data u will entered = 1

 Enter the name of book = sun

 Enter the author of book = sachin
 Enter the price of book = 2500.

 Enter the books number of copy = 600

Name of book    Author of book  Price of book   Number of copy
sun             sachin          2500            600
Enter the book name = san

Sorry !!!! Book is not avilable
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/
