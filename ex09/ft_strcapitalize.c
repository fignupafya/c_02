/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:43:05 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/01 20:43:07 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isnewword(char *str, int i)
{
	char	lastchar;

	if (i != 0)
		lastchar = str[i - 1];
	if (i == 0)
		return (1);
	else if (lastchar == ' ')
		return (1);
	else if (lastchar == '+')
		return (1);
	else if (lastchar == '-')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (isnewword(str, i) == 1)
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
