/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:35:12 by edurance          #+#    #+#             */
/*   Updated: 2025/11/07 15:37:23 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
		char buffer[20];
		time_t timestamp;
		tm* now;

		timestamp = std::time(NULL);
		now = std::localtime(&timestamp);
		std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", now);

		std::cout << buffer;
}

/*-----------------------------CHECKERS---------------------------------*/
int	Account::checkAmount(void) const
{
	return (this->_amount);
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_nbDeposits = 0;
	_accountIndex = _nbAccounts;
	_nbWithdrawals = 0;

	_nbAccounts += 1;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created\n";

	return ;
}

Account::~Account(void)
{
	_totalAmount -= _amount;
	_totalNbWithdrawals += 1;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed\n";
	return ;
}

/*-----------------------------GETTER---------------------------------*/
int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

/*-----------------------------SETTER---------------------------------*/
void	Account::makeDeposit(int deposit)
{
	int	p_amount = checkAmount();

	_amount += deposit;
	_nbDeposits += 1;

	_totalNbDeposits += 1;
	_totalAmount += deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawa)
{
	int	p_amount = _amount;

	if (_amount - withdrawa < 0)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}

	_amount -= withdrawa;
	_nbWithdrawals += 1;

	_totalAmount -= withdrawa;
	_totalNbWithdrawals += 1;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "withdrawal:" << withdrawa << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	
	return (true);
}

/*-----------------------------DISPLAY---------------------------------*/
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

