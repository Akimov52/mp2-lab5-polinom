#ifndef __POLINOM_H__
#define __POLINOM_H__

#include "LinkedList.h"
#include "Monom.h"
#include <string>

using namespace std;

class Polinom
{
private:
	TLinkedList<Monom> monomList;
	void removeZeroCoefficients();
public:
	Polinom() {};
	Polinom(const string& polynom);
	Polinom(const Polinom& other);
	void addMonom(const Monom& monom);
	double calculate(double x, double y, double z) const;
	string toString() const;
	Polinom& operator=(const Polinom& other);
	Polinom operator+(const Polinom& other) const;
	Polinom operator-(const Polinom& other) const;
	Polinom operator*(double constant) const;
	Polinom operator*(const Polinom& other) const;
	Polinom& operator+=(const Polinom& other);
	Polinom& operator-=(const Polinom& other);
	Polinom& operator*=(double constant);
	Polinom& operator*=(const Polinom& other);
	bool operator==(const Polinom& other) const;
	bool operator!=(const Polinom& other) const;
};

#endif // __POLYNOM_H__