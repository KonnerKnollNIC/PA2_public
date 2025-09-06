/**
 * @file problem3.cpp
 * @author Konner Knoll
 * @brief Calculates energy drink-purchasing statistics based on survey results
 * @version 0.1
 * @date 2025-09-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using namespace std;

int main(){
    // define customers
    int customers = 20200;
    
    // calculate and display how many purchase 1 or more drinks per week (18% of total)
    int oneOrMore = customers * 0.18;
    cout << "Customers who purchase one or more energy drinks per week: " << oneOrMore << endl;

    // calculate and display how many purchase citrus flavored drinks (52% of total)
    int citrusFlavor = customers * 0.52;
    cout << "Customers who purchase citrus flavored energy drinks: " << citrusFlavor << endl;
}