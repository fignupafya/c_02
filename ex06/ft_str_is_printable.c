/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:18:08 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/01 17:19:19 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	cond;

	i = 0;
	cond = 1;
	while (str[i] != 0)
	{
		if (str[i] > 126 || str[i] < 33)
			cond = 0;
		i++;
	}
	return (cond);
}

