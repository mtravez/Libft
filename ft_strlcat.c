/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:59:08 by mtravez           #+#    #+#             */
/*   Updated: 2022/10/15 18:55:54 by mtravez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i] != '\0')
		i++;
	if (i == dstsize)
		return (i + (unsigned int)ft_strlen((char *)src));
	k = i;
	while (src[j] != 0)
	{
		if (i < dstsize - 1)
		{
			dst[k] = src[j];
			k++;
		}
		i++;
		j++;
	}
	dst[k] = '\0';
	return (i);
}
