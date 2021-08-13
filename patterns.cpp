#include<iostream>
using namespace std;
int main(){

//     int i,j,n;
//     cout<<"enter the no :\n";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++)
//             cout<<" %d",j;
//         cout<<"\n";
//     }
// }*
                    //  output:    1
                    //             1 2
                    //             1 2 3
                    //             1 2 3 4
                    //             1 2 3 4 5



//     int i,j;
//     char ip,al='A';
//     cout<<"enter an uppercase char you want to print :\n";
//     cin>>ip;
//     for(i=1;i<=(ip-'A'+1);i++){
//         for(j=1;j<=i;j++){
//             cout<<al;          
//         }
//         ++al;
//         cout<<"\n";
        
//     }
//     return 0;
// }
//    Output:      A
//                 B  B
//                 C  C  C
//                 D  D  D  D
//                 E  E  E  E  E



    int i,j;
    char ip,k,al='A';
    cout<<"enter an uppercase char you want to print :\n";
    cin>>ip;
    for(i=0;i<(ip-'A'+1);i++){
        for(j=0;j<=i;j++){
            k=al+j-i;
            cout<<k<<" ";
        }
        al++;
        cout<<"\n";
    }
}
    // Output: A
    //         A B
    //         A B C
    //         A B C D
    //         A B C D E

//   int i,j;
//     int ip;
//     cout<<"enter an uppercase char you want to print :\n";
//     cin>>ip;
//     for(i=1;i<=ip;i++){
//         for(j=1;j<=i;j++)
//             cout<<((char)(j+64))<<" ";
//         cout<<"\n";
//     }
// }

 // Output: A
    //         A B
    //         A B C
    //         A B C D
    //         A B C D E


//     int i,j,n;
//     cout<<"enter the no :\n";
//     cin>>n;
//     for(i=n;i>=1;i--){
//         for(j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
// }
//  Output: 1 2 3 4 5
//          1 2 3 4
//          1 2 3
//          1 2
//          1


//     int i,j,m,k;
//     cout<<"Enter the no :\n";
//     cin>>m;
   
//     for(i=1;i<=m;++i){
//         //k=0;
//         for(j=1;j<=m-i;j++){
//             cout<<" ";
//         }
//         for (k=0;k<2*i-1;k++)
//         {
//            cout<<"*";
//           // ++k;
//         }
//         cout<<"\n";
//     }
// }
// Output:     *
//            ***
//           *****
//          *******
//         *********
//        ***********

