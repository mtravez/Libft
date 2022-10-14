/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:10:48 by mtravez           #+#    #+#             */
/*   Updated: 2022/10/14 17:49:01 by mtravez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *) s;
	while (temp[i] != '\0' && (unsigned int)i < n)
	{
		if (temp[i] == (unsigned char) c)
			return (&temp[i]);
		i++;
	}
	return (0);
}
