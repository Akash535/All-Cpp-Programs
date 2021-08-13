#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],sub[10][10],i,j;
    cout<<"Enter the A matrix 3*3 : \n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    cout<<"\nenter the B Matrix 3*3 : \n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cin>>b[i][j];
    }

    cout<<"Matrix A is:\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cout<<"\t"<<a[i][j];
        cout<<"\n";
    }
    cout<<"Matrix B is:\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cout<<"\t"<<b[i][j];
        cout<<"\n";
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            sub[i][j]=a[i][j]-b[i][j];
    }
    cout<<"\nSubtraction of Matrix :\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cout<<"\t"<<sub[i][j];
        cout<<"\n";
    }
}