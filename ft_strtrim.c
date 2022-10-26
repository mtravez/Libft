/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:46:12 by mtravez           #+#    #+#             */
/*   Updated: 2022/10/26 20:21:47 by mtravez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This function returns whether or not the given char is in the given set
static int	isinset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

//This function trims every character from set in the beginning and ending of s1
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;
	int		k;

	if (!s1)
		return (NULL);
	j = ft_strlen(s1);
	i = 0;
	while (isinset(set, s1[i]))
		i++;
	while (isinset(set, s1[j - 1]))
		j--;
	k = j - i;
	if (k < 0)
		k = 0;
	trim = malloc(k + 1);
	if (!trim)
		return (0);
	k = 0;
	while (i < j)
		trim[k++] = s1[i++];
	trim[k] = '\0';
	return (trim);
}
