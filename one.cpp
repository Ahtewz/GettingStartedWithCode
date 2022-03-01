//this is a comment
/*
multi line
*/

#include <iostream> //function call cout etc
#include <vector> //used for vectors
#include <string> //for strings
#include <fstream> //file io

using namespace std; //to remove std from std::cout

//dont forget the semicolon; 

//code inside main function
int main(){
    cout << "First Program"; //call function or use std::cout
    cout<<"\n";
    //variables start with letter. contains 1 e _
    const double PI = 3.1415926435; 
    /* const is a constant variable; value cant be changed and name always in capitals like 'PI'
    double datatype= floating point numbers or decimal places */

    char myGrade = 'A'; //one character;one byte inside memory; surrounded by single quotes.

    bool isHappy = true; 
    /* boolean; start with 'is' in defining the variable
    true =1 or false=0 */

    int myAge = 22; //whole numbers without decimal places

    float favNum = 3.141592; //floating point numbers like double. accurate upto 6 decimal places
    
    double otherfavNum = 1.12345678915;//upto 15 digits

    cout << "Favorite Number " << favNum << endl; 

    /* Other types include
    short int : at least 16 bits
    long int: at least 32 bits
    long long int: at least 64 bits
    unsigned int: same size as signed version
    long double: not less than double */

    cout<< "Size of int " << sizeof(myAge) << endl; //to find number of bytes or datatype
    cout<< "Size of char " << sizeof(myGrade) << endl;
    cout<< "Size of bool " << sizeof(isHappy) << endl;
    cout<< "Size of float" << sizeof(favNum) << endl;
    cout<< "Size of double " << sizeof(otherfavNum) <<"\n";
    
    int largestInt = 2147483647; //largest number. cant go beyond that.
    int pseudoInt = 2147483648; //print -2147483648
    
    cout<< "Largest Integer" << largestInt <<" and not" << pseudoInt << "\n";

    /*ARITHMETIC OPERATIONS
    + - * / %(returns the remainder of a division) ++(shorthand incremental notation) --(decremental)
    */
   cout << "5 + 2 = " << 5+2 << endl;
   cout << "5 - 2 = " << 5-2 << endl;
   cout << "5 * 2 = " << 5*2 << endl;
   cout << "5 / 2 = " << 5/2 << endl;
   cout << "5 % 2 = " << 5%2 << endl;
   cout<<"\n";
   int five = 5;
   cout << "5++ = " << five++ << endl;
   cout << "++5 = " << ++five << endl;
   cout << "5-- = " << five-- << endl;
   cout << "--5 = " << --five << endl;
   cout<<"\n";

    return 0; //0 as in everything went perfectly fine 
}

/* command used to run this is;

g++ -std=c++11 one.cpp  //compile
--11 is the version
a.out //run
*/