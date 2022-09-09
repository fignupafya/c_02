/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:50:33 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/01 16:32:02 by acigerim         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	srclen;

	srclen = len(src);
	i = 0;
	while (i < n)
	{
		if (i > srclen - 1)
			dest[i] = 0;
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
