// code to create a randomized dice system
// and output the amount of repetition for all combinations

#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

// main func

int main() {
    unsigned int seed, rolls;

    // randomized seed
    
    cin >> seed;
    srand(seed);

    // gather input
    
    cout << "How many times do you want the two dice rolled? ";
    cin >> rolls;

    // check if rolls is 0
    
    if (rolls == 0) 
    {
        // no rolls, terminate program
    } 
    else 
    {
       
        // 2D array 
        
        const int SIZE = 6;
        unsigned int counts[SIZE][SIZE] = {0};

        // simulate dice rolled
        
        for (unsigned int i = 0; i < rolls; ++i) {
            int die1 = rand() % SIZE + 1; 
            int die2 = rand() % SIZE + 1;
            counts[die1 - 1][die2 - 1]++; 
        }

        // output results of combination
        
        cout << "The combinations:\n";
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                cout << "Die 1 = " << (i + 1) << " Die 2 = " << (j + 1)
                     << " occurred " << counts[i][j] << " times.\n";
            }
        }
    }
    return 0;
}
