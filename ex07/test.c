/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuzawa <skuzawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:22:58 by sudatsu           #+#    #+#             */
/*   Updated: 2021/02/20 20:51:58 by skuzawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	i = 0;
	j = 0;
	len = 0;
	while (dest[i])
		i++;
	while (src[len])
		len++;
	if (size <= i)
		len += size;
	else
		len += i;
	while (src[j] && (i + 1) < len)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len - 1);
}



int main(){
    int i=0;
    char a[18]= "ppppabcpppp" ;
    char b[5]= "abc" ;
    printf("%d",ft_strlcat(a,b,11));
    
}