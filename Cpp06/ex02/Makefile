# Nom de l'exécutable
NAME = identify

# Compilateur
CXX = c++

# Options de compilation
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources et objets
SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
OBJ = $(SRC:.cpp=.o)

# Header global
HEADERS = A.hpp B.hpp C.hpp Base.hpp

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
