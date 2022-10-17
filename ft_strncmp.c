/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:48:09 by mtravez           #+#    #+#             */
/*   Updated: 2022/10/15 18:44:36 by mtravez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*temps1;
	unsigned char	*temps2;

	i = 0;
	temps1 = (unsigned char *) s1;
	temps2 = (unsigned char *) s2;
	while (i < n)
	{
		if (temps1[i] != temps2[i])
		{
			if (temps1[i] == '\0')
				return (-1);
			if (temps2[i] == '\0')
				return (1);
			return (temps1[i] - temps2[i]);
		}
		if (temps1[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
