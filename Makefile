# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iguidado <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/18 11:15:40 by iguidado          #+#    #+#              #
#    Updated: 2019/11/26 18:19:47 by iguidado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Outing
NAME = libft.a

#Dir
HEADER = .
PATH_SRC = .
PATH_BON = .

#Files
SRC =	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_strtrim.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_split.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c 

BON =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

HFILE = $(addprefix $(HEADER), /$(addsuffix .h, $(basename $(NAME))))

#Compile
CC = clang
OPTION = -I $(HEADER) -c
DEBUG = -g3 -fsanitize=address
FLAG = -Wall -Werror -Wextra

#Auto
OBJECT = $(SRC:%.c=%.o)
BONUS_OBJ = $(BON:%.c=%.o)
SRCS = $(addprefix $(PATH_SRC)/, $(SRC))
BONUS = $(addprefix $(PATH_BON)/, $(BON))


all: $(NAME)

$(NAME): $(OBJECT)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

$(OBJECT) : $(SRCS) $(HFILE)
	$(CC) $(FLAG) $(OPTION) $(SRCS)

bonus:
	$(CC) $(FLAG) $(OPTION) $(SRCS) $(BONUS) -DBONUS
	ar rc $(NAME) $(OBJECT) $(BONUS_OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJECT) $(BONUS_OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus
