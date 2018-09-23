/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:29:06 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 21:42:12 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int index;

	if (nb < 2)
		return (0);
	index = 2;
	while (index * index <= nb)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}