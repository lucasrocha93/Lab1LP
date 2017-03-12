# Comandos do sistema operacional (Windows).
RM = cmd //C del

# Compilador.
CC=g++

# Variáveis para os subdiretórios.
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

# Opções de compilação.
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista não sejam confundidos com arquivos de mesmo nome.
.PHONY: all clean distclean doxy

# Define o alvo (target) para a compilação completa.
# Define o alvo geometrica como dependência.
# Ao final da compilação, remove os arquivos objeto.
all: geometrica

debug: CFLAGS += -g -O0
debug: geometrica

# Alvo (target) para a construção do executável geometrica.
# Define o arquivo main.o como dependência.
geometrica: $(OBJ_DIR)/main.o $(OBJ_DIR)/calcfigura.o $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [executável geometrica criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construção do objeto main.o.
# Define os arquivos main.cpp e calcfigura.o como dependências.
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp $(OBJ_DIR)/calcfigura.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construção do objeto calcfigura.o.
# Define os arquivos calcfigura.cpp, calcfigura.h, area.o, perimetro.o e volume.o como dependências.
$(OBJ_DIR)/calcfigura.o: $(SRC_DIR)/calcfigura.cpp $(INC_DIR)/calcfigura.h $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construção do objeto area.o.
# Define os arquivos area.cpp e area.h como dependências.
$(OBJ_DIR)/area.o: $(SRC_DIR)/area.cpp $(INC_DIR)/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construção do objeto perimetro.o.
# Define os arquivos perimetro.cpp e perimetro.h como dependências.
$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/perimetro.cpp $(INC_DIR)/perimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construção do objeto volume.o.
# Define os arquivos volume.cpp e volume.h como dependências.
$(OBJ_DIR)/volume.o: $(SRC_DIR)/volume.cpp $(INC_DIR)/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a geração automática de documentação usando o Doxygen.
# Sempre remove a documentação anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

# Alvo (target) usado para limpar os arquivos temporários (objeto)
# gerados durante a compilação, assim como os arquivos binários/executáveis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*