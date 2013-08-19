#ifndef FRAC_H
#define FRAC_H

class Fraction {
	private:
		int num, denom;
	public:
        //constructors
		Fraction();
		Fraction(int n, int d);

        //setters
		void setNum(int n);
		void setDenom(int d);
		
		//getters
		int getNum();
		int getDenom();
		
		//member functions for tasks asked in lab 
		void fracPrint();
		Fraction add(const Fraction& F) const;
		Fraction sub(const Fraction &F) const; 
		Fraction div(const Fraction &F) const; 
		Fraction gt(const Fraction &F) const; 
		Fraction reduce(const Fraction &F) const; 
		
        
};

#endif
