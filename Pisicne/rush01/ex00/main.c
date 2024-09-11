/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 23:34:25 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/27 15:23:46 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void despace(char *argv[], char *input);

int     isvalid(int argc, char *argv[]);

int	main(int argc,char *argv[])
{	
	int		row;
	int		col;
	char	grid[4][4];
	
	if (isvalid(argc, argv) == 0)
	{
		write(1, "invalid input\n", 15);
		return (0);
	}
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = '0';
			col++;
		}
		row++;
	}
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			write(1, &grid[row][col], 1);
				col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
