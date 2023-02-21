# Nome do executável
NAME = push_swap

# Diretórios
SRCDIR = source
INCDIR = header
OBJDIR = objs

# Flags de compilação
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3
LDFLAGS = 

# Arquivos fonte e objetos
SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))

# Regras
.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

# Dependências
$(OBJ): | $(OBJDIR)


