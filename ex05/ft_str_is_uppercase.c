/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:14:10 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/01 17:14:41 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	cond;

	i = 0;
	cond = 1;
	while (str[i] != 0)
	{
		if (str[i] > 'Z' || str[i] < 'A')
			cond = 0;
		i++;
	}
	return (cond);
}

