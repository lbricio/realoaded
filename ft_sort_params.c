/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbricio- <lbricio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:14:13 by lbricio-          #+#    #+#             */
/*   Updated: 2022/08/28 15:28:41 by lbricio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ASCII_CLEAR 127

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		str[i++] = ASCII_CLEAR;
	}
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

char	*ft_get_minor_arg(int argc, char **argv)
{
	int	ascend;
	int	minor;

	ascend = 1;
	minor = 1;
	while (ascend < argc)
	{
		if (ft_strcmp(argv[minor], '>', argv[ascend]))
			minor = ascend;
		ascend++;
	}
	return (argv[minor]);
}

int	main(int argc, char **argv)
{	
	int	i;

	i = 1;
	while (i++ < argc)
		ft_putstr (ft_get_minor_arg (argc, argv));
	return (0);
}
