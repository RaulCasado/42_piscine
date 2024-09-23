/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:07:05 by racasado          #+#    #+#             */
/*   Updated: 2024/07/31 13:03:30 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*start;
	int		has_to_change;

	start = str;
	has_to_change = 1;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')
			|| (*str >= '0' && *str <= '9'))
		{
			if ((*str >= 'a' && *str <= 'z') && has_to_change)
				*str -= 32;
			else if ((*str >= 'A' && *str <= 'Z') && !has_to_change)
				*str += 32;
			has_to_change = 0;
		}
		else
		{
			has_to_change = 1;
		}
		str++;
	}
	return (start);
}
