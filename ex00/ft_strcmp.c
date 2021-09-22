/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:28:16 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/22 11:04:52 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (s1 == s2)
		return (0);
	else
		return ((int)*s1 - (int)*s2);
}

/*
#include<stdio.h>
#include<string.h>
int main(void)
{
	//char *ch1="bissaka president", *ch2="bkati ministre de leconomi";
	char ch1[] = "a2abELLO", ch2[]= "a2abD";
	printf("%d\n",strcmp(ch1,ch2));
	printf("%d\n",ft_strcmp(ch1,ch2));
}*/