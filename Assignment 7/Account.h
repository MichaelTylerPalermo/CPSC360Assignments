#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>

//BASE ACCOUNT CLASS
class Account {
public:
	//GETTERS
	std::string getOwner();
	int getAcctNum();
	double getBalance();

	//SETTERS
	void setOwner(std::string owner);
	void setAcctNum(int num);
	void setBalance(double bal);

	//CONSTRUCTORS
	Account();
	Account(std::string name,int num,double bal);
	Account(const Account &right);

protected:
	std::string ownerName;
	int acctNum;
	double balance;
};

//CHECKING ACCOUNT DERIVED CLASS
class CheckingAcct : public Account {
public:
	void deposit(double amount);
	void withdraw(double amount);
	CheckingAcct(std::string name,int num,double bal);
};

//LOAN ACCOUNT DERIVED CLASS
class LoanAcct : public Account{
public:
	double getInterest();
	void setInterest(double interest);
	void payBalance(double amount);
	void calcInterest();
	LoanAcct(std::string name,int num,double interest,double bal);

private:
	double intRate;
};

#endif /* ACCOUNT_H_ */
