#include <iostream>
#include "Account.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
int main(){
	Account acct1("MikeyP Student",001,465.32);
	CheckingAcct acct2("MikeyP Checking",002,543);
	LoanAcct acct3("MikeyP Loan",003,.28,20000);
	//Account Info
	std::cout << "Account Info\nAccount Name: " << acct1.getOwner() << std::endl;
	std::cout << "Account Number: " << acct1.getAcctNum() << std::endl;
	std::cout << "Balance: $" << acct1.getBalance() << "\n"<< std::endl;
	//Checking Account Info
	std::cout << "Checking Account Info\nAccount Name: " << acct2.getOwner() << std::endl;
	std::cout << "Account Number: " << acct2.getAcctNum() << std::endl;
	std::cout << "Balance: $" << acct2.getBalance() << std::endl;
	std::cout << "Depositing $100...";
	acct2.deposit(100);
	std::cout << "New Balance: $" << acct2.getBalance()<<std::endl;
	std::cout << "Withdrawing $50...";
	acct2.withdraw(50);
	std::cout << "New Balance: $" << acct2.getBalance()<<"\n"<<std::endl;
	//Loan Account Info
	std::cout << "Loan Account Info\nAccount Name: " << acct3.getOwner() << std::endl;
	std::cout << "Account Number: " << acct3.getAcctNum() << std::endl;
	std::cout << "Loan Balance: $" << acct3.getBalance() << std::endl;
	int interestPercent = acct3.getInterest()*100;
	std::cout << "Interest Rate: " << interestPercent << "%" <<std::endl;
	std::cout << "Paying $1,000 off loan balance...";
	acct3.payBalance(1000);
	std::cout << "New Loan Balance: $" << acct3.getBalance() << std::endl;
	std::cout << "Monthly interest added to the loan balance: $";
	acct3.calcInterest();
	std::cout << acct3.getBalance();
}
