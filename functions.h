/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:56:58 by bguyot            #+#    #+#             */
/*   Updated: 2022/07/19 16:28:39 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <stddef.h>
# include <stdlib.h>
# include "structs.h"

int		parse_arg(char *arg, t_data *data);
int		ft_isspace(char c);
int		ft_atoi(const char *str);
void	ft_putstr(char *s);
char	**ft_split(const char *s, char c);
size_t	ft_strlen(const char *str);
size_t	ft_arrlen(const void **arr);

#endif
