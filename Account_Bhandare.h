// Name: Shreyas Bhandare
// Final project: Bank and stock account program
// Date of Submission: 12-13-2015

#ifndef ACCOUNT_BHANDARE
#define ACCOUNT_BHANDARE

// abstract base class - Account
class Account
{
	protected:
		// CashBal as a protected member can be accessed from both StockAccount and BankAccount classes
		double CashBal;

	public:
		// declaring virtual function printHis in a base class.
		virtual void printHis() = 0;

		// declaring virtual function for getting and setting cash balance.
		virtual double getcbal() = 0;
		virtual void setcbal() = 0;
};

#endif
