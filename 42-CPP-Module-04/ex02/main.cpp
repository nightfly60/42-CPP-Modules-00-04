/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:39:26 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 13:32:30 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal	*animals[6];

	std::cout << "====== CREATING 3 DOGS ======" << std::endl;
	for (int i = 0; i < 3; i++)
		animals[i] = new Dog();
	std::cout << std::endl;

	std::cout << "====== CHECKING DOGS TYPES ======" << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << " animals[" << i << "]: " << animals[i]->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "====== DOGS SOUNDS ======" << std::endl;
	for (int i = 0; i < 3; i++)
		animals[i]->makeSound();
	std::cout << std::endl;

	std::cout << "====== DELETE 3 ANIMALS ======" << std::endl;
	for (int i = 0; i < 3; i++)
		delete animals[i];
	std::cout << std::endl;

	std::cout << "====== CREATING ORIGINAL DOG AND COPY DOG ======" << std::endl;
	Dog	originalDog;
	Dog	copyDog;
	std::cout << std::endl;

	std::cout << "====== copyDog = originalDog ======" << std::endl;
	copyDog = originalDog;
	std::cout << std::endl;

	std::cout << "====== DEEP COPY ? ADRESSES : ======" << std::endl;
	std::cout << "originalDog adress -> " << &originalDog << std::endl;
	std::cout << "copyDog adress -> " << &copyDog << std::endl;
	std::cout << std::endl;

	return (0);
}
