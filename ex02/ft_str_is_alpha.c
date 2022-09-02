/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:30:39 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/01 16:36:58 by acigerim         ###   ########.fr       */
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
		if (!(str[i] <= 'z' && str[i] >= 'a'))
		{
			if (!(str[i] <= 'Z' && str[i] >= 'A'))
				cond = 0;
		}
		i++;
	}
	return (cond);
}
