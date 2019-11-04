/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majeande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 23:25:26 by majeande          #+#    #+#             */
/*   Updated: 2019/02/27 23:25:29 by majeande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# define PUT ft_putstr("There\n");
# define PUT1 ft_putstr("There1\n");
# define PUT2 ft_putstr("There2\n");
# define PUT3 ft_putstr("There3\n");
# define PUT4 ft_putstr("There4\n");
# define PUT5 ft_putstr("There5\n");
# define PUT6 ft_putstr("There6\n");
# define PUT7 ft_putstr("There7\n");
# define PUT8 ft_putstr("There8\n");
# define PUT9 ft_putstr("There9\n");

# define BUFF_SIZE 16

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

typedef struct	s_map
{
	int			nb_lines;
	int			nb_cols;
	char		vide;
	char		full;
	char		square;
	int			yet;
}				t_map;

typedef struct	s_point
{
	int			x;
	int			y;
	int			size;
}				t_point;

int				ft_three(char **grid, t_point *best, t_map *map);
int				ft_print_three(char **grid, t_point *best, t_map *map);
int				ft_two(char **grid, t_point *best, t_map *map);
void			ft_line(char **grid, t_map *map);
void			ft_cols(char **grid, t_map *map);
int				ft_getlen(char *str, char c);
int				ft_parsing(int fd, char *file_name, t_map *map);
char			*ft_getgrid(int fd, t_map *map);
char			**ft_gettab(char *input, t_map *map);
int				ft_parse_fl(char fl[BUFF_SIZE]);
int				ft_check_without(char **grid, t_map *map);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_puttab(char **tab);
int				ft_strlen(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
int				ft_atoi(char *str);
void			ft_error(void);
char			*ft_strduptil(char *str, char stop, int *pos);
char			*ft_strrealloc(char *str, int len);
int				ft_solve(char **grid, t_map *map);

#endif
