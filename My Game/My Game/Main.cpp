#include "framework/GameBase.h"
int main(int argc, char *argv[])
{
	GameBase::initSDL(640, 480);
	GameBase *gb = new GameBase();
	gb->setup();
	gb->start();
	delete gb;
	return 0;
}