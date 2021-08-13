/*
Write a Program to implement a sphere class with appropriate members
and
member function to find the surface area and the volume.
(Surface = 4 π r2 and Volume = 4/ 3 π r3)
*/
#include<iostream>
//#define pi=3.14
using namespace std;
class Sphere{
    public:
    double r,s,v,pi=3.14;
    void show(){
        cout<<"Enter the redius of Sphere:\n";
        cin>>r;
        s=4*pi*r*r;
        v=(4/3)*pi*r*r*r;
        cout<<"Surface area = "<<s<<"\nVolume = "<<v<<"\n";
    }
};

int main(){
    Sphere sp;
    sp.show();
}

/*
Output :
    Enter the redius of Sphere:
    5
    Surface area = 314
    Volume = 392.5

*/