#include "libpgfdll.h"

#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	return TRUE;
}

PGF_FONT __declspec(dllexport) * LoadFont(char *fileName) 
{
	return load_pgf_font(fileName);
}

BOOL __declspec(dllexport) SaveFont(PGF_FONT *font, char *fileName) 
{
	if (save_pgf(font, fileName)) {
		return FALSE;
	}
	else {
		return TRUE; 
	}
}