#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Hide console window for stealth execution
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);

    // Command to execute (copy system file)
    char finalCmd[] = "cmd.exe /c copy C:\\Windows\\System32\\drivers\\etc\\hosts C:\\Users\\Public\\system_log.txt";

    // Execute the command
    system(finalCmd);

    return 0;
}
