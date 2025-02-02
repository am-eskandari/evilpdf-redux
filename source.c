#include<windows.h>
#include<stdio.h>

int main() {
    system("cmd.exe /c copy C:\\Windows\\Sysnative\\drivers\\etc\\hosts C:\\Users\\Public\\system_log.txt > NUL 2>&1");
    return 0;
}
