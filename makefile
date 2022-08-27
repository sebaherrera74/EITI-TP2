SRC_DIR = ./src
OBJ_DIR = ./build

SRC_FILES = $(wildcard $(SRC_DIR)/*.c) 

OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))


all: $(OBJ_FILES)
	@gcc $(OBJ_FILES) -o $(OBJ_DIR)/app.out

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo Compilando $< 
	@mkdir -p $(OBJ_DIR)
	@gcc -o $@ -c $< 
