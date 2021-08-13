#include<iostream>
using namespace std;
int main(){
    int a[10][10],i,j;
    cout<<"enter the no in matrix 3*3 \n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Matrix is :\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"Upper triangular :\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i>j)
                cout<<"\t0";
            else
                cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
}