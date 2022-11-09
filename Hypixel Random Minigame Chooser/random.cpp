//suppers dude

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <array>

using std::cout;
using std::cin;
using std::endl;

void random()
{ 
    int random = rand() % 53;
    cout << random << endl;
    return 0;
}

int main()
{
    std::string no = "No";
    std::string yes = "Yes";
    std::string answer;
    cout << "Say \"Yes\" if you want to choose a random minigame, or \"No\" if you want to quit! " << std::endl;
    cin >> answer;
    
    if(answer == no)
    {
        cout << "Okay thanks for nothing!" << endl;
        return 0;
    }
    else if(answer != yes)
    {
        cout << "Please say either \"No\" or \"Yes\"" << endl;
        cin >> answer;
    }
    

    do
    {

        if(answer == no)
    {
        cout << "Okay thanks for nothing!" << endl;
        return 0;
    }
        else if(answer != yes)
    {
        cout << "Please say either \"No\" or \"Yes\"" << endl;
        cin >> answer;
    }

        if(answer == yes)
        {
            random();
        }
    }
    while(answer != no);
    return 0;
}

