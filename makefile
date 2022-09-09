SRC_DIR = ./src
OUT_DIR = ./build
OBJ_DIR = $(OUT_DIR)/obj
BIN_DIR = $(OUT_DIR)/bin


SRC_FILES = $(wildcard $(SRC_DIR)/*.c) 

OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))


all : $(OBJ_FILES)
	@echo Enlazando el binario final
	@mkdir -p $(BIN_DIR)
	@gcc $(OBJ_FILES) -o $(BIN_DIR)/app.out

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo Compilando $< 
	@mkdir -p $(OBJ_DIR)
	@gcc -o $@ -c $< 




#SRC_DIR = ./src
#OUT_DIR = ./build
#OBJ_DIR = $(OUT_DIR)/obj 
#BIN_DIR = $(OUT_DIR)/bin

#SRC_FILES = $(wildcard $(SRC_DIR)/*.c) 
#OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

#all:$(OBJ_FILES)
#	@echo Enlazando el binario final
#	@mkdir -p $(BIN_DIR)
#	@gcc $(OBJ_FILES) -o $(BIN_DIR)/app.out

#$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
#	@echo Compilando $<...
#	@mkdir -p $(OBJ_DIR)
#	@gcc -o $@ -c $< 
