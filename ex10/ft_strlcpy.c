/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:22:02 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/01 22:22:33 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	if (size > 0)
	{
		srclen = len(src);
		i = 0;
		while (i < srclen)
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = 0;
	}
	return (srclen);
}
