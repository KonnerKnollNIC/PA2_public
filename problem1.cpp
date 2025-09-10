/**
 * @file problem1.cpp
 * @author Konner Knoll
 * @brief This program calculates how many gallons of paint are needed to paint a fence
 * @version 0.1
 * @date 2025-09-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using namespace std;

int main(){
    // Defining initial values
    double height = 6;
    double length = 100;
    double squareFeetPerGallon = 340;
    double numCoats = 2; // number of coats of paint
    double numSides = 2; // number of sides on the fence

    // Calculating gallons needed and displaying to console
    int gallons = numCoats * height * length * numSides / squareFeetPerGallon;
    cout << "Gallons needed: " << gallons << endl;

    return 0;
}