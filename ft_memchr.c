/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:10:48 by mtravez           #+#    #+#             */
/*   Updated: 2022/10/15 18:44:14 by mtravez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This function searches within the first n bytes of s
//for the first occurrance of c
void	*ft_memchr(const void *s, int c, unsigned int n)
{
	int					i;
	const unsigned char	*temp;

	i = 0;
	temp = (const unsigned char *) s;
	while ((unsigned int)i < n)
	{
		if (temp[i] == (unsigned char)c)
			return ((void *)&temp[i]);
		i++;
	}
	return (0);
}
