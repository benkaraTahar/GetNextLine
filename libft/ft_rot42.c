/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:06:43 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/04 19:06:44 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'A' && str[i] <= 'J') ||
				(str[i] >= 'a' && str[i] <= 'j'))
				str[i] = str[i] + 16;
			else
				str[i] = str[i] - 10;
		}
		i++;
	}
	return (str);
}
