NAME = push_swap

SRCDIR = source
INCDIR = header
OBJDIR = objs

CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3


SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))


all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	rm -rf objs

fclean: clean
	rm -rf $(NAME)

re:fclean all

$(OBJ): | $(OBJDIR)

.PHONY: all clean fclean
