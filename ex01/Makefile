NAME					=	moarbrainz

SRCDIR					=	./
INCLUDEDIR				=	./

SRCFILES				=	main.cpp		\
							Zombie.cpp		\
							zombieHorde.cpp	\

SRCS					=	$(addprefix $(SRCDIR), $(SRCFILES))

CC						=	c++
CFLAGS					=	-Wall -Wextra -Werror -std=c++98 -pedantic
RM						=	rm -f

all:					$(NAME)

$(NAME):				$(SRCS)
							$(CC) $(CFLAGS) $(SRCS) -I $(INCLUDEDIR) -o $(NAME)

clean:
							$(RM) $(NAME)

fclean:					clean

re:						fclean all

.PHONY:					all clean fclean re
