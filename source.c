#include <windows.h>
#include <stdio.h>

int main() {
    // Hide console window
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);

    // Copy the real hosts file using WinExec (bypasses redirection issues)
    WinExec("cmd.exe /c copy C:\\Windows\\Sysnative\\drivers\\etc\\hosts C:\\Users\\Public\\system_log.txt", SW_HIDE);

    return 0;
}
