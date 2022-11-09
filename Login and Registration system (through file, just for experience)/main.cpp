//suppers dude

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


void Register()
{
    std::string username;
    unsigned int password;

    std::ofstream username_file ("hhoandalskdjfaklshdfl;jkahs.txt");
    if(!username_file.is_open())
    {
        cout << "Unable to open Username folder!\n";
        return;
    }
    std::ofstream password_file ("jjoandflknemkahlfjaljalksd.txt");
    if(!password_file.is_open())
    {
        cout << "Unable to open Password folder!\n";
        return;
    }

    cout << "(Username can only include letters!)\n" << "Username: \n";
    cin >> username;
    cout << "(Password can only include numbers)\n" << "Password: \n";
    cin >> password;

    username_file << username;
    password_file << password;

    cout << "Succsesful\n";
    return;
    
}


void Login()
{
    //the "c" before username and password copies stands for correct,
    //which means the correct password/username we are comparing with the input.
    std::string cUsername;
    unsigned int cPassword;

    std::string Username;
    unsigned int Password;


    std::ifstream username_file ("hhoandalskdjfaklshdfl;jkahs.txt");
    username_file >> cUsername;

    if(!username_file.is_open())
    {
        cout << "Unable to find Username!\n";
        return;
    }

       std::ifstream password_file ("jjoandflknemkahlfjaljalksd.txt");
    password_file >> cPassword;

    if(!password_file.is_open())
    {
        cout << "Unable to find Password!\n";
        return;
    }
    cout << "Note: the Username can only include letters\n";
    cout << "Username: \n";
    cin >> Username;
    cout << "Note: the Password can only include numbers\n";
    cout << "Password: \n";
    cin >> Password;

    //lmao im so proud of myself for this

    if(Username == cUsername && Password == cPassword)
    {
        cout << "Login Succsesfull\n";
        return;
    }
    else if(Username != cUsername || Password != cPassword)
    {
        cout << "Wrong Username or Password\n";
        return;
    }
    else
    {
        cout << "Something went wrong! Please try again.\n";
        return;
    }

    return;
}


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