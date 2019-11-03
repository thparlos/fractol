# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/01 22:23:36 by thparlos          #+#    #+#              #
#    Updated: 2019/11/01 23:24:33 by thparlos         ###   ########.fr        #
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
		./src/burningship.c

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