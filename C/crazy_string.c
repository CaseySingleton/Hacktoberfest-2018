/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crazy_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 21:01:29 by csinglet          #+#    #+#             */
/*   Updated: 2018/10/31 21:12:50 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static void		str_to_lower(char *str)
{
	int			i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
}

void			crazy_string(char *str)
{
	int			i;

	i = -1;
	str_to_lower(str);
	while (str[++i] != '\0')
		if (i % 2 == 0)
			str[i] -= 32;
	printf("%s\n", str);
}

int				main(int argc, char *argv[])
{
	int			i;

	i = 0;
	while (++i < argc)
		crazy_string(argv[i]);
	return (0);
}
