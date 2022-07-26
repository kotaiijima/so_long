CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra
NAME		=	so_long
INCLUDES	=	includes

LIBFT_PATH	=	./libft/
SRCS_PATH	=	./srcs/
MLX_PATH	=	./minilibx-linux/

SRCS_FILES	=	check_filename.c check_map.c error_and_exit.c event.c \
				get_next_line.c get_next_line_utils.c player.c\
				input_player_position.c list_to_array.c main.c map.c

SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_FILES))
SRCS_OBJS	=	$(SRCS:.c=.o)

LIBFTMAKE	=	$(MAKE) -C $(LIBFT_PATH)
LIBFTFLAG	=	-L$(LIBFT_PATH) -lft
MLXMAKE		=	$(MAKE) -C $(MLX_PATH)
MLXFLAG		=	-L/usr/X11R6/lib -lX11 -lXext -framework OpenGL -framework AppKit
GITMLX			= 	git clone https://github.com/42Paris/minilibx-linux.git

all:			$(NAME)

$(MLX_PATH):
				$(GITMLX)


$(NAME):		$(MLX_PATH) $(SRCS_OBJS)
				$(LIBFTMAKE)
				$(MLXMAKE)
				$(CC) $(CFLAGS) $(SRCS_OBJS) $(LIBFTFLAG) $(MLXFLAG) $(MLX_PATH)libmlx.a -o $(NAME)

.c.o:
				$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
				$(LIBFTMAKE) clean
				$(MLXMAKE) clean
				$(RM) $(SRCS_OBJS)

fclean:			clean
				$(LIBFTMAKE) fclean
				$(RM) $(MLX_PATH)/libmlx.a
				$(RM) $(NAME) $(SRCS_OBJS)

re:				fclean all

.PHONY:			all clean fclean re
