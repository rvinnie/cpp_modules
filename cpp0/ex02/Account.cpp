#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account (void) {
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = getNbAccounts();
}

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = getNbAccounts();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";"
			<< "created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account (void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";"
			<< "closed" << std::endl;
}

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


void	Account::_displayTimestamp( void ) {
	const struct std::tm *tm_ptr;
	std::time_t now;

	now = std::time(0);
	tm_ptr = std::localtime (&now);
	std::cout << std::setfill('0') << "[" << 1900 + tm_ptr->tm_year
			<< std::setw(2) << tm_ptr->tm_mon
			<< std::setw(2) << tm_ptr->tm_mday << "_"
			<< std::setw(2) << tm_ptr->tm_hour
			<< std::setw(2) << tm_ptr->tm_min
			<< std::setw(2) << tm_ptr->tm_sec << "] ";
	// std::cout << "[19920104_091532] ";
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";"
			<< "total:" << Account::_totalAmount << ";"
			<< "deposits:" << Account::_totalNbDeposits << ";"
			<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";"
			<< "deposits:" << this->_nbDeposits << ";"
			<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";"
			<< "p_amount:" << this->_amount << ";"
			<< "deposit:" << deposit << ";"
			<< "amount:" << this->_amount + deposit << ";"
			<< "nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

int		Account::checkAmount(void) const {
	return (this->_amount > 0);
}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";";
	if (this->_amount < withdrawal) {
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";"
			<< "amount:" << this->_amount - withdrawal << ";"
			<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return (true);
}
