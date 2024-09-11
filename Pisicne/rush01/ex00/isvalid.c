/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:16:42 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/27 16:15:45 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isvalid(int argc, char *argv[])
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	if (argc != 2)//checks if num of args is valid
		return (0);
	while (argv[1][i] != '\0')//gets strlen
	{
		i++;
	}
	if (i != 31)//checks if numbers are less than 16 (31 to account for spaces)
		return (0);	
	//else if (/*(argv[1][x] + argv[1][x + 4] > '5') || (argv[1][x] + argv[1][x + 4]) < '3')
	//	return (0);
//	else 
		return (1);
}
