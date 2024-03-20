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
    printf("Введіть 30 дійсних чисел:\n");
    for (int i = 0; i < 30; i++) {
        printf("Елемент %d: ", i + 1);
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

    printf("\nНайменший елемент: %.2lf\n", min);
    printf("Найбільший елемент: %.2lf\n", max);
    printf("Середнє арифметичне додатніх елементів: %.2lf\n", average_positive);

    swap_halves(arr, 30);

    printf("\nМасив після заміни місцями перших 15 та останніх 15 елементів:\n");
    for (int i = 0; i < 30; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");

    return 0;
}
