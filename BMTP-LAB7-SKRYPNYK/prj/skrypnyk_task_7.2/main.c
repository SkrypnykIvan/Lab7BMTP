#include <stdio.h>
#include <locale.h>

void swap_halves(double arr[], int length) {
    for (int i = 0; i < length / 2; i++) {
        double temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}

int main() {
    setlocale(LC_CTYPE, "ukr");

    double arr[30];
    printf("������ 30 ������ �����:\n");
    for (int i = 0; i < 30; i++) {
        printf("������� %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    double min = arr[0];
    double max = arr[0];
    double sum_positive = 0;
    int count_positive = 0;

    for (int i = 0; i < 30; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] > 0) {
            sum_positive += arr[i];
            count_positive++;
        }
    }

    double average_positive = count_positive > 0 ? sum_positive / count_positive : 0;

    printf("\n��������� �������: %.2lf\n", min);
    printf("��������� �������: %.2lf\n", max);
    printf("������ ����������� ������� ��������: %.2lf\n", average_positive);

    swap_halves(arr, 30);

    printf("\n����� ���� ����� ������ ������ 15 �� ������� 15 ��������:\n");
    for (int i = 0; i < 30; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");

    return 0;
}
