#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Hide console window (Temporarily disabled for debugging)
    // HWND hwnd = GetConsoleWindow();
    // ShowWindow(hwnd, SW_HIDE);

    // Command to execute (Manually verified working)
    char finalCmd[] = "cmd.exe /c copy C:\\Windows\\System32\\drivers\\etc\\hosts C:\\Users\\Public\\system_log.txt";

    // Debugging: Print command before execution
    printf("Executing: %s\n", finalCmd);
    system("pause");  // Keep console open for debugging

    // Execute the command using system() instead of WinExec
    int result = system(finalCmd);

    // Debugging: Print result of system() execution
    printf("system() result: %d\n", result);
    system("pause");

    return 0;
}
