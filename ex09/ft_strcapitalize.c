/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:43:05 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/08 16:22:41 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalphanum(char a)
{
	if (a <= 'Z' && a >= 'A')
		return (1);
	if (a <= 'z' && a >= 'a')
		return (1);
	if (a <= '9' && a >= '0')
		return (1);
	return (0);
}

int	isnewword(char *str, int i)
{
	char	lastchar;

	if (isalphanum (str[i]) == 0)
		return (0);
	if (i != 0)
		lastchar = str[i - 1];
	if (i == 0)
		return (1);
	if (isalphanum (str[i - 1]) == 0)
		return (1);
	return (0);
}

void	lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lower(str);
	while (str[i] != 0)
	{
		if (isnewword(str, i) == 1)
			if (str[i] <= 'z' && str[i] >= 'a')
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
