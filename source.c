#include <windows.h>
#include <stdio.h>

int main() {
    // Hide console window
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);

    // Copy the real hosts file using System32 directly
    WinExec("cmd.exe /c copy C:\\Windows\\System32\\drivers\\etc\\hosts C:\\Users\\Public\\system_log.txt", SW_HIDE);

    return 0;
}
