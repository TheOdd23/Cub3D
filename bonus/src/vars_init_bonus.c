/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vars_init_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:17:04 by mraymond          #+#    #+#             */
/*   Updated: 2022/12/12 14:12:23 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d_bonus.h"

void	vars_init(t_vars *vars)
{
	vars->tex[0].img = NULL;
	vars->tex[1].img = NULL;
	vars->tex[2].img = NULL;
	vars->tex[3].img = NULL;
	vars->tex[0].addr = NULL;
	vars->tex[1].addr = NULL;
	vars->tex[2].addr = NULL;
	vars->tex[3].addr = NULL;
	vars->tex[0].stat = false;
	vars->tex[1].stat = false;
	vars->tex[2].stat = false;
	vars->tex[3].stat = false;
	vars->map.is_map = false;
	vars->map.map = NULL;
	vars->map.map_cpy = NULL;
}

/* INIT FUNCTION (screen size reset)
** calcul de la grandeur maximal de raycasting en width et height
*/
void	raycast_init(t_vars *vars)
{
	reset_perso(vars);
	vars->screen.resolution_h = RESOLUTION_H_DEF;
	vars->screen.resolution_w = RESOLUTION_W_DEF;
	max_height_width(&vars->screen);
	center_pixel(&vars->screen);
	column_limit(&vars->screen, &vars->raycast);
	set_fov_angle_div(vars);
}
