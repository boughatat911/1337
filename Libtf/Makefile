# Library name
Library = libft

# List of source files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
      ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	  ft_calloc.c

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Object files
OBJ = $(SRC:.c=.o)

# Library file name
OUTN = $(Library).a

# Build library
$(OUTN): $(OBJ)
	ar -rc $(OUTN) $(OBJ)
	ranlib $(OUTN)

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files and library
clean:
	rm -f $(OBJ)

# Clean everything, including the library
fclean: clean
	rm -f $(OUTN)

# Rebuild everything
re: fclean $(OUTN)

# Declare phony targets
.PHONY: all clean fclean re
