NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = phonebook.cpp contact.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
SILENT = @

all = $(NAME)

$(NAME) : $(OBJS)
	$(SILENT) $(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(SILENT) $(CC) $(FLAGS) -c $< -o $@

clean:
	$(SILENT) rm -f $(OBJS)
fclean: clean
	$(SILENT) rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re



