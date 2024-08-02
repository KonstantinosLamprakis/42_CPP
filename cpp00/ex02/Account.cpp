
#include "Account.hpp"
#include <iostream>
#include <ctime>

using std::cout;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created\n";
}

Account::~Account( void )
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << this->_amount << ";closed\n";
	_nbAccounts--;
};

 int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

 int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

 int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
 int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

 void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << "\n";
}
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount"
	<< deposit + this->_amount << ";nb_deposits:" << this->_nbDeposits + 1 << "\n";
	_totalNbDeposits++;
	this->_nbDeposits++;
	this->_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		cout << "refused\n";
		return (0);
	}
	_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << "\n";
	return (1);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"
	<< this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << "\n";
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout << "[" << 1900 + ltm->tm_year;
	if (1 + ltm->tm_mon < 10)
		cout << "0";
	cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday < 10)
		cout << "0";
	cout << ltm->tm_mday << "_" << 5+ltm->tm_hour << 30+ltm->tm_min << ltm->tm_sec << "]";
}
