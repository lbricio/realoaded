/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params_v2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbricio- <lbricio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:35:15 by lbricio-          #+#    #+#             */
/*   Updated: 2022/08/28 17:58:38 by lbricio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char signal, char *s2)
{
	while (*s1 == *s2 && *s1++ && *s2++)
		;
	if ((signal == '>' && *s1 > *s2)
		|| (signal == '<' && *s1 < *s2))
		return (1);
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*strtmp;

	strtmp = *s1;
	*s1 = *s2;
	*s2 = strtmp;
}

void	ft_sort(int argc, char **argv)
{
	int	ascend;
	int	descend;

	ascend = 1;
	while (ascend < argc)
	{
		descend = argc - 1;
		while (ascend < descend)
		{
			if (ft_strcmp(argv[ascend], '>', argv[descend]))
				ft_swap(&argv[ascend], &argv[descend]);
			descend--;
		}
		ascend++;
	}
}

int	main(int argc, char **argv)
{	
	int	i;

	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
