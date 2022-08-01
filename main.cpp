#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	std::cout << "Running" << std::endl;

	//get window
	std::string title = "Tester";
	HWND wnd = FindWindow(0, title.c_str());
	if (wnd == NULL) {
		std::cout << "Could not find window" << std::endl;
		return -1;
	}

	char key = ' ';

	//send jump
	for (int i = 0; i < 5; i++) {
		std::cout << "Jump" << std::endl;
		//sendjump();
		{
			UINT scan = MapVirtualKey(key, 0);
			LPARAM lparam = 0x00000001 | (LPARAM)(scan << 16);
			PostMessage(wnd, WM_KEYDOWN, key, lparam);    // Key down
			Sleep(50);
			PostMessage(wnd, WM_CHAR, (int)key, NULL);
			Sleep(50);
			PostMessage(wnd, WM_KEYUP, key, lparam);
		}

		Sleep(3000);
	}

	return 0;
}

