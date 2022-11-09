//Suppers dude

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>
#include <fstream>

void reset()
{
    std::ifstream file("PersonalRecord.txt");
    if (!file.is_open())
    {
        std::cout << "Unable to reset Personal Record\n";
        return;
    }
    std::ofstream output("PersonalRecord.txt");
    output << 251;
    std::cout << "Succsesfully reset personal record!\n";
    
}

void save_score(int count)
{
    std::ifstream input("PersonalRecord.txt");
    if (!input.is_open())
    {
        std::cout << "Unable to read file\n";
        return;
    }

    int p_record;
    input >> p_record;

    std::ofstream output("PersonalRecord.txt");
    if (!output.is_open())
    {
        std::cout << "Unable to read file\n";
        return;
    }

    if(count < p_record)
    {
        output << count;
    }
    else 
    {
        output << p_record;
    }

}

void print_vector(std::vector<int> vector)
{
    std::cout << "Guesses: ";
    for(int i = 0; i <vector.size(); i++)
    {
        std::cout << vector[i] << "\t";
    }
    std::cout << "\n";
}


void play_game()
{
    std::vector<int> guesses;
    int count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number: ";
    while(true)
    {
        int guess;
        std::cin >> guess;
        count++;

        guesses.push_back(guess);

        if(guess == random)
        {
            std::cout << "You win!\n";
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low\n";
        }
        else
        {
            std::cout << "Too high\n";
        }

    }

    std::cout << "Good job! It took you: " << count << " tries to win!\n";
    save_score(count);
    print_vector(guesses);
}

int main()
{

    srand(time(NULL));
    int choice;
    do
    {
        //PR file Reading starts here
        //Purpose get the PR in a int called PR, through ifstream called PR_File

        int PR;
        std::ifstream PR_File ("PersonalRecord.txt");
        PR_File >> PR;

        //PR File reading ends here



        std::cout << "0. Quit\n" << "1. Play Game\n" << "2. Reset Personal Record (Current: ";
        if(PR == 251)
        {
            std::cout << "None";
        }
        else
        {
            std::cout << PR;
        }
        std::cout << ")\n ";


        std::cin >> choice;

        switch(choice)
        {
            case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
            case 1:
                play_game();
                break;
            case 2:
                reset();
                break;
            case 69:
                std::cout << "haha EE go brrr\n";
                break;
        }
    }
    while(choice != 0);
}