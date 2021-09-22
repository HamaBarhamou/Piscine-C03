/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:40:52 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/21 16:13:12 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]) && i < n)
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return ((int)s1[i] - (int)s2[i]);
}

/*int main(void)
{
	char *ch1="allo_nafissa ", *ch2="alloje coute";
	//char ch1[] = "a2abELLO", ch2[]= "a2abD";
	printf("%d\n",strncmp(ch1,ch2,15));
	printf("%d\n",ft_strncmp(ch1,ch2,15));
}*/