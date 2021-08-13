#include<iostream>
using namespace std;
int main(){
    int a[10][10],t[10][10],i,j,s;
    cout<<"enter the no in 3*3 matrix:\n";
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            cin>>a[i][j];
    cout<<"matrix is :\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            t[j][i]=a[i][j];
    }
    s=1;
    for(i=0;i<3 && s;i++){
        for(j=0;j<3;j++){
            if(a[i][j] != t[i][j]){
                s=0;
                break;
            }
        }
    }
    if(s==1){
        cout<<"given matrix is symmetric matrix :\n";
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout<<"\t"<<a[i][j];
            }
            cout<<"\n";
        }
    }
    else
        cout<<"given matrix is not symmetric matrix\n";
}

/*
output :

matrix is :
        3       -2      4
        -2      6       2
        4       2       3
given matrix is symmetric matrix :
        3       -2      4
        -2      6       2
        4       2       3

*/