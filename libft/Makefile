# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttreichl <ttreichl@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 16:04:41 by ttreichl          #+#    #+#              #
#    Updated: 2023/10/24 16:04:46 by ttreichl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= libft.a

CC						= gcc
RM						= rm -rf
CFlAGS			= -Wall -Wextra -Werror -I

SRCS			=	ft_memcmp.c ft_strdup.c ft_split.c ft_strlcpy.c ft_isalnum.c ft_putnbr_fd.c \
					ft_memset.c ft_memmove.c ft_strjoin.c ft_strchr.c ft_calloc.c \
					ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlcat.c ft_striteri.c \
					ft_putstr_fd.c ft_itoa.c ft_bzero.c ft_putendl_fd.c ft_memcpy.c \
					ft_memchr.c ft_isalpha.c ft_strlen.c ft_toupper.c ft_tolower.c \
					ft_substr.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
					ft_strtrim.c ft_atoi.c ft_putchar_fd.c

B_SRC			= 	ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c \
					ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c

OBJS			=	$(SRCS:.c=.o)

B_OBJS			=	$(B_SRC:.c=.o)

all:			$(NAME) $(BONUS)

$(NAME): 		$(OBJS)
				ar rcs $(NAME)	$(OBJS)
				ranlib $(NAME)

bonus:			$(B_OBJS)
				ar rcs $(NAME)	$(B_OBJS)
				ranlib $(NAME)

clean:
				$(RM) $(OBJS) $(B_OBJS)

fclean:			clean
						$(RM) $(NAME)

re:				fclean all

.PHONY:			all bonus clean fclean re