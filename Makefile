CC = cc

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

SRC = push_swap.c \
		utils.c \
		initialize.c \
		printer.c \
		av_checker.c \
		size_one.c \
		size_two.c \
		size_three.c \
		rotate.c \
		push.c \
		swap.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME) -g;\
	echo "\e[92m$(NAME) compiled\e[0m";\

re:	fclean all

clean:
	@echo "\e[90mNothing to clean\e[0m"

fclean:
	rm -rf $(NAME);\
	echo "\e[92m$(NAME) removed\e[0m";\

.PHONY: all re clean fclean bonus

.SILENT:
