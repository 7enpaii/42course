/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:12:28 by aazdoev           #+#    #+#             */
/*   Updated: 2022/03/15 21:12:29 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*f;
	size_t	i;
	size_t	j;

	i = 0;
	f = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!f)
		return (NULL);
	while (s1[i])
	{
		f[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		f[i] = s2[j];
		i++;
		j++;
	}
	f[i] = '\0';
	return (f);
}
