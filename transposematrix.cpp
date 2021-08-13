#include<iostream>
using namespace std;
int main(){
    int a[10][10],t[10][10],i,j;
    
    cout<<"enter no of 3*3 matrix :\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    cout<<"Array is :\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cout<<"\t"<<a[i][j];
        cout<<"\n";
    }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            t[j][i]=a[i][j];

    cout<<"\nTranspose Matrix :\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cout<<"\t"<<t[i][j];
        cout<<"\n";
    }
}