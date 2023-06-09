/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <cpopolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:52:34 by cpopolan          #+#    #+#             */
/*   Updated: 2023/05/29 14:37:24 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char				*d;
	char				*s;
	long unsigned int	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			((char *)d)[i] = ((char *)s)[i];
			i++;
		}
	}
	return (dest);
}
/*int	main(void)
{
	const char src[] = "ciao";
	char dest[] = "balena";
	
	ft_memmove(dest, src, 5);
	printf("dest is %s, src is %s", dest, src);
}
*/
