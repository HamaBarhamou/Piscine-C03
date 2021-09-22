/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:36:17 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/22 11:03:16 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

int	compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (str);
	while (str[i])
	{
		if ((*str == *to_find) && compare(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

/*#include<stdlib.h>
#include<stdio.h>
int main()
{
    char *X = "ici test de mon test";
    char *Y = "test";
 
    //printf("%s\n", ft_strstr(X, Y));
	printf("%s\n", strstr(X, Y));
    return 0;
}*/
