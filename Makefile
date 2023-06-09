CC = cc

NAME = push_swap

FLAGS = -Wall -Wextra -Werror -g

SRC = push_swap.c \
		utils.c \
		utils2.c \
		utils3.c \
		utils4.c \
		caller.c \
		caller2.c \
		caller3.c \
		initialize.c \
		printer.c \
		av_checker.c \
		size_one.c \
		size_two.c \
		size_three.c \
		size_four_five.c \
		size_over.c \
		rotate.c \
		push.c \
		swap.c

LIBFT = libft/libft.a

all: $(NAME)

$(NAME):
	make -C libft
	$(CC) $(FLAGS) $(SRC) $(LIBFT) -o $(NAME);\
	echo "\e[92m$(NAME) compiled\e[0m";\

re:	fclean all

clean:
	make clean -C libft
	@echo "\e[90mNothing to clean\e[0m"

fclean:
	make fclean -C libft
	rm -rf $(NAME);\
	echo "\e[92m$(NAME) removed\e[0m";\

.PHONY: all re clean fclean bonus

.SILENT:
