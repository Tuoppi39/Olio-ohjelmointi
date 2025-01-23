﻿#include <iostream>z
#include <cstdlib>
#include <ctime>


using namespace std;

int game(int maximum)
{
    srand(std::time(0));
    short randomValue = (rand()%maximum)+1;  //otetaan jakojäännös, nyt pitäisi olla välillä 1-20
    short userValue;
    bool stayInLoop = true;
    short count = 0;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<maximum<<endl;
        cin>>userValue;
        count++;
        if(userValue == randomValue)
        {
            cout<<"Arvasit oikein luku = "<<userValue<<endl;
            stayInLoop = false;
        }
        else if(userValue<randomValue)
        {
            cout<<"Lukusi on liian pieni"<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri"<<endl;
        }


    }
    return count;
}

int main()
{
    cout << "Lets play...!" << endl;
    short range = 0;
    cout << "Give max value"<<endl;
    cin>>range;
    cout << "Your result = "<<game(range)<<endl;
    return 0;
}
