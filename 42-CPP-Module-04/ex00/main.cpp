/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:39:26 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 11:13:16 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "====== Creating Animals ======" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << "====== Their types ======" << std::endl;
	std::cout << "j type is " << j->getType() << std::endl;
	std::cout << "i type is " << i->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "====== Calling makeSound ======" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "====== Delete Animals ======" << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	std::cout << "====== Creating WrongAnimals ======" << std::endl;
	const WrongAnimal* a = new WrongAnimal();
	const WrongAnimal* b = new WrongCat();
	std::cout << std::endl;

	std::cout << "====== Calling makeSound (wrong animals) ======" << std::endl;
	a->makeSound();
	b->makeSound();
	std::cout << std::endl;

	std::cout << "====== Delete WrongAnimals ======" << std::endl;
	delete a;
	delete b;
	std::cout << std::endl;

	return (0);
}
