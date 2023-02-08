#-mkup-auto-sources-###############################################590317080223#
SRC_DIR		=	.

EXTENSION	=	".cpp"
SRC_LIST	=	$(addsuffix $(EXTENSION), \
				Brain \
				WrongCat \
				Animal \
				Dog \
				Cat \
				WrongAnimal \
				main \
				)
SRC			=	$(addprefix $(SRC_DIR)/, $(SRC_LIST))
#-mkup-auto-sources-###############################################590317080223#

INC_DIR		= 	.
OBJ_DIR		=	obj
OBJ			=	$(addprefix $(OBJ_DIR)/, $(SRC_LIST:$(EXTENSION)=.o))

CC			=	@c++
CFLAGS		= 	-Wall -Werror -Wextra -std=c++98 -MMD -I $(INC_DIR)

RM			= 	@rm -rf 2>/dev/null
NOPR		= 	--no-print-directory

#colors
cw			=	"\033[0m"
cr			=	"\033[31m"
cg			=	"\033[32m"
cb			=	"\033[34m"
cp			=	"\033[35m"

NAME		= 	"exec_name"

######################################################################
$(OBJ_DIR)/%.o:$(SRC_DIR)/%.cpp
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) -c $< -o $@
#\

			@echo $(cg)"(@) "$@" (<) "$< $(cw)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)
			@echo $(cg)$(NAME)$(cw)

all:		$(NAME)

clean:
			$(RM) $(OBJ_DIR)
			$(RM) $(NAME).d a.d
			@echo -n $(cr)
			@echo $(OBJ) | tr ' ' '\n'
			@echo -n $(cw)

fclean:
			make -s -j clean
			$(RM) $(NAME)
			@echo $(cr)$(NAME)$(cw)

re:			fclean
			make -s -j all

run:
			make -s -j all
			./$(NAME)

val:
			make -s -j all
			valgrind				\
			--show-leak-kinds=all	\
			--track-origins=yes		\
			--leak-check=full		\
			./$(NAME)

verbose:
			@echo $(cp)"SRC_DIR  : "$(SRC_DIR)
			@echo $(cp)"EXTENSION: "$(EXTENSION)
			@echo $(cp)"SRC_LIST : "$(SRC_LIST)
			@echo $(cp)"SRC      : "$(SRC)
			@echo -n $(cb) && ls -CRAB $(SRC_DIR)/* ||true
			@echo
			@echo $(cp)"INC_DIR  : "$(INC_DIR)
			@echo -n $(cb) && ls -CRAB $(INC_DIR)/* ||true
			@echo
			@echo $(cp)"OBJ_DIR  : "$(OBJ_DIR)
			@echo $(cp)"OBJ      : "$(OBJ)
			@echo -n $(cb) && ls -CRAB $(OBJ_DIR)/*.o ||true

			@echo
			@echo $(cp)"DEPS     : "$(DEPS)
			@echo -n $(cb) && ls -CRAB $(OBJ_DIR)/*.d ||true
			@echo
			@echo $(cp)"CC       : "$(CC)
			@echo $(cp)"CFLAGS   : "$(CFLAGS)
			@echo $(cp)"NAME     : "$(NAME)
			@echo -n $(cw)

DEPS		=	$(OBJ:.o=.d)
-include $(DEPS)

.PHONY:		all clean fclean re run val verbose
.SILENT: 	all clean fclean re run val verbose $(NAME)
