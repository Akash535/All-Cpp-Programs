#include<iostream>
using namespace std;
int main(){
	float cp,dis,n;
	int user;
	cout<<"\nEnter the cost price :\n";
	cin>>cp;	
	cout<<"\nEnter the user is student or not (put the 1 for Student else 0):\n";
	cin>>user;
	
	if(user==1){
		if(cp>=500){
			cout<<"\nu got the 10%% discount for price:"<<cp;
			n=(cp/100)*10;
			dis=cp-n;
			cout<<"\n after discount price is "<<dis;
		}
		else{
			cout<<"\nu got the 5%% discount for price:"<<cp;
			n=(cp/100)*5;
			dis=cp-n;
			cout<<"\nafter discount price is "<<dis;
		}
	}
	else{
		if(cp>=500){
			cout<<"\nu got the 8%% discount for price:"<<cp;
			n=(cp/100)*8;
			dis=cp-n;
			cout<<"\n after discount price is "<<dis;
		}
		else{
			cout<<"\nu got the 2%% discount for price:"<<cp;
			n=(cp/100)*2;
			dis=cp-n;
			cout<<"\n after discount price is "<<dis;
		}
	}
}	
