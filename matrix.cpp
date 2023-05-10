#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

#include <thread>
#include <cstdlib>

#define SUCCESS 0

const int width = 120;
const int sleeptime = 100;
const int boolFlips = 5;

int main() {
    srand(time(NULL));

    int n = 0;

    const std::string chars = "1234567890qwertyuiopasdfghjklzxcvbnm./[]!?@#$^&*-=_+";
    bool killswitch[width] = {};

    //system("color a");

    while (true) {
        for (int i = 0; i < width; i += 2) {
            if (killswitch[i]) {
                std::cout << "\033[32m";
                std::cout << chars[rand() % chars.size()] << " ";
                std::cout << "\033[0m";
            }    
            else
                std::cout << "  ";
        }
  
        for (int i = 0; i != boolFlips; i++) {
            n = rand() % width;
            killswitch[n] = !(killswitch[n]);
        }
  
        std::cout << std::endl;
  
        std::this_thread::sleep_for(std::chrono::milliseconds(sleeptime));
    }
    return SUCCESS;
}