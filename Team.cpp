#include<iostream>
using namespace std;
class Team{
    public:
     string c[100],n[100],m[100];
    int age[100];double batavg[100],ballavg[100];
    

    
    void show(){
        //cout<<"\nenter the country,Name,Matches,Age,Batavg,ballavg\n";
        for(int i=1;i<=5;i++){
            cout<<"\nPlayer "<<i<<":\n";
            cout<<"Enter country name : ";cin>>c[i];
            cout<<"Enter player name : ";cin>>n[i];
            cout<<"Enter play matches : ";cin>>m[i];
            cout<<"Enter Age : ";cin>>age[i];
            cout<<"Enter the Batavg : ";cin>>batavg[i];
            cout<<"Enter the Ballavg : ";cin>>ballavg[i];
            
        }
        cout<<"..........................................................";
        cout<<"\nSr.No\tCountry\tName\tMatches\tAge\tBatavg\tBallavg\n\n";
        for(int i=1;i<=5;i++){
            cout<<i<<"\t"<<c[i]<<"\t"<<n[i]<<"\t"<<m[i]<<"\t"<<age[i]<<"\t"<<batavg[i]<<"\t"<<ballavg[i]<<"\n";
        }
        cout<<"..........................................................";
    }
};

int main(){
    Team team;
   team.show();
}

/*
Output :

        Player 1:
        Enter country name : ind
        Enter player name : sachin
        Enter play matches : 353
        Enter Age : 39
        Enter the Batavg : 58.26
        Enter the Ballavg : 10.24

        Player 2:
        Enter country name : aus 
        Enter player name : smith  
        Enter play matches : 240
        Enter Age : 30
        Enter the Batavg : 54.66
        Enter the Ballavg : 14.12

        Player 3:
        Enter country name : end
        Enter player name : root
        Enter play matches : 245
        Enter Age : 28
        Enter the Batavg : 48.26
        Enter the Ballavg : 09.21

        Player 4:
        Enter country name : nz
        Enter player name : kane      
        Enter play matches : 199
        Enter Age : 29
        Enter the Batavg : 51.95
        Enter the Ballavg : 09.12

        Player 5:
        Enter country name : sa
        Enter player name : kock      
        Enter play matches : 154
        Enter Age : 26
        Enter the Batavg : 42.21
        Enter the Ballavg : 15.28
        ..........................................................
        Sr.No   Country Name    Matches Age     Batavg  Ballavg

        1       ind     sachin  353     39      58.26   10.24
        2       aus     smith   240     30      54.66   14.12
        3       end     root    245     28      48.26   9.21
        4       nz      kane    199     29      51.95   9.12
        5       sa      kock    154     26      42.21   15.28
        ..........................................................
*/