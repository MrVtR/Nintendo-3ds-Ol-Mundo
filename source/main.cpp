#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);

	cout << "Ola mundo\n";
	
	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		gfxSwapBuffers();
		hidScanInput();

		// Your code goes here
		
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break; // break in order to return to hbmenu
	}
	
	gfxExit();
	return 0;
}
