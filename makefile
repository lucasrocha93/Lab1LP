# Comandos do sistema operacional (Windows).
RM = rm -rf

# Compilador.
CC=g++

# Vari�veis para os subdiret�rios.
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc

# Op��es de compila��o.
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista n�o sejam confundidos com arquivos de mesmo nome.
.PHONY: all clean distclean doxy

# Define o alvo (target) para a compila��o completa.
# Define o alvo geometrica como depend�ncia.
# Ao final da compila��o, remove os arquivos objeto.
all: geometrica

debug: CFLAGS += -g -O0
debug: geometrica

# Alvo (target) para a constru��o do execut�vel geometrica.
# Define o arquivo main.o como depend�ncia.
geometrica: $(OBJ_DIR)/main.o $(OBJ_DIR)/calcfigura.o $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [executavel geometrica criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a constru��o do objeto main.o.
# Define os arquivos main.cpp e calcfigura.o como depend�ncias.
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp $(OBJ_DIR)/calcfigura.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a constru��o do objeto calcfigura.o.
# Define os arquivos calcfigura.cpp, calcfigura.h, area.o, perimetro.o e volume.o como depend�ncias.
$(OBJ_DIR)/calcfigura.o: $(SRC_DIR)/calcfigura.cpp $(INC_DIR)/calcfigura.h $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a constru��o do objeto area.o.
# Define os arquivos area.cpp e area.h como depend�ncias.
$(OBJ_DIR)/area.o: $(SRC_DIR)/area.cpp $(INC_DIR)/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a constru��o do objeto perimetro.o.
# Define os arquivos perimetro.cpp e perimetro.h como depend�ncias.
$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/perimetro.cpp $(INC_DIR)/perimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a constru��o do objeto volume.o.
# Define os arquivos volume.cpp e volume.h como depend�ncias.
$(OBJ_DIR)/volume.o: $(SRC_DIR)/volume.cpp $(INC_DIR)/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a gera��o autom�tica de documenta��o usando o Doxygen.
# Sempre remove a documenta��o anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

# Alvo (target) usado para limpar os arquivos tempor�rios (objeto)
# gerados durante a compila��o, assim como os arquivos bin�rios/execut�veis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*