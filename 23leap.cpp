#include<iostream>
using namespace std;
int main(){
    int ch,n,sq,c,l,cu;
   
    cout<<"Menu :\n";
    cout<<"1: Square\n";
    cout<<"2: Cube\n";
    cout<<"3: Leap\n";
   // cout<<"4: Exit\n";
    cout<<"Enter the Chioice :\n";
    cin>>ch;
    switch (ch)
    {
    case 1:{
        cout<<"Enter the no:\n";
        cin>>n;
        sq=n*n;
        cout<<"square is : "<<sq;   
            break;
        }       
    case 2:{
        cout<<"Enter the no:\n";
        cin>>n;
        cu=n*n*n;
        cout<<"cube is : "<<cu;   
            break;
        }    
    case 3:{
        cout<<"Enter the Year:\n";
        cin>>n;
        l=n/4;
        if (l==0)
            cout<<" is leap year\n",n;
        else
            cout<<" is not leap year\n",n;
            break;
        }  
        default : cout<<"Invalid case \n";
    }        
}