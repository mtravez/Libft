/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:59:45 by mtravez           #+#    #+#             */
/*   Updated: 2022/10/18 16:34:35 by mtravez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//This function creates a new string from the string s from the index start
//and then returns the pointer
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;

	size = ft_strlen(s);
	if (len > size)
		len = size;
	if (start > size)
		start = size;
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	ft_memcpy(sub, &s[start], len);
	sub[len] = '\0';
	return (sub);
}