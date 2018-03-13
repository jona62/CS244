#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Bank{
	private:
		double balance;
		int acct_No;
		string name;

	public:
		Bank();
		void set_acct_No();
		void deposit(double amount);
		void withdraw(double amount);
		void set_name(string str);
		void display_info();
		int get_balance() const;
		int get_acct_No() const;
		string get_name() const;
};

#endif //BANK_H
