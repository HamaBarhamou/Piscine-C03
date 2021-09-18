/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:40:52 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/18 19:48:33 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (*s1 != '\0' && (*s1 == *s2) && i <= n)
	{
		s1++;
		s2++;
		i++;
	}
	if (s1 == s2)
		return (0);
	else
		return ((int)*s1 - (int)*s2);
}

/*int main(void)
{
	char *ch1="ali", *ch2="barhamou joue";
	printf("%d\n",strncmp(ch1,ch2,8));
	printf("%d\n",ft_strncmp(ch1,ch2,8));
}*/