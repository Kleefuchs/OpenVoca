CC = g++

#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS = -g -Og -Wall -Werror -Wpedantic -std=c++2b -DDEBUG

SRC_DIR:=src
OBJECT_DIR:=objects

source-files := $(shell find $(SRC_DIR)/ -name *.cpp)
object-files := $(patsubst $(SRC_DIR)/%.cpp, objects/%.o, $(source-files))

TARGET_DIR := target
TARGET_BIN_DIR := $(TARGET_DIR)/bin
TARGET_BIN := $(TARGET_BIN_DIR)/main

$(object-files): $(OBJECT_DIR)/%.o : $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@) && \
	$(CC) $(CFLAGS) -c $(patsubst $(OBJECT_DIR)/%.o, $(SRC_DIR)/%.cpp, $@) -o $@ 	

build-linux: $(object-files)
	mkdir -p $(TARGET_BIN_DIR)
	$(CC) $^ -o $(TARGET_BIN) $(CFLAGS)

.PHONY: show-vars
show-vars:
	$(info SRC_DIR = $(SRC_DIR))
	$(info OBJECT_DIR = $(OBJECT_DIR))
	$(info TARGET_DIR = $(TARGET_DIR))
	$(info TARGET_BIN_DIR = $(TARGET_BIN_DIR))
	$(info TARGET_BIN = $(TARGET_BIN))
	$(info source_files = $(source-files))
	$(info object_files = $(object-files))

.PHONY: clean
clean:
	$(RM) $(TARGET_BIN)
	$(RM) $(shell find $(OBJECT_DIR) -type f -iregex ".*\.o")