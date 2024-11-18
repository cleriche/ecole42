# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 12:42:27 by cleriche          #+#    #+#              #
#    Updated: 2024/11/13 15:09:55 by cleriche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la bibliothèque à créer
NAME = libft.a

# Compilateur et options
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Fichiers source
SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
        ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c

OBJ = $(SRC:.c=.o)
	
# Règle par défaut
all: $(NAME)

# Création de la bibliothèque
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)
	
# Nettoyage complet (objets et bibliothèque)
fclean: clean
	rm -f $(NAME)
	
# Recompilation complète
re: fclean all

# Déclaration des cibles phony
.PHONY: all clean fclean re
