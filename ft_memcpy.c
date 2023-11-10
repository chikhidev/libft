/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchikhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:22:57 by abchikhi          #+#    #+#             */
/*   Updated: 2023/10/31 20:43:06 by abchikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main(){
// 	unsigned char *dst = malloc((sizeof(char) * 6));
// 	unsigned char *src = malloc((sizeof(char) * 6));

// 	dst[0] = 'u';
// 	dst[1] = 'x';
// 	dst[2] = 'w';
// 	dst[3] = 't';
// 	dst[4] = 'r';
// 	dst[5] = '\0';
// 	src[0] = 'x';
// 	src[1] = 'x';
// 	src[2] = 'x';
// 	src[3] = 'x';
// 	src[4] = 'x';
// 	src[5] = '\0';
// 	// printf("%s\n", ft_memcpy(dst, NULL, 9));
// 	printf("%s\n", memcpy(dst, NULL, 9));
// 	return (0); 
// }