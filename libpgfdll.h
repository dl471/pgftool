#include <Windows.h>

#include "pgf.h"

PGF_FONT __declspec(dllexport) * LoadFont(char *fileName);
BOOL __declspec(dllexport) SaveFont(PGF_FONT *font, char *fileName);
VOID __declspec(dllexport) FreeFont(PGF_FONT *font);