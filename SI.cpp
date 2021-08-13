#include<iostream>
using namespace std;
int main(){
	double p,r,t,si;
	cout<<"\nEnter the amount or principle:";
	cin>>p;
	cout<<"\nEnter the rate of intrest :";
	cin>>r;
	cout<<"\nEnter the time:";
	cin>>t;
	
	si=(p*r*t)/100;
	cout<<"\nSimple intrest of given data: "<<si;
}
