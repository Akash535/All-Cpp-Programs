#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],sum[10][10],i,j,max,maxr,maxc;
    cout<<"enter the element in 3*3 Matrix A: \n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    cout<<"\nenter the element in 3*3 Matrix B: \n";
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
            sum[i][j]=a[i][j]+b[i][j];
    }
    cout<<"Addition of matrix is:\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"\t"<<sum[i][j]; 
        }
        cout<<"\n";
    }
}