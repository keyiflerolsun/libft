CFILES      = ft_isalpha.c \
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
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c 

BONUS_FILES = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJDIR  = obj
OFILES  = $(addprefix $(OBJDIR)/, $(CFILES:.c=.o))
BONUS_O = $(addprefix $(OBJDIR)/, $(BONUS_FILES:.c=.o))

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
	@printf "$(GREEN)» 📦 Creating\t$(RESET): $(MAGENTA)$(NAME)$(RESET)\n"
	@ar -rcs $(NAME) $(OFILES)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(OBJDIR)
	@printf "$(BLUE)» ⚙️  Compiling\t$(RESET): $(YELLOW)$<\t$(RESET)» $(GREEN)$@$(RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OFILES) $(BONUS_O)
	@printf "$(MAGENTA)» 🎁 Bonus\t$(RESET): $(GREEN)$(NAME)$(RESET)\n"
	@ar -rcs $(NAME) $(OFILES) $(BONUS_O)

clean:
	@printf "$(RED)» 🧹 Cleaning\t$(RESET): $(CYAN)./$(OBJDIR) $(RESET)\n"
	@rm -rf $(OBJDIR)

fclean: clean
	@printf "$(RED)» 🔥 Removing\t$(RESET): $(MAGENTA)$(NAME)$(RESET)\n"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
