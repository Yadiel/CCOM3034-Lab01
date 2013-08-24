#include "classPractice.h"
#include "asig01.cpp"
#include <iostream> 

/* Assignment #1
Author: Yadiel Cabrera
Student #: 801-10-0880
Professor: Rafael Arce Nazario 

*/ 


using namespace std;

int main () { 

   cout << "Now to test the Array Of Fractions class and its methods" << endl; 
   
   ArrayOfFractions Array; 
   
   Array.sortAscending(); 
   
   Array.printArray(); 
   
   cout << endl; 
   
   Array.arrayMax (); 
   
   cout << endl; 
   
   Array.arrayMin(); 
   
   cout << endl; 
   
   Array.arraySum();
   
   cout << endl; 
   
  
    return 0; 
} 

