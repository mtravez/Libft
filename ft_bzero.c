/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:55:27 by mtravez           #+#    #+#             */
/*   Updated: 2022/10/23 17:04:09 by mtravez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//This function fills a pointer with n bytes of null
void	ft_bzero(void *s, int n)
{
	char	*t;
	int		i;

	if (n == 0)
		return ;
	t = (char *) s;
	i = 0;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
}
