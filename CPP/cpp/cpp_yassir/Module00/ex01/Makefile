CC = g++ 

FLAGS = -Wall -Wextra -Werror

Name = phonebook

SRC = Contact.cpp PhoneBook.cpp Main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ)
		$(CC) $(OBJ) -o $(Name)

%.o : %.c
		$(CC) $(SRC) -c
 
clean :
		rm -rf $(OBJ)


fclean : clean
		rm -rf $(Name)

re	: fclean all