# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 14:51:15 by lurmenet          #+#    #+#              #
#    Updated: 2023/12/10 18:22:54 by lurmenet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_putchar_fd.c ft_strlen.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_bzero.c ft_substr.c\
		ft_strlcpy.c ft_strjoin.c ft_strtrim.c ft_atoi.c \
		ft_split.c ft_memset.c ft_itoa.c  ft_strmapi.c ft_striteri.c\
		ft_calloc.c ft_strdup.c ft_memcpy.c ft_putnbr_fd.c ft_memmove.c\
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c 
OBJS = ${SRCS:.c=.o}

NAME = libft.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}


clean:
	${RM} ${OBJS} 

fclean: clean
	${RM} ${NAME}  

re: fclean all

.PHONY : clean fclean re
