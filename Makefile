# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mait-you <mait-you@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 14:29:01 by mait-you          #+#    #+#              #
#    Updated: 2024/10/25 18:02:56 by mait-you         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c $(2_FILES) $(BONUS)

2_FILES = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(FILES:.c=.o)
B_FILES = ft_lstnew.c
B_OBJS = $(B_FILES:.c=.o)
AR = ar rcs
RM = rm -f
NAME = libft.a

RED = \033[31m
GREEN = \033[32m
RESET = \033[0m

all: $(NAME) clean main

bonus: all $(B_OBJS)
	@$(AR) $(NAME) $(B_OBJS)

# ar rcs libft.a ft_isalpha.o 
$(NAME):$(OBJS)
#	@echo "$(GREEN)Creat libft.a$(RESET)"
	@$(AR) $(NAME) $(OBJS)

# gcc -Wall -Wextra -Werror -c ft_isalpha.c -o ft_isalpha.o 
%.o: %.c
#	@echo "$(GREEN)Creat object file$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@ 

clean:
#	@echo "$(RED)Clean object file$(RESET)"
	@$(RM) $(OBJS) $(B_OBJS)


fclean:
#	@echo "$(RED)Clean libft.a$(RESET)"
	@$(RM) $(NAME)

re: fclean clean

main:
#	@echo "$(GREEN)Creat main.c$(RESET)"
	@$(CC) $(CFLAGS) -L. -lft bonus_main.c