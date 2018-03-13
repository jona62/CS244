#include "bank.h"

int main(){
	string name;
	cout<<"Enter Your Fullname: ";
	getline(cin, name);

	cout<<endl;

	Bank customer;
	customer.set_name(name);

 	cout<<"Welcome "<<customer.get_name()<<"\n Your Account Number is: "<<customer.get_acct_No()<<", and you have $"<<customer.get_balance()<<" in your account. \n";

	customer.display_info();

	return 0;
}
