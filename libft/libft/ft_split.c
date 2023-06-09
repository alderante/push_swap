/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpopolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:40:10 by cpopolan          #+#    #+#             */
/*   Updated: 2022/10/16 15:41:38 by cpopolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_strlenmod(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		count;
	int		i;
	int		j;

	count = ft_str_count(s, c);
	mat = malloc(sizeof(char *) * (count + 1));
	i = 0;
	j = 0;
	while (j < count)
	{
		if (s[i] != c)
		{
			mat[j] = ft_substr(&s[i], 0, ft_strlenmod(&s[i], c));
			i = i + ft_strlenmod(&s[i], c);
			j++;
		}
		else
			i++;
	}
	mat[j] = NULL;
	return (mat);
}
