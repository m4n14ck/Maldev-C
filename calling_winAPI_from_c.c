#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine, int nCmdShow) {
    MessageBoxA(
        NULL,
        "Sigue al conejo blanco....",
        "Lynk4",
        MB_OK | MB_ICONINFORMATION
    );
    return 0;
}

