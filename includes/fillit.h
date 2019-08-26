/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 17:46:00 by hwiegand          #+#    #+#             */
/*   Updated: 2019/04/20 17:58:40 by hwiegand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 21
# include "../src/libft/libft.h"

typedef struct		s_str
{
	char			*(*f)(char *, int, int, char);
	int				heights;
	int				width;
	struct s_str	*next;

}					t_str;

t_str				*ft_qwerty(char *(*f)(char *, int, int, char), \
								int w, int h);
void				ft_lstend(t_str **alst, t_str *new);
char				*getmap(int dlinadon, char *src);
t_str				*examplfull();
int					kolichestvotetr(t_str *fig);
int					dlinadon(t_str *fig);
t_str				*ft_open(int fd);
int					podbor(t_str *fig, char *str, char letter);
int					ft_sqrt(int nb);
void				ft_lstdelstr(t_str **fig);
void				ft_lstdelstrone(t_str **fig);
char				*kvadrat(char *src, int i, int n, char c);
char				*palka(char *src, int i, int n, char c);
char				*palka_g(char *src, int i, int n, char c);
char				*krivaja_1(char *src, int i, int n, char c);
char				*krivaja_2(char *src, int i, int n, char c);
char				*krivaja_3(char *src, int i, int n, char c);
char				*krivaja_4(char *src, int i, int n, char c);
char				*krivaja_5(char *src, int i, int n, char c);
char				*krivaja_6(char *src, int i, int n, char c);
char				*krivaja_7(char *src, int i, int n, char c);
char				*krivaja_8(char *src, int i, int n, char c);
char				*zigzag_1(char *src, int i, int n, char c);
char				*zigzag_2(char *src, int i, int n, char c);
char				*zigzag_3(char *src, int i, int n, char c);
char				*zigzag_4(char *src, int i, int n, char c);
char				*piska_1(char *src, int i, int n, char c);
char				*piska_2(char *src, int i, int n, char c);
char				*piska_3(char *src, int i, int n, char c);
char				*piska_4(char *src, int i, int n, char c);
t_str				*examplfull(void);

#endif
