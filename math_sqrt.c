/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   math_sqrt.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/16 11:02:10 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:57:26 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		my_sqrt(int nb, int target)
{
	if (nb * nb > target)
		return (0);
	else if (nb * nb == target)
		return (nb);
	else
		return (my_sqrt(nb + 1, target));
}

int				math_sqrt(int nb)
{
	return (my_sqrt(1, nb));
}
