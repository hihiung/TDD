#include <iostream>

class Account
{
public:
	explicit Account(int money) : balance(money)
	{

	}
	int getBalance() {
		return balance;
	}
	void deposit(int money)
	{
		balance += money;
	}
	void withdraw(int money)
	{
		balance -= money;
	}

	void setInterestRate(int rate)
	{
		interest_rate = rate;
	}

	void applyInterest(int years)
	{
		for (int i = 0; i < years; i++)
			balance += (balance * interest_rate) / 100;
	}

	int previewBalanceAfterInterest(int years)
	{
		int future_balance = balance;
		for (int i = 0; i < years; i++)
		{
			future_balance += (future_balance * interest_rate) / 100;
		}
		return future_balance;
	}

private:
	int balance;
	int interest_rate;
};
