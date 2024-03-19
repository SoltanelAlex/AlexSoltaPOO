#pragma once

ref class CreditCardAccount {
public:
	CreditCardAccount(long number, double limit);
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();

private:
	static int numberOfAccounts = 0;
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
	static double interestRate;
};