/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 06:03:32 by labrown           #+#    #+#             */
/*   Updated: 2017/11/09 06:34:04 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define BITS sizeof(int) * 8 

int	main()
{
	int	num;
	int msb;

	printf("Enter any number: ");
	scanf("%d", &num);

	/*
	** move first bit of 1 to highest order
	*/
	msb = 1 << (BITS - 1);

	/*
	** Perform bitwise AND with num and msb
	*/
	if (num & msb)
		printf("MSB of %d is (1).\n", num);
	else
		printf("MSB of %d is (0).\n", num);
	return (0);
}
