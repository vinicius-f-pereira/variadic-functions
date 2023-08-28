/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   going_deep.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:55:12 by vde-frei          #+#    #+#             */
/*   Updated: 2023/08/27 23:58:29 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

float	average(int num, ...)
{
	int	total;
	int	i;
	va_list	ap;

	total = 0;
	i = 0;
	va_start(ap, num);
	while (i < num)
	{
		total += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return ((float)total / num);
}

int	main()
{
	printf("The average value is %.2f\n", average(5, 7, 5, 6, 8, 12));
}
