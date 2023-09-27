/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkizilde <mkizilde@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:28:43 by mkizilde          #+#    #+#             */
/*   Updated: 2023/09/26 21:41:09 by mkizilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	test(int d1, int d2, ...);
int	test2(int d3, int d4, ...);
int	t_printf(char *s, ...);


int main(void)
{
	// struct va_list.1

	dada

	test(3, 1, 'c', 3, 5, 2, 7);
	test2(3, 1, 5, 6, 7);

	return 0;
}

int	t_printf(char *s, ...)
{
	int	i;

	i = 0
	while (s[i])
	{
		if(s[i] == '%' && s[i + 1] != '\0')

	}
	
}

int	test2(int d3, int d4, ...)
{
	va_list ag;

	va_start(ag, d4);
	d3 = 0;
	d4 = 8;
	int d5;
	int d6;
	int d7;

	d5 = va_arg(ag, int);
	d6 = va_arg(ag, int);
	d7 = va_arg(ag, int);

	printf("\nd5 = %d, nd6 = %d, nd7 = %d,", d5, d6, d7);

}

int	test(int d1, int d2, ...)
{
	va_list	ag;
	int i;

	i = 0;
	d1 = 0;
	d1 = 8;

	va_start(ag, d2);
	while (ag != NULL)
	{
		va_arg(ag, int);
		i++;
		printf("%d, \n", i);
	}
	va_end(ag);
	va_start(ag, d2);

	if (va_arg(ag, int) == 1)
	{
		printf("\nva = %d", va_arg(ag, int));
		printf(" 1. if konumu");
	}
	if (va_arg(ag, int) == 3)
		printf("\nva = %d", va_arg(ag, int));
	if (va_arg(ag, int) == 5)
		printf("\nva = %d", va_arg(ag, int));
	if (va_arg(ag, int) == 2)
		printf("\nva = %d", va_arg(ag, int));
	else 
		printf("va = %d", va_arg(ag, int));
		

	// printf("va1 = %d, va1 = %d, va1 = %d, va1 = %d, va1 = %d, va1 = %d,", va_arg(ag, int), va_arg(ag, int), va_arg(ag, int), va_arg(ag, int), va_arg(ag, int), va_arg(ag, int));
	va_end(ag);
	return (d1);
}