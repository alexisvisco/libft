/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen_classic.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/09 10:01:55 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:56:09 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen_classic(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
