cc		= c++

SRC	=  main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

fileo	= $(SRC:.cpp=.o)

Name	= Weapon

all : $(Name)

$(Name) : $(fileo)
		$(cc) $(FLAGS) $(fileo) -o $@

%.o	:  %.cpp
		$(cc) $(FLAGS) $(file) -c $<

clean :
		rm -rf $(fileo)

fclean : clean
		rm -rf $(Name)

re	: fclean all
	
	