/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 07:50:12 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/13 09:58:54 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

// Init globals
int	Account::_nbAccounts;
int	Account::_totalNbWithdrawals;
int	Account::_totalNbDeposits;
int	Account::_totalAmount;

Account::Account(int initial_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
				<< this->checkAmount() << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
				<< this->checkAmount() << ";closed" << std::endl;
	Account::_nbAccounts--;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::_displayTimestamp(void)
{
	time_t	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:"
				<< Account::getTotalAmount() << ";deposits:"
				<< Account::getNbDeposits() << ";withdrawals:"
				<< Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
				<< this->checkAmount() << ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
				<< this->_amount << ";deposit:" << deposit << ";amount:"
				<< this->_amount + deposit << ";nb_deposits:"
				<< this->_nbDeposits << std::endl;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
				<< this->_amount << ";withdrawal:";
	if (withdrawal > this->checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->checkAmount()
				<< ";nb_withdrawals" << this->_nbWithdrawals << std::endl;
	return (true);
}
