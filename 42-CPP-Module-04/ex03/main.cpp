/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:00:11 by edurance          #+#    #+#             */
/*   Updated: 2025/11/15 13:14:13 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "1. Learning 5 Materia" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(NULL);

	std::cout << "2. Creating new characters: me and him" << std::endl;
	Character	me("me");
	Character	him("him");

	std::cout << "3. Me equip 4 Materia (ice) and him = me" << std::endl;
	AMateria* tmp;
	for (int i = 0; i < 4; i++)
	{
		tmp = src->createMateria("ice");
		me.equip(tmp);
	}
	me.equip(tmp);
	me.equip(NULL);
	him = me;

	std::cout << "4. Creating new character target: bob" << std::endl;
	ICharacter* bob = new Character("bob");

	std::cout << "5. Me and Him use 5 times on bob" << std::endl;
	std::cout << std::endl;
	std::cout << "==== me ====" << std::endl;
	me.use(0, *bob);
	me.use(1, *bob);
	me.use(2, *bob);
	me.use(3, *bob);
	me.use(4, *bob);
	std::cout << std::endl;

	std::cout << "==== him ====" << std::endl;
	him.use(0, *bob);
	him.use(1, *bob);
	him.use(2, *bob);
	him.use(3, *bob);
	him.use(4, *bob);
	std::cout << std::endl;

	std::cout << "6. unequip everything" << std::endl;
	for (int i = 0; i < 4; i++)
		me.unequip(i);

	std::cout << "7. Me equip 4 Materia (cure)" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		tmp = src->createMateria("cure");
		me.equip(tmp);
	}

	std::cout << "7. Me and Him use 5 times on bob" << std::endl;
	std::cout << std::endl;
	std::cout << "==== me ====" << std::endl;
	me.use(0, *bob);
	me.use(1, *bob);
	me.use(2, *bob);
	me.use(3, *bob);
	me.use(4, *bob);
	std::cout << std::endl;

	std::cout << "==== him ====" << std::endl;
	him.use(0, *bob);
	him.use(1, *bob);
	him.use(2, *bob);
	him.use(3, *bob);
	him.use(4, *bob);
	std::cout << std::endl;

	delete bob;
	delete src;

	return (0);
}
