/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:13:02 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/01 17:13:47 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	cond;

	i = 0;
	cond = 1;
	while (str[i] != 0)
	{
		if (str[i] > 'z' || str[i] < 'a')
			cond = 0;
		i++;
	}
	return (cond);
}

