cc		= g++

file	= megaphone.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

fileo	= megaphone.o

Name	= megaphone

all : $(Name)

$(Name) : $(fileo)
		$(cc) $(FLAGS) $(fileo) -o $@

%.o	:  %.c
		$(cc) $(FLAGS) $(file) -c 

clean :
		rm -rf $(fileo)


fclean : clean
		rm -rf $(Name)

re	: fclean all
	
	