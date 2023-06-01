#include "pch.h"
#include "../Calculator/Cal.cpp"

class AccountFixture:public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreatAccountInit10000won)
{
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit)
{
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, Withdraw)
{
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccountFixture, ApplyInterest)
{
	account.setInterestRate(5);
	account.applyInterest(1);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, ExpectInterest2y)
{
	account.setInterestRate(10);
	EXPECT_EQ(12100, account.previewBalanceAfterInterest(2));
}

TEST_F(AccountFixture, ExpectInterest)
{
	account.setInterestRate(10);
	EXPECT_EQ(11000, account.previewBalanceAfterInterest((1)));
}