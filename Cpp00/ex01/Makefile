# Nom de l'exécutable
NAME = phonebook

# Compilateur
CXX = c++

# Options de compilation
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources et objets
SRC = contact.cpp PhoneBook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

# Header global
HEADERS = project.hpp contact.hpp phonebook.hpp

# Règle principale
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Compilation des fichiers .cpp en .o
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# Nettoyage complet (exécutable + objets)
fclean: clean
	rm -f $(NAME)

# Recompile tout proprement
re: fclean all

# Éviter que Make interprète des fichiers comme des cibles
.PHONY: all clean fclean re
