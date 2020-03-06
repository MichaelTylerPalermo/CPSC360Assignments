#include "Account.h"

std::string Account::getOwner(){
	return ownerName;
}
int Account::getAcctNum(){
	return acctNum;
}
double Account::getBalance(){
	return balance;
}

//SETTERS
void Account::setOwner(std::string owner){
	ownerName = owner;
}
void Account::setAcctNum(int num){
	acctNum = num;
}
void Account::setBalance(double bal){
	balance = bal;
}

//CONSTRUCTORS
Account::Account(){
	ownerName = "No Name";
	acctNum = 0;
	balance = 0.0;
}
Account::Account(std::string name,int num,double bal){
	ownerName = name;
	acctNum = num;
	balance = bal;
}
Account::Account(const Account &right){
	ownerName = right.ownerName;
	acctNum = right.acctNum;
	balance = right.balance;
}
//CHECKING ACCOUNT CLASS METHOD DEFINITIONS
void CheckingAcct::deposit(double amount){
	balance += amount;
}

void CheckingAcct::withdraw(double amount){
	balance -= amount;
}
CheckingAcct::CheckingAcct(std::string name,int num,double bal) : Account(name, num, bal){
	ownerName = name;
	acctNum = num;
	balance = bal;
}
//LOAN ACCOUNT CLASS METHOD DEFINITIONS
double LoanAcct::getInterest(){
	return intRate;
}
void LoanAcct::setInterest(double interest){
	intRate = interest;
}
void LoanAcct::payBalance(double amount){
	balance -= amount;
}
void LoanAcct::calcInterest(){
	float temp = intRate*balance;
	balance -= temp;
}
LoanAcct::LoanAcct(std::string name,int num,double interest,double bal) : Account(name, num, bal){
	ownerName = name;
	acctNum = num;
	balance = bal;
	intRate = interest;
}


















