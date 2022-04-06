NAME	= artwarserver
SRCS	=	main.cpp

OBJS	= $(SRCS:.cpp=.o)
CXX		= clang++
CPPFLAGS	= -Wall -Werror -Wextra

all: $(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

NOFLAGS:	$(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re:	fclean all