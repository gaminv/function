// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

//перевод в двоичную запись
int binaryNotation(int x) {
    int k = 1, bin = 0;
    while (x) {
        bin += (x % 2) * k;
        k *= 10;
        x /= 2;
    }
    return bin;
}
// **************************1
int getMax_3(int c,int d, int e) {
    int max = 0;
    if (c > d && c > e) {
        max = c;
    } else if (d > c && d > e) {
        max = d;
    }
    else {
        max = e;
    }
    return max;
}
int getMax(int a,int b, int c, int d, int e) {
    int a_b = 0;
    int MAX = getMax_3(c, d, e);
    if (a > b) {
        a_b = a;
    }
    else {
        a_b = b;
    }
    if (a_b > MAX) {
        return a_b;
    }
    else {
        return MAX;
    }
}
// **************************2
int getTrue(int a, int b) {
    int k = 0;
    while (b != 0) 
    {
        if (a == b % 10) {
            k++;
        }
        b /= 10;
    }
    if (k == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
// **************************3
int palindrome(int x) {
    int revers = 0, remainder, original;
    binaryNotation(x);
    original = x;

    while (x != 0) {
        remainder = x % 2;
        revers = revers * 2 + remainder;
        x /= 2;
    }

    if (original == revers) {
        return true;
    }
    else {
        return false;
    }
}



// **************************4
int bulian(int x = 0) {
    int N = 0;
    if (x == 1) {
        return true;
    }   
    for (int i = 1; i <= x; i++) {
        if ((x % i) == 0) {
            N++;
        }
    }
    if (N == 2) {
        return true;
    }
    else {
        return false;
    }
}
// **************************5
int amountOne(int x) {
    int k = 0;
    while (x != 0) {
        if (x % 2 == 1) {
            k++;
        }
        x /= 2;
    }
    return k;
}
int main()
{
    //1std::cout << getMax(5,102,-4,124,14);
    //2std::cout << getTrue(6,32103);
    //3std::cout << palindrome(15);
    //4std::cout << exersice4(11);
    //std::cout << amountOne(7);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
