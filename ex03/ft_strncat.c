/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:25:17 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/22 11:04:17 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include<stdio.h>
#include<string.h>
int main(void)
{
	//char ch1[100]="ali ", *ch2="barhamou joue";
	//printf("%s\n",strncat(ch1,ch2,6));
	char ch3[100]="ali ", *ch4="barhamou joue";
	printf("%s\n",ft_strncat(ch3,ch4,6));
}*/