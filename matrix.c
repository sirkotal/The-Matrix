#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>
#include <cstdlib>

const int width = 60;
const int sleep = 100;
const int boolFlips = 5;

int matrix() {
    srand(time(NULL));

    const string chars = "1234567890qwertyuiopasdfghjkl"
                      "zxcvbnm./[]!?@#$%^&*-=_+";
    bool killswitch[width] = {};

    system("color a");

}