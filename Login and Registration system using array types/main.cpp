//suppers dude

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void Login()
{

}

void Register()
{

}


//I DECIDED TO STOP THIS PROJECT DUE TO IT JUST BEING TOO UNREASENABLE



int main()
{
    int mainmenuloginanswer;

    

    do
    {
        cout << "0. Quit\n1. Login\n2. Make a new account!\n";
        cin >> mainmenuloginanswer;

        switch(mainmenuloginanswer)
        {
            case 0:
                cout << "OK, thanks for nothing!\n";
                return 0;
            case 1:
                Login();
                break;
            case 2:
                Register();
                break;
        }

    } 
    while (mainmenuloginanswer != 0);

}