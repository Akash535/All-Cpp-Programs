#include<iostream>
using namespace std;
int main(){
	double area,peri,l,w;
	cout<<"\nEnter the length & width of reactangle:\n";
	cin>>l>>w;
	area=l*w; peri=2*(l+w);
	cout<<"\nArea="<<area<< "\nPerimeter="<<peri;
}
