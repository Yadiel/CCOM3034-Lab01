#include <iostream>
#include "classPractice.h"
#include <cmath>

 
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
		F.num = F.denom;
		F.denom = gcd;

	}
	return F.num;	
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

void Fraction::gt(const Fraction& F) const{

	bool gthan;
	int val1, val2;

	val1= num / denom;
	val2= F.num / F.denom;

	if(val1 > val2){
		cout << "true" ;
	}
	else cout << "false";
}


