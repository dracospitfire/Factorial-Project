/*
  main.cpp
  Project-1

  Created by Austin Flores on 10/4/13.
  Copyright (c) 2013 dracospitfire. All rights reserved.
*/

#include <iostream>
#include <cmath>
#include <climits>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[])
{
    // 1) Initial attempt computing 15!"factorial" ints...
    short Failed_Attempt_1;
    
    Failed_Attempt_1 = (15 * 14) * (13 * 12) * (11 * 10) * (9 * 8) * (7 * 6) * (5 * 4) * (3 * 2) * 1;
    
    cout << "Failed attempt to compute 15! \"factorial\" using\n\tshort = " << Failed_Attempt_1 << "\n\n";
    
    int Failed_Attempt_2; // same as signed int

    Failed_Attempt_2 = (15 * 14) * (13 * 12) * (11 * 10) * (9 * 8) * (7 * 6) * (5 * 4) * (3 * 2) * 1;
    
    cout << "Failed attempt to compute 15! \"factorial\" using\n\tint = " << Failed_Attempt_2 << "\n\n";
    
    unsigned int Failed_Attempt_3;
    
    Failed_Attempt_3 = (15 * 14) * (13 * 12) * (11 * 10) * (9 * 8) * (7 * 6) * (5 * 4) * (3 * 2) * 1;
    
    cout << "Failed attempt to compute 15! \"factorial\" using\n\tunsigned int = " << Failed_Attempt_3 << "\n\n";
    
    long Failed_Attempt_4; // compute 15!"factorial" using 32-bit long...
    
    Failed_Attempt_4 = (15 * 14) * (13 * 12) * (11 * 10) * (9 * 8) * (7 * 6) * (5 * 4) * (3 * 2) * 1;
    
    cout << "Failed attempt to compute 15! \"factorial\" using\n\t32-bit long = " << Failed_Attempt_4 << "\n\n";
    
    unsigned long Failed_Attempt_5;
    
    Failed_Attempt_5 = (15 * 14) * (13 * 12) * (11 * 10) * (9 * 8) * (7 * 6) * (5 * 4) * (3 * 2) * 1;
    
    cout << "Failed attempt to compute 15! \"factorial\" using\n\t32-bit unsigned long = " << Failed_Attempt_5 << "\n\n";
    
    // 2) compute 15!"factorial" using 64-bit integers...
    int64_t Attempt_1_64bit;
    
    Attempt_1_64bit = (15.0 * 14) * (13 * 12) * (11 * 10) * (9 * 8) * (7 * 6) * (5 * 4) * (3 * 2) * 1;

    cout << "Attempt to compute 15! \"factorial\" using\n\t64-bit int = " << Attempt_1_64bit << "\n\n";
    
    // 3) compute and output 15!"factorial" using the double...
    double Attempt_2_double;
    
    Attempt_2_double = (15.0 * 14) * (13 * 12) * (11 * 10) * (9 * 8) * (7 * 6) * (5 * 4) * (3 * 2) * 1;
    
    cout << setprecision(1) << fixed;
    
    cout << "Attempt to compute 15! \"factorial\" using\n\tdouble int = " << Attempt_2_double << "\n\n";
    
    /* 4)
       compute and output the approximate value of 15!"factorial"
       computed by Stirling's formula
       useing the double type here, too...
    */
    double Attempt_3_approximation;
    
    const double PI = 3.14159265;
    
    Attempt_3_approximation = exp(-15)*pow(15,15)*sqrt(2*PI*15);
    
    cout << fixed;
    
    cout << "Attempt to compute 15! \"factorial\" using\n\tgiven Stirling's Formula, \n\tApproximation = " << Attempt_3_approximation << "\n\n";
    
    double Attempt_4_approximation; // testing different equation.
    
    Attempt_4_approximation = exp(-15)*pow(15,15)*pow(2*PI*15,.5);
    
    cout << fixed;
    
    cout << "Attempt to compute 15! \"factorial\" using\n\tremade Stirling's Formula, \n\tApproximation = " << Attempt_4_approximation << "\n\n";
    
    // final output:
    
    /* 1)
       the difference between the value computed using 64-bit integers and the value computed using Stirling's formula...
    */
    long long difference1;
   
    difference1 = Attempt_1_64bit - Attempt_3_approximation;
    
    cout <<"The difference between 64-bit value &\nthe approximation value\n\tis equal to: " << difference1 << "\n\n";
    
    /* 2)
       the difference between the value compute using doubles and the value computed using Stirling's formula...
    */
    long long difference2;
    
    difference2 = Attempt_2_double - Attempt_3_approximation;
    
    cout <<"The difference between double & the\napproximation value\n\tis equal to: " << difference2 << "\n\n";
  
    return 0;
}
