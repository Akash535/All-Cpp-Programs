#include<iostream>
using namespace std;
int main(){
    int age;
    char p,c,h;
    cout<<"Person is male or female :\n";
    cin>>p;
    if(p=='m' ){
        cout<<"Person is age :\n";
        cin>>age;
        if(36>age && age>=25){
            cout<<"Person is lives in (city or village) :\n";
            cin>>c;
             if(c=='c'){
                cout<<" health is (excellent or poor) :\n";
                cin>>h;  
                if(h=='e')
                    cout<<p<<" male is the premium is Rs. 4000 per and his /her policy amount cannot exceed Rs. 2,00,000.\n";
            }
            else
                cout<<p<<" male is the premium is Rs. 6000 per and his /her policy amount cannot exceed Rs. 10,000.\n";
        }
        
    }
    else if(p=='f' ){
        cout<<"Person is age :\n";
        cin>>age;
        if(36>age && age>=25){
            cout<<"Person is lives in (city or village) :\n";
            cin>>c;
             if(c=='c'){
                cout<<" health is (excellent or poor) :\n";
                cin>>h;  
                if(h=='e')
                    cout<<"female is the premium is Rs. 3000 per and his /her policy amount cannot exceed Rs. 1,00,000.\n";
            }
    
    }
    
    else
    {
        cout<<"The person is not insured.\n";
        cout<<"his/her age is \n"<<age;
    }
    }
}
    