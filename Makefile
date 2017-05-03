all: game.cpp
	g++ -std=c++11 -o trinketeers entity.cpp dataloader.cpp game.cpp -lpython2.7
