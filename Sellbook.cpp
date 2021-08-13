/*Create one class Library which having data members as author, title, 
price, publisher and no. of copies. Assign some specific values to all its data 
members and create member functions as 
Accept_Book_info(),Print_Book_info().
Create function such as Selling_Prise() on the following basis of conditions:
If Actual price of the book is greater than equal to 2500/- then
discount=1.00%
If actual price is less than 2500/- then discount=0.5%
Then find out final selling price of the book.*/
#include<iostream>
#include<string>
using namespace std;
class library
{
    string author;
    string title;
    float price;
    int copy;
    public :
    void Accept_Book_info()
    {   
        cout<<"\n Enter the name of book = ";
        cin>>title;
        cout<<"\n Enter the author of book = ";
        cin>>author;
        cout<<"\n Enter the price of book = ";
        cin>>price;
        cout<<"\n Enter the books number of copy = ";
        cin>>copy;
    }
    void Print_Book_info()
    {
        cout<<"\nName of book : "<<title<<"\nAuthor of book : "<<author<<"\nPrice of book : "<<price<<"\nNumber of copy : "<<copy;
    }
    void selling_price()
    {
        cout<<"\nEnter the price of book whatever u buy = ";
        cin>>price;
        if(price>2500)
        {
        cout<<"\n U got the 1%% discount on book price\n";
        price=price - (price/100);
        cout<<"\nAfter the discount price of book is = "<<price;
        }
        else
        {
             cout<<"\n U got the 0.5%% discount on book price\n";
        price=price - (price*0.5/100);
        cout<<"\nAfter the discount price of per book is = "<<price;
        }
    }
};
int main()
{
   library l; 
    l.Accept_Book_info();
    l.Print_Book_info();
    l.selling_price();

    return 0;
}
/*OUTPUT
 Enter the name of book = Shar

 Enter the author of book = sachin

 Enter the price of book = 2500

 Enter the books number of copy = 600

Name of book : Shar
Author of book : sachin
Price of book : 2500
Number of copy : 600
Enter the price of book whatever u buy = 2000

 U got the 0.5%% discount on book price

After the discount price of per book is = 1990
*/