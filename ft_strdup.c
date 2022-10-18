/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:37:18 by mtravez           #+#    #+#             */
/*   Updated: 2022/10/17 15:30:19 by mtravez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//This function duplicates a string into a new memory bank and returns
//its pointer
char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	strsize;

	strsize = ft_strlen(s1) + 1;
	cpy = malloc(strsize);
	if (!cpy)
		return (0);
	ft_memcpy(cpy, s1, strsize);
	return (cpy);
}
