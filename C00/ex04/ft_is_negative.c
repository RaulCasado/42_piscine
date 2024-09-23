/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:51:52 by racasado          #+#    #+#             */
/*   Updated: 2024/07/28 10:27:34 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	output;

	output = 'N';
	if (n < 0)
	{
		write(1, &output, 1);
	}
	else
	{
		output = 'P';
		write(1, &output, 1);
	}
}
