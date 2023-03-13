
#---------------------------------------------------#
#                   PRINTF MAKEFILE                  #
#---------------------------------------------------#

# Name of the output library
NAME = libftprintf.a

# Define some color codes for pretty printing
RED = \033[91m
YELLOW = \033[93m
WHITE = \033[97m
GREEN = \033[92m
DEF_CL = \033[m
CYAN = \033[96m

#---------------------------------------------------#
#                   COMPILER SETTINGS               #
#---------------------------------------------------#

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -I

# Command to remove files
RM = rm -f

# Command to run norminette
NORM = norminette -R CheckForbiddenSourceHeader .

#---------------------------------------------------#
#                   SOURCE FILES                    #
#---------------------------------------------------#

# Header file
HEADER = ft_printf.h

# Source files
SRC    = ft_printf.c ft_formats.c ft_print_unsigned.c ft_print_ptr.c ft_print_hex.c \
ft_print_percent.c ft_print_nbr.c ft_print_str.c ft_print_char.c

# Object files generated from source files
OBJ    = $(SRC:.c=.o)

# Dependencies generated from source files
DEPS   = $(SRC:.c=.d)

#---------------------------------------------------#
#                   OBJECT FILES                    #
#---------------------------------------------------#

# Rule to generate an object file from a C source file
%.o: %.c $(HEADER) Makefile
	@$(CC) $(CFLAGS) -MMD -c $< -o $@
	@echo "$(CYAN)Compiling: $(CYAN)$<$(DEF_CL) $(GREEN)[OK]$(DEF_CL)"

#---------------------------------------------------#
#                   MAIN TARGET                     #
#---------------------------------------------------#

# Default rule to build the static library
all: $(NAME)

# Include dependencies for all source files
-include $(DEPS)

# Rule to build the static library
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(GREEN)$(NAME)$(DEF_CL) $(GREEN)[OK]$(DEF_CL)"

#---------------------------------------------------#
#                    CLEANING                       #
#---------------------------------------------------#

# Rule to clean up object files and dependencies
clean:
	@$(RM) $(OBJ)
	@echo "$(CYAN)	Deleted objects: $(RED)$(OBJ) $(DEF_CL)"
	@$(RM) $(DEPS)
	@echo "$(CYAN)	Deleted dependencies: $(RED)$(DEPS) $(DEF_CL)"

# Rule to remove the compiled library file and cleaned object files
fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)	DELETED: $(RED)$(NAME)$(DEF_CL)"

#---------------------------------------------------#
#               ADDITIONAL TARGET                   #
#---------------------------------------------------#

# Rule to completely rebuild the program from scratch
re: fclean all

# Rule to apply and print norminette
norm:
	@echo "$(YELLOW)Norminette says:$(DEF_CL)"
	@$(NORM)

# Rule to tell make that the listed targets do not correspond to actual files.
.PHONY: all clean fclean re norm
