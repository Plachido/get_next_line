/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:29:57 by rchallie          #+#    #+#             */
/*   Updated: 2019/11/04 10:12:57 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdlib.h>
# include <unistd.h>


int					get_next_line_test(int fd, char **line);
int					has_return(char *str);

size_t				ft_strlen2(const char *s);

char				*join_str(const char *s1, const char *s2);

#endif
