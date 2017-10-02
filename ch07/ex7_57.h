 ///
 /// @file    ex7_57.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-10-02 16:15:24
 ///
#ifndef __CP5_EX7_57_H__
#define __CP5_EX7_57_H__
#include <iostream>
using std::string;

class Account {
public:
	void calculate();
	static double rate();
	static void rate(double);
private:
	string owner;
	double amount;
	static double interestRate;
	static constexpr double todayRate = 42.42;
	static double initRate();
};

void Account::calculate() {
	amount += amount * interestRate;
}

double Account::rate() {
	return interestRate;
}

void Account::rate(double newRate) {
	interestRate = newRate;
}

double Account::interestRate = initRate();

double Account::initRate() {
	return todayRate;
}

#endif
