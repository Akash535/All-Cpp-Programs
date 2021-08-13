#include<iostream>
using namespace std;
int main(){
    int a[10][10],i,j,max,maxr,maxc;
    cout<<"enter the element in 5*5 array\n";
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            cin>>a[i][j];
    }
    cout<<"Array is:\n";
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            cout<<"\t"<<a[i][j];
        cout<<"\n";
    }
    max=a[0][0];
    for(i=0;i<5;i++){
       
        for(j=0;j<5;j++){
            
            if(max<a[i][j]){
                max=a[i][j];
                maxr=i;
                maxc=j;
            }
        }
    }
    cout<<"largest no is  "<<max;

}