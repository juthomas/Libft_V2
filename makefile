## Name of Project

NAME = libft.a

## Color for compiling (blue)

COLOR = \0033[1;34m

## List of Directories

INC_DIR = includes
OBJ_DIR = objs
SRC_DIR = srcs

STRING_DIR = string
MEMORY_DIR = memory
DISPLAY_DIR = display
INTEGER_DIR = integer
LIST_DIR = list
MATRIX_DIR = matrix
OTHER_DIR = other
PRINTF_DIR = printf

## Compilating Utilities

FLAGS = -Wall -Wextra -Werror
INC = $(INC_DIR:%=-I ./%)
CC = clang $(FLAGS) $(INC)

## List of Functions

DISPLAY_FT = ft_putchar \
			ft_putchar_fd \
			ft_putstr \
			ft_putstr_fd \
			ft_putnbr_fd \
#			ft_putnstr \
			ft_putnstr_fd \
			ft_putendl \
			ft_putendl_fd \
			ft_putnbr \
			ft_putnbr_fd \
			ft_boardprint \
			ft_intboardprint \
			ft_gnl

INTEGER_FT = ft_itoa \
			ft_isdigit \
			ft_isnumber \
			ft_ishexa \
			ft_pwr \
			ft_intboardset

LIST_FT = ft_lstnew \
			ft_lstdelone \
			ft_lstdel \
			ft_lstadd \
			ft_lstiter \
			ft_lstmap \
			ft_lstend \
			ft_lstinser \
			ft_lstinser_sorted \
			ft_lstlen \
			ft_lstshift

MATRIX_FT = ft_mtrx_mult \
			ft_mtrx_vector_mult \
			ft_mat_rxyz

MEMORY_FT = ft_memset \
			# ft_memalloc \
			# ft_memdel \
			# ft_bzero \
			# ft_memcpy \
			# ft_memccpy \
			# ft_memmove \
			# ft_memchr \
			# ft_memcmp

OTHER_FT = ft_atoi_base \
			ft_isalnum \
			ft_isascii \
			ft_isspace \
			ft_swap \
			ft_isprint

PRINTF_FT = ft_printf \
 			pf_solve_flags \
 			pf_apply_flags \
 			pf_itoa

STRING_FT = ft_bzero \
			ft_stralloc \
			ft_strcat \
			ft_strcpy \
			ft_strjoin \
			ft_strlen \
			ft_strnew \
			ft_strcmp \

## List of Utilities

SRC = $(DISPLAY_FT:%=$(SRC_DIR)/$(DISPLAY_DIR)/%.c) \
		$(STRING_FT:%=$(SRC_DIR)/$(STRING_DIR)/%.c) \
		$(MEMORY_FT:%=$(SRC_DIR)/$(MEMORY_DIR)/%.c) \
#		$(INTEGER_FT:%=$(SRC_DIR)/$(INTEGER_DIR)/%.c) \
#		$(MATRIX_FT:%=$(SRC_DIR)/$(MATRIX_DIR)/%.c) \
		$(OTHER_FT:%=$(SRC_DIR)/$(OTHER_DIR)/%.c) \
		$(PRINTF_FT:%=$(SRC_DIR)/$(PRINTF_DIR)/%.c) \

OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

OBJ_DIRS = $(DISPLAY_DIR:%=$(OBJ_DIR)/%) \
			$(STRING_DIR:%=$(OBJ_DIR)/%) \
			$(MEMORY_DIR:%=$(OBJ_DIR)/%) \
#			$(INTEGER_DIR:%=$(OBJ_DIR)/%) \
			$(LIST_DIR:%=$(OBJ_DIR)/%) \
			$(MATRIX_DIR:%=$(OBJ_DIR)/%) \
			$(OTHER_DIR:%=$(OBJ_DIR)/%) \
			$(PRINTF_DIR:%=$(OBJ_DIR)/%) \


## Rules of Makefile

all: $(NAME)
	@echo "$(COLOR)Libft \033[100D\033[40C\0033[1;30m[All OK]\0033[1;37m"

$(OBJ_DIRS):
	@mkdir -p $@
	@echo "$(COLOR)$@ \033[100D\033[40C\0033[1;32m[Created]\0033[1;37m"

$(SRC):

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) -c $< -o $@
	@echo "$(COLOR)$(@:$(OBJ_DIR)/%=%) \033[100D\033[40C\0033[1;32m[Compiled]\0033[1;37m"



$(NAME): $(OBJ_DIRS) $(SRC)
	@$(MAKE) $(OBJ)
	@echo "$(COLOR)Objects \033[100D\033[40C\0033[1;32m[Created]\0033[1;37m"
	@ar rcs $@ $(OBJ)
	@echo "$(COLOR)$(NAME) \033[100D\033[40C\0033[1;32m[Created]\0033[1;37m"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(COLOR)Objects \033[100D\033[40C\0033[1;31m[Deleted]\0033[1;37m"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOR)$(NAME) \033[100D\033[40C\0033[1;31m[Deleted]\0033[1;37m"

re: fclean all

norme:
	@norminette $(SRC) $(INC_DIR)/

.PHONY: all clean fclean re norme