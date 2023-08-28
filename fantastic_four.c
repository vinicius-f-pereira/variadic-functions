/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fantastic_four.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:35:02 by vde-frei          #+#    #+#             */
/*   Updated: 2023/08/27 23:50:14 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * import the lib below to use
 * va_*. (variable argument lists)
 */
#include <stdarg.h>

/**
 * @brief This is the function to
 * calculate the average age.
 * @param n Is the number of total of people.
 * @param ... When you do this statement is the same
 * to say to the computer that the number of arguments
 * is unknow. You can give between 1 and N variables.
 * @note va_list ap Is the variable that receive number of
 * arguments, it's like a struct, but a little bit more complicated
 * is a really low-level content to try explain here.
 * @note va_start Is a macro built-in in the stdarg.h
 * this macro function receive ap (argument pointer) and 'n'
 * that's the first argument. With 'n' is the same to say that
 * 'how many arguments are gonna be there'.
 * @note va_arg is like va_start. Receive the ap list, and the type
 * that we wanna retrieve, (is this example all type will be int).
 * @note In following exercice you can use return type as float to get
 * more number of average with more precision.
 */
float	average(int n, ...)
{
	va_list	ap;
	int	total;
	int	index;

	va_start(ap, n);
	total = 0;
	index = 0;
	while (index < n)
	{
		total += va_arg(ap, int);
		++index;
	}
	return ((float)total / n);
}

int	main()
{
	float	average_age;
	int	people;

	people = 7;
	average_age = average(people, 10, 13, 18, 45, 32, 19, 5);
	printf("The average age of those %d people is %f\n", people, average_age);
	return (0);
}

/**
 * Resuming this first file...
 * va_list Is used to create argument 
 * list (struct behind the scenario)
 * va_start Initializes a va_list object that
 * you can use to access each argument.
 * va_arg Take the next argument. Yes, you need to put it
 * in a while loop.
 *
 * va_list 'ap' < just need of param name and type to create.
 *
 * va_start (va_list ap, last) < last is the number of max arguments
 * that you don't really know, so you need to insert a variable that
 * will receive this number.
 *
 * va_arg (va_list ap, type) < type of variables that you'll work
 * until here don't have any instructions in video how to do to work
 * more than you type, probably in another file or here below will
 * have this information.
 */
