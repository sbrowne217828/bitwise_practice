/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nth_bit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labrown <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 06:39:16 by labrown           #+#    #+#             */
/*   Updated: 2017/11/09 07:19:50 by labrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	n;
	int	num;
	int loc_num;

	printf("Input number: ");
	scanf("%d", &num);
	printf("\nEnter nth binary digit between 0 & 31: ");
	scanf("%d", &n);

	loc_num = (num >> n) & 1;

	printf("The %d bit is set to %d", n, loc_num);
	return (0);
}
