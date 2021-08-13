#include<iostream>
using namespace std;
int main(){
    int i,a,b,c,t;
    cout<<"Armstrong no bet 1 to 500 :\n";
    for(i=001;i<=500;i++){
        a=i-((i/10)*10);
        b=(i/10)-((i/100)*10);
        c=(i/100)-((i/1000)*10);
        t=(a*a*a)+(b*b*b)+(c*c*c);
        if(t==i)
            cout<<" "<<t;
    }
    cout<<"\n\n";
}