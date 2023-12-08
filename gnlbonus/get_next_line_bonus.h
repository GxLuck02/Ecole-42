
#ifndef GNLBONUS_GET_NEXT_LINE_BONUS_H
# define GNLBONUS_GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif


#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		find_new_line(char *buf);
int 	ft_strlen(char *string);
int		len_to_newline(char *string);
char	*join_buf(char *buf, char *string);

#endif //GNLBONUS_GET_NEXT_LINE_BONUS_H
