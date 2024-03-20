#include <stdio.h>
#include <string.h>
#include <windows.h>

int count_ko(const char *word) {
    int count = 0;
    int length = strlen(word);
    for (int i = 0; i < length - 1; i++) {
        if (word[i] == '�' && word[i + 1] == '�') {
            count++;
        }
    }
    return count;
}

void swap_letters(char *word) {
    int length = strlen(word);
    for (int i = 0; i < length - 1; i += 2) {
        char temp = word[i];
        word[i] = word[i + 1];
        word[i + 1] = temp;
    }
}

int main() {
    SetConsoleOutputCP(1251); // ������������ ������ ������� ��� ������ ���������� �������

    char word[100];
    printf("������ �����: ");
    scanf("%s", word);

    if (word[strlen(word) - 1] == '!') {
        int ko_count = count_ko(word);
        printf("ʳ������ ������ '��' � ��������� ����: %d\n", ko_count);
    } else {
        swap_letters(word);
        printf("������� ����� �����: %s\n", word);
    }

    return 0;
}
