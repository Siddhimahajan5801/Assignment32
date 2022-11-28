#include <iostream>
#include<string.h>
using namespace std;

class Player
{
public:
    int player_no;
    char name[30];
    int no_of_matches;
    int * no_of_goals;

    Player (int num, char *a , int m )
    {
        player_no = num;
        strcpy(name , a);
        no_of_matches = m;

        no_of_goals = new int [m];

        for (int i=0; i<m; i++)
        {
            cout<<"\nNo. of goals in Match-"<<i+1<<" : ";
            cin>>no_of_goals[i];
        }

    }

    void display()
    {
        cout<<"\n----------------------------------------------------------\n";
        cout<<"\nPlayer no.          =    "<<player_no;
        cout<<"\nPlayers's Name      =    "<<name;
        cout<<"\nNumber of Matches   =    "<<no_of_matches;
        cout<<endl;

        for (int i=0; i<no_of_matches; i++)
        {
        cout<<"\nNumber of Goals in Match-"<<i+1<<" : "<<no_of_goals[i];
        }
        cout<<"\n----------------------------------------------------------\n";
    }

};

int main ()
{
    cout<<"For player 1 \n ";
    Player P(1, "Soham" , 4 );
    P.display();

    cout<<"For player 2 \n ";
    Player P1(2, "Shreya", 3 );
    P1.display();

    return 0;
}
