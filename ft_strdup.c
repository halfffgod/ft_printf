/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:19:10 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/08 18:01:25 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen((char *)s1) + 1));
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/*int main()
{
    char source[] = "GeeksForGeeks";

       char* target = ft_strdup(source);

    printf("%s", target);
    return 0;
}*/
