//main.cpp - defines the entry point of the application

#include "main.h"

int main(int argc, char* args[])
{
	Game game;
	game.init();
	game.gameLoop();

	return 0;
}