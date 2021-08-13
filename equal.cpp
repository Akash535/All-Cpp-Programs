#include<iostream>
using namespace std;
int main(){
	double a,b,c;
	cout<<"\nenter the three no :\n";
	cin>>a>>b>>c;
	
	if(a==b && b==c)
		cout<<"\nAll three nos are equal:"<<a;
	
	else
		cout<<"\nAll three nos are not equal:"<<a<<" "<<b<<" "<<c;
}
