NAME	= artwarserver
SRCS	=	main.cpp	\
			./Source/Grid.cpp \
			./Source/Screen.cpp

OBJS	= $(SRCS:.cpp=.o)
CXX		= clang++
CPPFLAGS	= -Wall -Werror -Wextra -I/usr/include/SDL2 

all: $(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME) -lSDL2

NOFLAGS:	$(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re:	fclean all