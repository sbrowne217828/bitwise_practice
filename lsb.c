/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 04:47:54 by labrown           #+#    #+#             */
/*   Updated: 2017/11/09 05:46:34 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main()
{
	int	num;

	/* Input number from user */
	printf("Enter any number: ");
	scanf("%d\n", &num);

	/* 
	** "bitwise and" evaluates true 
	** if both numbers are the same
	** i.e. 1 & 1 or 0 & 0
	 */

	if (num & 1)
		printf("LSB of %d is set (1).\n", num);
	else
		printf("LSB of %d is unset (0).\n", num);
	return (0);
}
