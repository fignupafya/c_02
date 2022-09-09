/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:30:39 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/08 15:13:57 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isok(char a)
{
	if (a <= 'z' && a >= 'a')
		return (1);
	if (a <= 'Z' && a >= 'A')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (isalpha (str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
