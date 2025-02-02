#include<windows.h>
#include<stdio.h>

int main() {
    system("cmd.exe /c tasklist > C:\\Users\\Public\\system_log.txt");
    return 0;
}
