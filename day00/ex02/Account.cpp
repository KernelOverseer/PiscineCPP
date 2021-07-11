#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int     Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int     Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int     Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int     Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(void)
{
    Account::_displayTimestamp();
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << "index:" << this->_accountIndex << ";created" << std::endl;
}

Account::Account(int initial_deposit)
{
    Account::_displayTimestamp();
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    this->_nbDeposits++;
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
    Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (withdrawal > this->_amount)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    std::cout << "amount:" << this->_amount << ";";
    this->_nbWithdrawals++;
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    Account::_totalNbWithdrawals++;
    return (true);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

void    Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(void)
{
    std::time_t time = std::time(nullptr);

    std::cout << "[" << std::put_time(std::gmtime(&time), "%Y%m%d_%H%M%S") << "] ";
}