//***********************************************************************************
//! This is an attempt to get more people into the CS lab.  
//! This project will result in high numbers of unique students logged-into the Lab.
//! By demonstrating a higher volume of unique students utilizing our Lab, 
//!  we can ask for more financial resources from the School's Administration.
//!
//! We can require that all students who want to participate must complete 1 hour 
//!  of lab time and review their solution with a Lab Aide before submitting it. 
//! In these review sessions, Lab Aides can ask leading questions about the students
//!  work.  Why they did certain things over others, or if they think they can
//!  improve their program in any areas.  
//! The reviews would take no more than 5 mins each.
//!
//! With the offer of an extra credit point from professors, an exciting competition,
//!  and required time-in-lab, I think we can really see a boost in our lab numbers.
//! Proposed by Bob Baker - Lab Aide
//***********************************************************************************

//***********************************************************************************
//? The "interesting" parts of this problem:
//?  * Taking care of IV and IX properly.  This will take some critical thinking.
//?      There are super simple and not obvious ways of doing this and vice-versa.
//?  * Handling of bad data (i.e. roman numberals in the wrong place / order)
//?     (I think this is the hardest part)
//?  * Deciding how to handle bad data in a efficient manner (i.e. cout << error
//?     or return a certain value = -999)
//?  * Reading directions (i.e. erroring on numbers over 4,999, under 0 
//?     or "nulla" for 0)
//?  * There are so many ways to solve this problem.  It will be interesting to see
//?     what students come up with.
//***********************************************************************************


// Roman Numerals Converter / Calc
// Idea for CS Lab competition 
// Open to all CS1A - CS1B Students

// Top 3 Winners can get an extra credit point in their CS1A-CS1B class.*

// With your teammate make two functions that... 
//  * Convert a std::string containing Roman Numerals to a int
//  * Convert an int to a std::string containing Roman Numerals
//
// The largest Roman Numeral will be MMMMDCCCCLXXXXIX or 4,999.
// No floating point maths are required.  All solutions will be whole integers values.


// Points will be assigned according to the following rubric:
//  
//  * Converts the string to integer correctly      |    10pts
//  * Converts the integer to a string correctly    |    10pts
//  * Error checks inputs for invaild characters    |     5pts
//  * Error checks the input string for adhering to 
//     proper Roman Numeral notation  
//     i.e.  * LXVIIIII is invaild
//           * LXVIIII  is invaild 
//           * LXIV     is valid                    |     5pts
//  * Program handles errors with descriptive 
//     messages or meaningful return values        
//     without crashing                             |     3pts 
//  * No memory leaks, unused variables, useless
//     checks or bad variables names                |     2pts
// -----------------------------------------------------------
// Total:                                           |    35pts


// Bonus Points
// These points can only be earned if the previous section had a score of 35/35
// It is meant as a tie breaker.
//  * Fastest algorithm (measured by a timing       |     1pt
//     function using this timing function         
//     <github.com/rbaker26/HP-Function-Timer>      
//  * Most unique / creative solution               |     1pt
//  * Cleanest Code                                 |     1pt
//  * Big-O analysis (non-rigorous) of solution     |     1pt
//     writen in the comments above each function   
// -----------------------------------------------------------
// Total:                                           |    4pts

// Symbology
// I    1       VIII    8       nulla   0
// II   2       IX      9
// III  3       X       10
// IV   4       L       50
// V    5       C       100
// VI   6       D       500
// VII  7       M       1000

// Miscellaneous Requirements 
//  * Program must be written in C++ and compile.
//  * The program can be written using any IDE, but all 
//    solutions will be tested and run Ubuntu 16.04.4 LTS
//    and be compiled with clang++ v5.0.2
//  * Any published C++ standard may be used (i.e. C++98 - C++17) 
//  * No external libraries may be used (i.e. Boost, GSL, etc...)
//  * The team must write the two functions in a file called "func.h"
//      * int romanToInt(string)
//      * std::string intToRoman(int)
//  * The two functions will be called from main by a client writen by the Lab Aides
//     The following is an example client:
//     A more optimized client will be written.  All the student has to worry
//     about is the two functions and their return values, not the client.  

// Compiling
// The following code will be used to compile and run your code
// clang++ main.cpp -std=c++17 -o teamName -O0

// Students can copy everything below this line for their code.
// It is prefered that they stick to this style for consistency of grading.
// Do not change the names of your functions or the arguments to them!

//*****************************************************
//! main.cpp
//*****************************************************
// Team Name
// FirstName1, Lastname1, StudentID1
// FirstName2, Lastname2, StudentID2
// Class, ClassTime, Professor
// Date 
// Reviewed By (Lab Aide's Name)
#include <string>
#include <iostream>
#include "func.h"

int romanToInt(const std::string roman );
std::string intToRoman(const int number);

int main() 
{
    // This is an example client.
    const int SIZE = 3;
    std::string romanAr[] = {"LXIV", "MMXVI", "MMM"};// You can add more values here for testing
    int integerAr[]       = {64,      2016,    3000};// You can add more values here for testing

	printHeader()

    // start clock

    for(int i = 0; i < SIZE; ++i)
    {
        std::cout << romanAr[i]   << '\t' << romanToInt(romanAr[i])   << '\n';
    }
    for(int i = 0; i < SIZE; ++i)
    {
        std::cout << integerAr[i] << '\t' << intToRoman(integerAr[i]) << '\n';
    }
    std::cout.flush();

    // end clock

    return 0;
}
//*****************************************************



//*****************************************************
// func.h
//*****************************************************
// Team Name
// FirstName1, Lastname1, StudentID1
// FirstName2, Lastname2, StudentID2
// Class, ClassTime, Professor
// Date 
// Reviewed By (Lab Aide's Name)

// These are your functions
void printHeader()
{
	std::string teamName  = "";
	std::string name1     = "";
	std::string stuId1    = "";
	std::string stuId2    = ""; 
	std::string name2     = "";
	std::string className = "";
	std::string classTime = "";
	std::string professor = "";
	std::string date      = "";
	std::cout << teamName  << std::endl
	          << name1     << "\t" << stuId1 << std::endl
	          << name2     << "\t" << stuId2 << std::endl
	          << className << std::endl
	          << classTime << std::endl
	          << professor << std::endl
	          << date      << std::endl;
}


int romanToInt(const std::string roman)
{
    // todo 
    // write algorithm
}

std::string intToRoman(const int number)
{
    // todo 
    // write algorithm
}
//*****************************************************
