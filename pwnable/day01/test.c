/* 2025.10.07.(화)*/
// test.c - 간단한 BOF 테스트
#include <stdio.h>
#include <stdlib.h>

void win() {
    printf("You win\n");
    system("/bin/sh");
}

void vuln() {
    char buffer[16];
    printf("Input: ");
    gets(buffer); // 취약한 함수
    printf("You entered: %s\n", buffer);
}

int main() {
    vuln();
    return 0;
}