/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:42:25 by houaslam          #+#    #+#             */
/*   Updated: 2022/11/09 09:32:47 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	res = malloc(sizeof(char) * (count * size));
	if (!res)
		return (NULL);
	ft_memset(res, 0, size * count);
	return (res);
}

int main()
{
	char *ptr;
	ptr = "hello";
	ptr = ft_calloc(4 , sizeof(ptr))
}
