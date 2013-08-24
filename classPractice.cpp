#include <iostream>
#include "classPractice.h"
#include <cmath>
#include <iomanip> 

 
using namespace std;

Fraction::Fraction(){
	num =0;
	denom =1;
}

Fraction::Fraction(int n, int d) {
	num = n;
	denom =d;
}

void Fraction::fracPrint(){
	cout << num << '/' << denom;
}

void Fraction::setNum(int n){
	num = n;
}
void Fraction::setDenom(int d){
	denom = d;
}
int Fraction::getNum(){
	return num;
}
int Fraction::getDenom(){
	return denom;
}


int Fraction::gcd(Fraction &F){
    
	int gcd;
	while (F.denom != 0){
		gcd = F.num % F.denom;
        break;
	}
	return gcd;
}

Fraction Fraction::reduce(Fraction &F)  {
         
   
         
	int gc = gcd(F);

	F.num = F.num / gc;
	F.denom = F.denom / gc;

	return F;
}



Fraction Fraction::add(const Fraction &F) const{

	Fraction result;


	result.denom = denom * F.denom;
	result.num = num * F.denom + denom * F.num;


	return result;

}

Fraction Fraction::sub(const Fraction& F) const{

	Fraction result;

	result.denom = denom * F.denom;
	result.num = num * F.denom - denom * F.num;

	return result;
}

Fraction Fraction::mul(const Fraction& F) const{

	Fraction result;

	result.denom = denom * F.denom;
	result.num = num * F.num;

	return result;
}

Fraction Fraction::div(const Fraction& F) const{

	Fraction result;

	result.denom = denom * F.num;
	result.num = num * F.denom;

	return result;
}

bool Fraction::gt( Fraction &F) const{

	bool gthan;
	float val1, val2;

	val1 = num / denom;
	val2 = static_cast <float> (F.getNum()) / static_cast<float>(F.getDenom());

	if(val1 > val2){
		 return true; 
	} 
    else { 
           
        return false; 
        }
        
}

ArrayOfFractions::ArrayOfFractions() { 
 
 
   srand(time(NULL));
   
    for (int i = 0; i < 10; i++) { 
        
        A[i].setNum(rand()% 9 +1);
        A[i].setDenom (rand()% 9 +1);
    
        } 
}

void ArrayOfFractions::sortAscending (){ 
     
     int minIndex; 
     
     Fraction tempF;
     float m [10];
     float temp; 
     
     //pass elements to new array as floats for comparation
     for (int i = 0; i < 10; i++ ) { 
         m[i] = static_cast<float>(A[i].getNum()) / static_cast <float> (A[i].getDenom());
         }
     
     
     cout << "When printed, the array must be sorted" << endl; 
     
      //sort elements in the float array (ascending order)
     	for (int i =0; i<10; i++){
		for(int j=i+1; j<10; j++){
			if(m[i] > m[j]){
				temp = m[j];
				m[j]=m[i];
				m[i]=temp;
				tempF = A[j];
				A[j] = A[i];
				A[i] = tempF;
			}
		}
	}
     
            
     
}   

void ArrayOfFractions::printArray() { 
     
     for (int i = 0; i < 10; i++) { 
         cout << A[i].getNum() << "/" << A[i].getDenom() <<  endl; 
         }

}


float ArrayOfFractions::arrayMax () { 
      
     double m [10];
     double temp;  
     int maxIndex; 
     
     //pass elements to new array as floats for comparison 
     for (int i = 0; i < 10; i++ ) { 
         m[i] = static_cast<double>(A[i].getNum()) / static_cast <double> (A[i].getDenom());
         }
         
      double  MAX;
      
      MAX = m[0]; // assuming max fraction is in the 1st position of the array
      
      
      for (int i = 0; i < 10; i++) { 
          
          if (m[i] > MAX) { 
                   MAX = m[i];
                   maxIndex = i; 
                  
                   
                   }
      }
      
      cout << "The biggest fraction in the array is"  << "  " <<  A[maxIndex].getNum() << "/" << A [maxIndex].getDenom () << endl; 
      

      
      return MAX;
}

float ArrayOfFractions::arrayMin () { 
      
     double m [10];
     double temp;  
     int minIndex; 
     
     //pass elements to new array as floats for comparison 
     for (int i = 0; i < 10; i++ ) { 
         m[i] = static_cast<double>(A[i].getNum()) / static_cast <double> (A[i].getDenom());
         }
         
      float  MIN;
      
      MIN = m[0]; // assuming max fraction is in the 1st position of the array
      
      
      for (int i = 0; i < 10; i++) { 
          
          if (m[i] < MIN) { 
                   MIN = m[i];
                   minIndex = i; 
                  
                   }
      }
      
      cout << "The smallest fraction in the array is" << " " << A[minIndex].getNum() << "/" << A [minIndex].getDenom () << endl; 
      

      
      return MIN;
}

float ArrayOfFractions::arraySum () { 
      
      float sum; 
      float m[10]; 
      
      for (int i = 0; i < 10; i++) { 
           m[i] = static_cast<double>(A[i].getNum()) / static_cast <double> (A[i].getDenom());
         }
      
      for (int i = 0; i < 10; i++) { 
          sum += m[i]; 
          } 
      
      cout << "The total sum in the array is" << " " << setprecision (2) << sum << endl; 
      
 
      return sum; 
 
} 


  
    
          
