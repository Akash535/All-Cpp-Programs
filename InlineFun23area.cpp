/*Implement inline function for the following programs
    a. Square of the number
    b. Cube of the number
    c. Area of rectangle
*/
#include<iostream>
using namespace std;
inline int square(int s){
    int sq;
    sq=s*s;
    cout<<"Square root is : "<<sq;
}
inline int cube(int c){
    int cu;
    cu=c*c*c;
    cout<<"Cube root is : "<<cu;
}
inline int rectangle(int l,int b){
    int area;
    area=l*b;
    cout<<"Area of rectangle is : "<<area;
}
int main(){
    int s,c,l,b;
    cout<<"\nEnter the square : \n";cin>>s;
    square(s);
    cout<<"\n\nEnter the cube : \n";cin>>c;
    cube(c);
    cout<<"\n\nEnter the length and width : \n";cin>>l>>b;
    rectangle(l,b);
}
/*
Output :

    Enter the square :
    5
    Square root is : 25

    Enter the cube :
    12
    Cube root is : 1728

    Enter the length and width :
    14
    12
    Area of rectangle is : 168
*/