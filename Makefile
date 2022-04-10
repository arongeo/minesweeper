INCLUDES = -I ./include
SOURCES = ./src
BUILDS = ./build
BINARIES = ./bin

all:
	g++ ${INCLUDES} ${SOURCES}/main.cpp -o ${BINARIES}/minesweeper

clear:
	rm -rf ${BINARIES}/*
	echo "MINESWEEPER - This is a placeholder file" >> ${BINARIES}/placeholder.txt
