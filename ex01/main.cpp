/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:11:12 by vasargsy          #+#    #+#             */
/*   Updated: 2023/05/28 19:04:01 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal*	arr[2];

	for (int i = 0; i < 2; ++i)
	{
		if (i % 2 == 0)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}

	for (int i = 0; i < 2; ++i)
	{
		delete arr[i];
	}
	

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	(void)j;
	(void)i;
	delete j;//should not create a leak
	delete i;
}