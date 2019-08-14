/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolvakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:32:40 by akolvakh          #+#    #+#             */
/*   Updated: 2019/04/14 16:32:42 by akolvakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

# define MAX_FD 1024 + 1
# define BUFF_SIZE 25
# define SHORT !line || (fd < 0 || fd >= MAX_FD) || (read(fd, stack[fd], 0) < 0)

int		get_next_line(int const fd, char **line);

#endif
