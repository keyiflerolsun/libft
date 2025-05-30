CFILES = ft_isalpha.c \
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
	ft_substr.c

OFILES = $(CFILES:.c=.o)

NAME   = libft.a
CC     = cc
CFLAGS = -Wall -Wextra -Werror

GREEN   = \033[0;32m
YELLOW  = \033[0;33m
BLUE    = \033[0;36m
RED     = \033[0;31m
MAGENTA = \033[0;35m
CYAN    = \033[0;36m
RESET   = \033[0m

all: $(NAME)

$(NAME): $(OFILES)
	@echo -e "$(GREEN)» 📦 Creating\t$(RESET): $(MAGENTA)$(NAME)$(RESET)"
	@ar -rcs $(NAME) $(OFILES)

%.o: %.c
	@echo -e "$(BLUE)» ⚙️  Compiling\t$(RESET): $(YELLOW)$<\t$(RESET)» $(GREEN)$@$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo -e "$(RED)» 🧹 Cleaning\t$(RESET): $(CYAN)$(ODIR)/*.o $(RESET)"
	@rm -rf $(OFILES)

fclean: clean
	@echo -e "$(RED)» 🔥 Removing\t$(RESET): $(MAGENTA)$(NAME)$(RESET)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
