/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenc <agenc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:36:14 by agenc             #+#    #+#             */
/*   Updated: 2022/10/28 14:13:09 by agenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (s)
	{
		while (s[len] != (char)c && len >= 0)
			len--;
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		else
			return (NULL);
	}
	return (NULL);
}
