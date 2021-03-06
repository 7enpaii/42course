/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:59:15 by aazdoev           #+#    #+#             */
/*   Updated: 2022/03/15 12:04:16 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*space;

	space = (void *)malloc(size * count);
	if (space != NULL)
		ft_bzero(space, size * count);
	return (space);
}
