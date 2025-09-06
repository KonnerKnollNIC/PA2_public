/**
 * @file problem2.cpp
 * @author Konner Knoll
 * @brief 
 * @version 0.1
 * @date 2025-09-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using namespace std;

int main(){
    int feet = 0;
    int originalInches = 0;
    int inches = 0;

    cout << "Enter height in inches: ";
    cin >> originalInches;

    feet = originalInches / 12;
    inches = originalInches % 12;

    cout << originalInches << " in = " << feet << " ft " << inches << " in" << endl;

    return 0;
}