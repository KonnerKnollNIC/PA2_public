/**
 * @file problem4.cpp
 * @author Konner Knoll
 * @brief Uses void functions to display the lyrics to a song
 * @version 0.1
 * @date 2025-09-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using namespace std;

void homies();
void semicolon();
void theCPU();
void stanza2();
void compile();
void stanza3();
void IPL();
void stanza4();
void fullCredit();
void stanza5();

int main(){
    // first stanza
    homies();
    semicolon();
    cout << endl;

    // second stanza
    homies();
    stanza2();
    cout << endl;

    // third stanza
    homies();
    stanza3();
    cout << endl;

    // fourth stanza
    homies();
    stanza4();
    cout << endl;

    // fifth stanza
    homies();
    stanza5();

    return 0;
}

void homies(){ // function for first set of lines
    cout << "Hey homies, my code is gonna rock this place\nWith a function named main and a curly brace\n";
}

void semicolon(){ // function for second set of lines
    cout << "I put a semicolon at the end of each line\nYou haters never seen code that looked so fine\n";
}

void theCPU(){ // function for third set of lines
    cout << "The CPU loves my code, no need to debug\nI can rap in C++ until it unplug\n";
}

void stanza2(){
    /* function for second stanza
    (minus the "homies" line - that's inserted later in the
    main code because it needs to stay at the top) */
    theCPU();
    semicolon();
}

void compile(){ // 4th set of lines
    cout << "The first time I try, my code compiles\nLost a point for style cause my comments are vile\n";
}

void stanza3(){
    compile();
    stanza2();
}

void IPL(){ // 5th set of lines
    cout << "Got help from the TAs in the IPL\nBut I didn't need it cause I code so well\n";
}

void stanza4(){
    IPL();
    stanza3();
}

void fullCredit(){ // 6th set of lines
    cout << "I got full credit on external correctness\nHey playa check this, my code eats yours for breakfast\n";
}

void stanza5(){
    fullCredit();
    stanza4();
}