/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 23:30:19 by ieropaie          #+#    #+#             */
/*   Updated: 2019/10/13 00:10:52 by ieropaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define LOGIN "ieropaie"
# define P1     'O'
# define P2     'X'

#include "libft.h"

typedef struct s_filler
{
int x;
int o;
int player;
char **mapa;
}              e_filler;

typedef struct s_filler_pl
{
char **placeholder;
int x;
int y;

}              e_filler_pl;
#endif