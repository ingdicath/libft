# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dsalaman <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 08:31:13 by dsalaman      #+#    #+#                  #
#    Updated: 2019/11/12 13:56:02 by dsalaman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_strlen.c ft_strncmp.c\
	  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	  ft_toupper.c ft_tolower.c ft_strdup.c ft_putchar_fd.c ft_atoi.c\
	  ft_strchr.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memcmp.c\
	  ft_memmove.c ft_memchr.c ft_strrchr.c ft_strlcpy.c ft_substr.c\
	  ft_calloc.c ft_strnstr.c ft_strlcat.c ft_strcpy.c ft_strjoin.c\
	  ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c

OBJECTS = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

$(OBJECTS): $(SRC)
	@gcc $(FLAGS) -c $(SRC)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
