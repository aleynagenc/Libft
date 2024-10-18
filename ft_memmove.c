/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenc <agenc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:19:52 by agenc             #+#    #+#             */
/*   Updated: 2022/11/01 16:08:55 by agenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest2;
	unsigned char		*src2;

	dest2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	i = 0;
	if (!dest2 && !src2)
		return (NULL);
	if (src2 < dest2)
		while (++i <= len)
			dest2[len - i] = src2[len - i];
	else
		while (len-- > 0)
			*(dest2++) = *(src2++);
	return (dst);
}
