/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:46:10 by edurance          #+#    #+#             */
/*   Updated: 2025/11/08 16:49:54 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "=========== memory address ===========" << std::endl;
	std::cout << "string address = " << &str << std::endl;
	std::cout << "string pointer address = " << stringPTR << std::endl;
	std::cout << "string reference address =" << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "=========== value ===========" << std::endl;
	std::cout << "string value = " << str << std::endl;
	std::cout << "string pointer value = " << *stringPTR << std::endl;
	std::cout << "string reference value = " << stringREF << std::endl;

	return (0);
}
