/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_table.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 02:14:12 by miguel            #+#    #+#             */
/*   Updated: 2020/02/18 23:33:58 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "4_en_raya.h"

void create_table(char tabla[4][4])
{
	int i;
	int j;
	char count;

	count = ' ';
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tabla[i][j] = count;
			j++;
		}
		i++;
	}
}