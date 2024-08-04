#include <random>
#include <iostream>

int main()
{
    int guessed;
    std::string picked;
    std::cout << "pick a random number between 1-6" << std::endl;
    std::cin >> guessed;
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,6); 

    if (guessed == dist6(rng))
    {
        std::cout << "you guessed right" << std::endl;
        std::cout << "would you like to play again? (Y/N)" << std::endl;
        std::cin >> picked;
        if (picked == "Y")
        {
            main();
        }
        else if (picked == "N")
        {
            std::cout << "it was fun playing with you" << std::endl;
            system("pause");
            return 0;
        }
        else
        {
            std::cout << "Sorry i cant read your input" << std::endl;
            system("pause");
            return 0;
        }
    }
    else if (guessed != dist6(rng))
    {
        std::cout << "Sorry that wasent right the right number was " << dist6(rng) << " would you like to try again (Y/N)" << std::endl;
        std::cin >> picked;
        if (picked == "Y")
        {
            main();
        }
        else if (picked == "N")
        {
            std::cout << "it was fun playing with you feel free to try again!" << std::endl;
            system("pause");
            return 0;
            
        }
        else 
        {
            std::cout << "Im sorry i cant understand your input" << std::endl;
            system("pause");
            return 0;
        }

    }
    system("pause");
}