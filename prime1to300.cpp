#include<iostream>
using namespace std;
int main(){
    int i,j,c;
    cout<<"Prime no of 1 to 300 :\n";
    for(i=1;i<=300;i++){
        c=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                c++;
                break;
            }
        }
        if(c==0 && i!=1){
            cout<<i<<" ";
        }
    }
}