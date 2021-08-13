#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],mul[10][10],sum=0,i,k,j;
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
        for(j=0;j<3;j++){
            
            for(k=0;k<3;k++){
                sum=sum+a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    cout<<"\nMultiplication of Matrix :\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cout<<"\t"<<mul[i][j];
        cout<<"\n";
    }
}