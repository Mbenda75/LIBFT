# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 21:02:58 by benmoham          #+#    #+#              #
#    Updated: 2019/11/27 21:36:19 by benmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_isascii.c ft_memcpy.c ft_split.c ft_strmapi.c ft_toupper.c \
ft_isdigit.c ft_memmove.c ft_strchr.c ft_strncmp.c ft_atoi.c ft_isprint.c \
ft_memset.c ft_strdup.c ft_strnstr.c ft_bzero.c ft_itoa.c ft_putchar_fd.c \
ft_strjoin.c ft_strrchr.c ft_calloc.c ft_memccpy.c ft_putendl_fd.c ft_strlcat.c \
ft_strtrim.c ft_isalnum.c ft_memchr.c ft_putnbr_fd.c ft_strlcpy.c ft_substr.c \
ft_isalpha.c ft_memcmp.c ft_putstr_fd.c ft_strlen.c ft_tolower.c  ft_strcpy.c ft_strcat.c \


SRCS_BONUS	=	ft_lstnew.c ft_lstsize.c \
ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
ft_lstdelone.c ft_lstiter.c ft_lstlast.c \

HEADER		=	libft.h

OBJS		=	${SRCS:.c=.o}

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

NAME		=	libft.a

.c.o:
			gcc -Wall -Wextra -Werror -c -I./${HEADER} $< -o ${<:.c=.o}
			@echo "\033[92mstatus ${<:.c=.o} is [OK]\033[0m"

${NAME}:	${OBJS} ${HEADER}
			ar rc $@ $^
			@echo "\033[92mstatus ${NAME} is [OK]\033[0m"

bonus:		${NAME} ${OBJS_BONUS}
			ar rc $^
			@echo "\033[92mstatus ${NAME} $@ is [OK]\033[0m"

all:		${NAME}
			@echo "\033[92mstatus $@ is [OK]\033[0m"

clean:
			rm -f ${OBJS} ${OBJS_BONUS}
			@echo "\033[92mstatus $@ is [OK]\033[0m"

fclean:		clean
			rm -f ${NAME}
			@echo "\033[92mstatus $@ [OK]\033[0m"

re:			fclean all
			@echo "\033[92mstatus $@ [OK]\033[0m"

.PHONY:		fclean clean re all bonus