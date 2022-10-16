# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 17:20:09 by elel-yak          #+#    #+#              #
#    Updated: 2022/10/16 16:32:49 by elel-yak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
# 	* command to compile our functions
CFLAGS	= -Wall -Werror -Wextra
CC	= gcc
# 	* functions that must be compiled through our makefile
SRCS    = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strnstr.c \
	# ft_strrchr.c \
	# ft_putchar_fd.c \
	# ft_putendl_fd.c \
	# ft_putnbr_fd.c \
	# ft_putstr_fd.c \
	# ft_split.c \
	# ft_itoa.c \
	# ft_striteri.c \
	# ft_strjoin.c \
	# ft_strmapi.c \
	# ft_substr.c \
	# ft_strtrim.c \

# 	* create our executable file
# 	* replace all files with .c extension to .o extension
OBJS 	= $(SRCS:%.c=%.o)

# 	* "rules" for our makefile to run
all:	$(NAME)

$(NAME):	$(OBJS)
# 	* ar ~create our file
# 	* -r ~"read" adds or modifies an already created file
# 	* -c ~suppress air message in terminal
#	* -s ~"refresh explorer"
	ar -rcs $(NAME) $(OBJS)

# 	* forcibly delete all .o files created by our makefile
clean:
	rm -rf $(OBJS)

# 	* force delete all created .o files and created .a file
fclean: clean
	rm -f $(NAME)

# 	* force delete all created .o files and created .a file and then recompile my files
re:	fclean all

# 	* prevent our program from crashing if there is any folder or \
file with the name of one of our "rules"
.PHONY:	all clean fclean re

