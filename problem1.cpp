/**
 * @file problem1.cpp
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
    // Defining initial values
    double height = 6;
    double length = 100;
    double squareFeetPerGallon = 340;
    double numCoats = 2;

    // Calculating gallons needed and displaying to console
    double gallons = numCoats * height * length / squareFeetPerGallon;
    cout << "Gallons needed: " << gallons << endl;

    return 0;
}