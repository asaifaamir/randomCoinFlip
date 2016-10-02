//
//  main.cpp
//  randomCoinFlipping
//  Uses random library from C++11 and generates a sequence of 0's and 1's that are interprated as Heads and Tails in coin flips. The project is created as a part of a simulation for Stochastic Models.
//
//  Created by Asaif Butt on 10/1/16.
//  Copyright © 2016 Asaif Butt. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int main() {
    
    int numberFlips;
    default_random_engine generator;
    uniform_int_distribution<int> distribution(0,1);
    
    cout << "Please enter the number of flips you want to do: ";
    cin >> numberFlips;

    for(int i = 0; i < numberFlips; ++i)
    {
        int coinFlip = distribution(generator);
      
        
        if (coinFlip == 0)
        {
            cout << "Heads" << ' ';
        }else
        {
            cout << "Tails" << ' ';
        }
    }

    
    return 0;
}
