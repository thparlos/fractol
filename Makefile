# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/05 14:09:52 by abelkhay          #+#    #+#              #
#    Updated: 2019/07/05 14:09:56 by abelkhay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fractol
CC= gcc
CFLAGS= -Wall -Werror -Wextra
MLX= -lmlx -framework OpenGL -framework Appkit
SRC=	./src/main.c\
		./src/init.c\
		./src/mandelbrot.c\
		./src/fractol.c\
		./src/julia.c\
		./src/burningship.c\
		./src/douady.c\
		./src/octopus.c\
		./src/siegel.c\
		./src/shuriken.c\
		./src/lightning.c

OBJ= $(SRCS:.c=.o)
LIBFT= ./libft/libft.a
all: $(NAME)

$(NAME): $(SRC)
	make -C ./libft/
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(LIBFT) $(MLX)

clean:
	/bin/rm -rf $(OBJ)
	make -C libft fclean

fclean: clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf ./libft/libft.a

re: fclean all

.PHONY: clean fclean all re
