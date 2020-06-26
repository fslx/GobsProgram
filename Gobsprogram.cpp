#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int main()
{
    system("Color 02");
    string choice = "Gob's Program: Y/N?\n";
    std::cout << choice;
    std::cin >> choice;
    


    for (int i = 0; i < 50000; i++) { // in the show, this looks like a infinite loop, but, we know better than that, the best way to simulate it is probably an interation of 50000.
        std::cout << "PENUS PENUS PENUS PENUS PENUS PENUS\n"; 

    }
    return 0;
    
}
