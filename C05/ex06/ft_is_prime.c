/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:31:52 by racasado          #+#    #+#             */
/*   Updated: 2024/08/11 15:34:27 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	to_check;

	to_check = nb - 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (to_check > 1)
	{
		if (nb % to_check == 0)
			return (0);
		to_check--;
	}
	return (1);
}
