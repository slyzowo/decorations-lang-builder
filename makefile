# mingw32-make all

CC = g++
CFLAGS = -Werror -std=c++23

all: lang-build block-build item-build

lang-build: src/Lang_builder.cpp
	$(CC) $(CFLAGS) -o builds/Lang_builder.exe src/Lang_builder.cpp
	./builds/Lang_builder.exe

block-build: src/ModBlock_builder.cpp
	$(CC) $(CFLAGS) -o builds/ModBlock_builder.exe src/ModBlock_builder.cpp
	./builds/ModBlock_builder.exe

item-build: src/ItemGroup_builder.cpp
	$(CC) $(CFLAGS) -o builds/ItemGroup_builder.exe src/ItemGroup_builder.cpp
	./builds/ItemGroup_builder.exe

model-build: src/ModModel_builder.cpp
	$(CC) $(CFLAGS) -o builds/ModModel_builder.exe src/ModModel_builder.cpp
	./builds/ModModel_builder.exe

datagen-build: src/DataGen_builder.cpp
	$(CC) $(CFLAGS) -o builds/DataGen_builder.exe src/DataGen_builder.cpp
	./builds/DataGen_builder.exe
