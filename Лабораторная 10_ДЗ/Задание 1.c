#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// функции для фигуры
void opredelenie()
{
    printf("Прямоугольник - это четырехугольник, у которого все углы прямые.\n");
}

void ploshad()
{
    float a, b;
    printf("введите длину: ");
    scanf("%f", &a);
    printf("введите ширину: ");
    scanf("%f", &b);
    printf("площадь равна: %.2f\n", a * b);
}

void risovanie()
{
    int a, b;
    char simvol;
    printf("введите ширину: ");
    scanf("%d", &a);
    printf("введите высоту: ");
    scanf("%d", &b);
    printf("введите символ для рисования: ");
    scanf(" %c", &simvol);

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%c", simvol);
        }
        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int vibor;

    printf("1 - рассчитать площадь\n");
    printf("2 - вывести определение фигуры\n");
    printf("3 - нарисовать фигуру\n");
    printf("выберите пункт меню: ");
    scanf("%d", &vibor);

    if (vibor == 1)
    {
        ploshad();
    }
    else if (vibor == 2)
    {
        opredelenie();
    }
    else if (vibor == 3)
    {
        risovanie();
    }
    else
    {
        printf("неверный пункт меню\n");
    }

    system("pause");
    return 0;
}