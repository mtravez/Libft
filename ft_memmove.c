/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:32:36 by mtravez           #+#    #+#             */
/*   Updated: 2022/10/14 17:47:57 by mtravez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, int len)
{
	char	*source;
	char	*destiny;
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	source = (char *) src;
	destiny = (char *) dst;
	temp = 0;
	while (i < len)
	{
		temp[i] = source[i];
		i++;
	}
	while (j < len)
	{
		destiny[j] = temp[j];
		j++;
	}
	return (dst);
}
