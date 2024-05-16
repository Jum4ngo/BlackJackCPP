// Online C++ compiler to run C++ program online
#include <iostream>
#include <chrono>
#include <thread>
#include <random>
#include <string>

int main() {
    std::string userInputOne;
    std::string userInputTwo;
    int chips = 500;
    std::string hitorstand;
    
    std::cout << "Welcome To Black Jack\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Would you like to play? |Yes| or |No| (Cap Sensitive)\n";
    std::cin >> userInputOne;
    
    if (userInputOne == "Yes") { // If user states yes, code continues, invali or no restarts code.
        std::cout << "Sounds Good! Let's get started \n";
    }
    else if (userInputOne == "No") {
        std::cout << "Ok, thanks for stoping by! Closing in 3";
        std::cout << " 2 ";
        std::cout << " 1 \n";
        std::cout << "Closing Now ";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        return 0;
    }
    else {
        std::cout << "Invalid, restarting program";
        return 0;
    }
    
    std::cout << "You currently have " << chips << " chips. \n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Place Your bet:\n";
    std::cout << "1. 20 Chips | 2. 50 Chips | 3. 100 Chips | 4. 300 Chips | 5. 500 Chips |\n";
    std::cin >> userInputTwo;
    
    if (userInputTwo == "1") {
        std::cout << "Lets get playing! Good Luck!\n";
        chips = chips - 20;
        std::cout << "You currently have " << chips << " chips. \n";
    }
    else if (userInputTwo == "2") {
        std::cout << "Let's get playing! Good Luck!\n";
        chips = chips - 50;
        std::cout << "You currently have " << chips << " chips. \n";
    }
    else if (userInputTwo == "3") {
        std::cout << "Let's get playing! Good Luck!\n";
        chips = chips - 100;
        std::cout << "You currently have " << chips << " chips. \n";
    }
    else if (userInputTwo == "4") {
        std::cout << "Let's get playing! Good Luck!\n";
        chips = chips - 300;
        std::cout << "You currently have " << chips << " chips. \n";
    }
    else if (userInputTwo == "5") {
        std::cout << "Let's get playing! Good Luck!\n";
        chips = chips - 500;
        std::cout << "You currently have " << chips << " chips. \n";
    }
    else {
        std::cout << "Invalid, restarting program";
        return 0;
    }
    
    std::random_device rd;      // Chat Gpt
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1, 21);
    int random_number = distribution(gen);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Dealer has: " << random_number << "\n" << std::endl; // End of chat gpt
    
    if (random_number == 21) {
        std::cout << "You lost";
        return 0;
    }
    else if (random_number > 21) {
        std::cout << "You won!";
        return 0;
    }
    std::uniform_int_distribution<int> random(1, 21);
    int random_numbertwo = distribution(gen);
    std::cout << "You have: " << random_numbertwo << "\n" << std::endl;
    
    if (random_numbertwo == 21) {
        std::cout << "You won";
        return 0;
    }
    else if (random_numbertwo > 21) {
        std::cout << "You lost";
        return 0;
    }
    if (random_numbertwo < 21) {
        std::cout << "Hit or Stand? (Cap Sensitive)\n";
        std::cin >> hitorstand;
        if (hitorstand == "Hit") {
            std::uniform_int_distribution<int> random(1, 21);
            int random_numberthree = distribution(gen);
            std::cout << "You now have: " << random_numberthree << "\n";
            if (random_numberthree == 21) {
                std::cout << "You won";
                return 0;
            }
            else if (random_numberthree > 21) {
                std::cout << "You lost";
                return 0;
            }
        }
        else if (hitorstand == "Stand") {
            std::cout << "You still have " << random_numbertwo << "\n";
        }
        else {
            std::cout << "Invalid, restarting program";
            return 0;
        }
    }
    
std::uniform_int_distribution<int> bet(1, 21);
int random_numberfour = distribution(gen);
random_number = random_number + random_numberfour;
std::cout << "Dealer now has: " << random_number << "\n";
if (random_number == 21) {
    std::cout << "You lost";
    return 0;
}
else if (random_number > 21) {
    std::cout << "You won";
    return 0;
}
if (random_number > random_numbertwo) {
    std::cout << "You lost";
    return 0;
}
else if (random_number < random_numbertwo) {
    std::cout << "You won";
}
    std::cout << "Thanks for playing";
    return 0;
}