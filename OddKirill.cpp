#include <iostream>

int main()
{
    setlocale(0, "");
    using std::cin;
    using std::cout;

    cout << "Добро пожаловать в приложение Нечётный Кирилл\n";
    system("pause");
    gl_men://--------------------------------Главное меню
    nz_gl_men://--------------------------------Назад в Главное меню
    system("color F0");
    cout << "ГЛАВНОЕ МЕНЮ\\\n";
    cout << "1 - Функции\n2 - Помощь\n3 - О приложении\n4 - Выход\n";
    cout << "Выберите пункт: ";
    int gl_men;
    cin >> gl_men;
    cout << "\n";
    switch (gl_men)
    {
        case 1: 
        {
            nz_fk://--------------------------------Назад в Функции
            cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\\n";
            cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Операции над Кириллами\n4 - Геометрические Кириллы\n";
            int fk_men;
            cout << "Выберите пункт: ";
            cin >> fk_men;
            cout << "\n";
            switch (fk_men)
            {
                case 1: 
                {
                    goto gl_men;//--------------------------------Функции -- Глав мен
                }
                case 2: 
                {
                    goto nz_gl_men;//--------------------------------Функции -- Глав мен нз
                }
                case 3:
                {
                    nz_op_kr://--------------------------------Назад в Операции над кириллами
                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\\n";
                    cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Чётные Кириллы\n4 - Нечётные Кириллы\n5 - Все Кириллы\n";
                    int opkr;
                    cout << "Выберите пункт: ";
                    cin >> opkr;
                    cout << "\n";
                    switch (opkr)
                    {
                        case 1: 
                        {
                            goto gl_men;//--------------------------------Операции на кириллами -- Глав мен
                        }
                        case 2: 
                        {
                            goto nz_fk;//--------------------------------Операции на кириллами -- Функции нз
                        }
                        case 3: 
                        {
                            nz_chet_kr_://--------------------------------Назад в Чет кириллы
                            cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ЧЁТНЫЕ КИРИЛЛЫ\\\n";
                            cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Сумма чётных Кириллов\n4 - Разность чётных Кириллов\n5 - Произведение чётных Кириллов\n6 - Частное чётных Кириллов\n";
                            int chet_kr;
                            cout << "Выберите пункт: ";
                            cin >> chet_kr;
                            cout << "\n";
                            switch (chet_kr)
                            {
                                case 1:
                                {
                                    goto gl_men;//--------------------------------Чет кириллы -- Глав мен
                                }
                                case 2:
                                {
                                    goto nz_op_kr;//--------------------------------Чет кириллы -- Операции над Кирилами нз
                                }
                                case 3:
                                {
                                    summ_chet_kr_://--------------------------------Сумма четных Кириллов еще раз
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ЧЁТНЫЕ КИРИЛЛЫ\\СУММА ЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "Задайте диапазон с помощью целых положительных Кириллов\n";
                                    int a_summ_chet_kr, b_summ_chet_kr, c_summ_chet_kr = 0;
                                    do
                                    {
                                        cout << "От ";
                                        cin >> a_summ_chet_kr;
                                        cout << "До ";
                                        cin >> b_summ_chet_kr;
                                        if (a_summ_chet_kr < 0 || b_summ_chet_kr < 0)
                                        {
                                            cout << "Кириллы не должны быть отрицательными, повторите попытку!\n";
                                        }
                                        else
                                        {
                                            if (a_summ_chet_kr > b_summ_chet_kr)
                                            {
                                                cout << "Второй введенный Кирилл меньше первого, повторите попытку!\n";
                                            }
                                        }
                                    } while (a_summ_chet_kr > b_summ_chet_kr || a_summ_chet_kr < 0 || b_summ_chet_kr < 0);
                                    cout << "Идет подсчет Кириллов...\n";
                                    if (a_summ_chet_kr % 2 == 0)
                                    {
                                        while (a_summ_chet_kr <= b_summ_chet_kr)
                                        {
                                            if (a_summ_chet_kr >= 11 && a_summ_chet_kr <= 19)
                                            {
                                                cout << a_summ_chet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_summ_chet_kr % 10 == 1)
                                                {
                                                    cout << a_summ_chet_kr << " Кирилл\n";
                                                }
                                                if (a_summ_chet_kr % 10 >= 2 && a_summ_chet_kr % 10 <= 4)
                                                {
                                                    cout << a_summ_chet_kr << " Кирилла\n";
                                                }
                                                if (a_summ_chet_kr % 10 >= 5 && a_summ_chet_kr % 10 <= 9 || a_summ_chet_kr % 10 == 0)
                                                {
                                                    cout << a_summ_chet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_summ_chet_kr += a_summ_chet_kr;
                                            a_summ_chet_kr += 2;
                                        }
                                    }
                                    else
                                    {
                                        a_summ_chet_kr += 1;
                                        while (a_summ_chet_kr <= b_summ_chet_kr)
                                        {
                                            if (a_summ_chet_kr >= 11 && a_summ_chet_kr <= 19)
                                            {
                                                cout << a_summ_chet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_summ_chet_kr % 10 == 1)
                                                {
                                                    cout << a_summ_chet_kr << " Кирилл\n";
                                                }
                                                if (a_summ_chet_kr % 10 >= 2 && a_summ_chet_kr % 10 <= 4)
                                                {
                                                    cout << a_summ_chet_kr << " Кирилла\n";
                                                }
                                                if (a_summ_chet_kr % 10 >= 5 && a_summ_chet_kr % 10 <= 9 || a_summ_chet_kr % 10 == 0)
                                                {
                                                    cout << a_summ_chet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_summ_chet_kr += a_summ_chet_kr;
                                            a_summ_chet_kr += 2;
                                        }
                                    }
                                    cout << "Итоговая сумма чётных Кириллов в выбранном диапазоне: " << c_summ_chet_kr << "\n";
                                    cout << "Если число с минусом, значит вы ввели слишком большой диапазон\n";
                                    cout << "\n";
                                    system("pause");
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ЧЁТНЫЕ КИРИЛЛЫ\\СУММА ЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Ещё раз\n";
                                    int summ_chet_kr;
                                    cout << "Выберите пункт: ";
                                    cin >> summ_chet_kr;
                                    cout << "\n";
                                    switch (summ_chet_kr)
                                    {
                                        case 1:
                                        {
                                            goto gl_men;//--------------------------------Сумма чет кириллов -- Глав мен
                                        }
                                        case 2:
                                        {
                                            goto nz_chet_kr_;//--------------------------------Сумма чёт кириллов -- чёт Кириллы нз
                                        }
                                        case 3:
                                        {
                                            goto summ_chet_kr_;//--------------------------------Сумма чет кириллов -- Сумма чет кириллов Еще раз
                                        }
                                    }
                                }
                                case 4:
                                {
                                    raz_chet_kr_://--------------------------------Разность четных кириллов еще раз
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ЧЁТНЫЕ КИРИЛЛЫ\\РАЗНОСТЬ ЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "Введите Кирилла из которого будет вычитаться диапазон Кириллов: ";
                                    double c_raz_chet_kr;
                                    cin >> c_raz_chet_kr;
                                    cout << "Задайте диапазон с помощью целых положительных Кириллов\n";
                                    int a_raz_chet_kr, b_raz_chet_kr;
                                    do
                                    {
                                        cout << "От ";
                                        cin >> a_raz_chet_kr;
                                        cout << "До ";
                                        cin >> b_raz_chet_kr;
                                        if (a_raz_chet_kr < 0 || b_raz_chet_kr < 0)
                                        {
                                            cout << "Кириллы не должны быть отрицательными, повторите попытку!\n";
                                        }
                                        else
                                        {
                                            if (a_raz_chet_kr > b_raz_chet_kr)
                                            {
                                                cout << "Второй введенный Кирилл меньше первого, повторите попытку!\n";
                                            }
                                        }
                                    } while (a_raz_chet_kr > b_raz_chet_kr || a_raz_chet_kr < 0 || b_raz_chet_kr < 0);
                                    cout << "Идет подсчет Кириллов...\n";
                                    if (a_raz_chet_kr % 2 == 0)
                                    {
                                        while (a_raz_chet_kr <= b_raz_chet_kr)
                                        {
                                            if (a_raz_chet_kr >= 11 && a_raz_chet_kr <= 19)
                                            {
                                                cout << a_raz_chet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_raz_chet_kr % 10 == 1)
                                                {
                                                    cout << a_raz_chet_kr << " Кирилл\n";
                                                }
                                                if (a_raz_chet_kr % 10 >= 2 && a_raz_chet_kr % 10 <= 4)
                                                {
                                                    cout << a_raz_chet_kr << " Кирилла\n";
                                                }
                                                if (a_raz_chet_kr % 10 >= 5 && a_raz_chet_kr % 10 <= 9 || a_raz_chet_kr % 10 == 0)
                                                {
                                                    cout << a_raz_chet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_raz_chet_kr -= a_raz_chet_kr;
                                            a_raz_chet_kr += 2;
                                        }
                                    }
                                    else
                                    {
                                        a_raz_chet_kr += 1;
                                        while (a_raz_chet_kr <= b_raz_chet_kr)
                                        {
                                            if (a_raz_chet_kr >= 11 && a_raz_chet_kr <= 19)
                                            {
                                                cout << a_raz_chet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_raz_chet_kr % 10 == 1)
                                                {
                                                    cout << a_raz_chet_kr << " Кирилл\n";
                                                }
                                                if (a_raz_chet_kr % 10 >= 2 && a_raz_chet_kr % 10 <= 4)
                                                {
                                                    cout << a_raz_chet_kr << " Кирилла\n";
                                                }
                                                if (a_raz_chet_kr % 10 >= 5 && a_raz_chet_kr % 10 <= 9 || a_raz_chet_kr % 10 == 0)
                                                {
                                                    cout << a_raz_chet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_raz_chet_kr -= a_raz_chet_kr;
                                            a_raz_chet_kr += 2;
                                        }
                                    }
                                    cout << "Итоговая разность начального Кирилла и диапазона чётных Кириллов: " << c_raz_chet_kr << "\n";
                                    cout << "\n";
                                    system("pause");
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ЧЁТНЫЕ КИРИЛЛЫ\\РАЗНОСТЬ ЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Ещё раз\n";
                                    int raz_chet_kr;
                                    cout << "Выберите пункт: ";
                                    cin >> raz_chet_kr;
                                    cout << "\n";
                                    switch (raz_chet_kr)
                                    {
                                        case 1:
                                        {
                                            goto gl_men;//--------------------------------Разность чет кириллов -- Глав мен
                                        }
                                        case 2:
                                        {
                                            goto nz_chet_kr_;//--------------------------------Разность чёт кириллов -- чёт Кириллы нз
                                        }
                                        case 3:
                                        {
                                            goto raz_chet_kr_;//--------------------------------Разность чет кириллов -- Разность чет кириллов Еще раз
                                        }
                                    }
                                }
                                case 5:
                                {
                                    proz_chet_kr_://--------------------------------Произведение четных кириллов еще раз
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ЧЁТНЫЕ КИРИЛЛЫ\\ПРОИЗВЕДЕНИЕ ЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "Задайте диапазон с помощью целых положительных Кириллов\n";
                                    int a_proz_chet_kr, b_proz_chet_kr, c_proz_chet_kr = 1;
                                    do
                                    {
                                        cout << "От ";
                                        cin >> a_proz_chet_kr;
                                        cout << "До ";
                                        cin >> b_proz_chet_kr;
                                        if (a_proz_chet_kr < 0 || b_proz_chet_kr < 0)
                                        {
                                            cout << "Кириллы не должны быть отрицательными, повторите попытку!\n";
                                        }
                                        else
                                        {
                                            if (a_proz_chet_kr > b_proz_chet_kr)
                                            {
                                                cout << "Второй введенный Кирилл меньше первого, повторите попытку!\n";
                                            }
                                        }
                                    } while (a_proz_chet_kr > b_proz_chet_kr || a_proz_chet_kr < 0 || b_proz_chet_kr < 0);
                                    cout << "Идет подсчет Кириллов...\n";
                                    if (a_proz_chet_kr % 2 == 0)
                                    {
                                        while (a_proz_chet_kr <= b_proz_chet_kr)
                                        {
                                            if (a_proz_chet_kr >= 11 && a_proz_chet_kr <= 19)
                                            {
                                                cout << a_proz_chet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_proz_chet_kr % 10 == 1)
                                                {
                                                    cout << a_proz_chet_kr << " Кирилл\n";
                                                }
                                                if (a_proz_chet_kr % 10 >= 2 && a_proz_chet_kr % 10 <= 4)
                                                {
                                                    cout << a_proz_chet_kr << " Кирилла\n";
                                                }
                                                if (a_proz_chet_kr % 10 >= 5 && a_proz_chet_kr % 10 <= 9 || a_proz_chet_kr % 10 == 0)
                                                {
                                                    cout << a_proz_chet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_proz_chet_kr *= a_proz_chet_kr;
                                            a_proz_chet_kr += 2;
                                        }
                                    }
                                    else
                                    {
                                        a_proz_chet_kr += 1;
                                        while (a_proz_chet_kr <= b_proz_chet_kr)
                                        {
                                            if (a_proz_chet_kr >= 11 && a_proz_chet_kr <= 19)
                                            {
                                                cout << a_proz_chet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_proz_chet_kr % 10 == 1)
                                                {
                                                    cout << a_proz_chet_kr << " Кирилл\n";
                                                }
                                                if (a_proz_chet_kr % 10 >= 2 && a_proz_chet_kr % 10 <= 4)
                                                {
                                                    cout << a_proz_chet_kr << " Кирилла\n";
                                                }
                                                if (a_proz_chet_kr % 10 >= 5 && a_proz_chet_kr % 10 <= 9 || a_proz_chet_kr % 10 == 0)
                                                {
                                                    cout << a_proz_chet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_proz_chet_kr *= a_proz_chet_kr;
                                            a_proz_chet_kr += 2;
                                        }
                                    }
                                    cout << "Итоговое произведение чётных Кириллов в выбранном диапазоне: " << c_proz_chet_kr << "\n";
                                    cout << "Если число с минусом, значит вы ввели слишком большой диапазон\n";
                                    cout << "\n";
                                    system("pause");
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ЧЁТНЫЕ КИРИЛЛЫ\\ПРОИЗВЕДЕНИЕ ЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Ещё раз\n";
                                    int proz_chet_kr;
                                    cout << "Выберите пункт: ";
                                    cin >> proz_chet_kr;
                                    cout << "\n";
                                    switch (proz_chet_kr)
                                    {
                                        case 1:
                                        {
                                            goto gl_men;//--------------------------------Произведение чет кириллов -- Глав мен
                                        }
                                        case 2:
                                        {
                                            goto nz_chet_kr_;//--------------------------------Произведение чёт кириллов -- чёт Кириллы нз
                                        }
                                        case 3:
                                        {
                                            goto proz_chet_kr_;//--------------------------------Произведение чет кириллов -- Произведение чет кириллов Еще раз
                                        }
                                    }
                                }
                                case 6:
                                {
                                    chast_chet_kr_://--------------------------------Частное четных кирилллов еще раз
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ЧЁТНЫЕ КИРИЛЛЫ\\ЧАСТНОЕ ЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "Введите Кирилла на которого будет делиться диапазон Кириллов: ";
                                    long double c_chast_chet_kr;
                                    cin >> c_chast_chet_kr;
                                    cout << "Задайте диапазон с помощью целых положительных Кириллов\n";
                                    int a_chast_chet_kr, b_chast_chet_kr;
                                    do
                                    {
                                        cout << "От ";
                                        cin >> a_chast_chet_kr;
                                        cout << "До ";
                                        cin >> b_chast_chet_kr;
                                        if (a_chast_chet_kr < 0 || b_chast_chet_kr < 0)
                                        {
                                            cout << "Кириллы не должны быть отрицательными, повторите попытку!\n";
                                        }
                                        else
                                        {
                                            if (a_chast_chet_kr > b_chast_chet_kr)
                                            {
                                                cout << "Второй введенный Кирилл меньше первого, повторите попытку!\n";
                                            }
                                        }
                                    } while (a_chast_chet_kr > b_chast_chet_kr || a_chast_chet_kr < 0 || b_chast_chet_kr < 0);
                                    cout << "Идет подсчет Кириллов...\n";
                                    if (a_chast_chet_kr % 2 == 0)
                                    {
                                        while (a_chast_chet_kr <= b_chast_chet_kr)
                                        {
                                            if (a_chast_chet_kr >= 11 && a_chast_chet_kr <= 19)
                                            {
                                                cout << a_chast_chet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_chast_chet_kr % 10 == 1)
                                                {
                                                    cout << a_chast_chet_kr << " Кирилл\n";
                                                }
                                                if (a_chast_chet_kr % 10 >= 2 && a_chast_chet_kr % 10 <= 4)
                                                {
                                                    cout << a_chast_chet_kr << " Кирилла\n";
                                                }
                                                if (a_chast_chet_kr % 10 >= 5 && a_chast_chet_kr % 10 <= 9 || a_chast_chet_kr % 10 == 0)
                                                {
                                                    cout << a_chast_chet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_chast_chet_kr /= a_chast_chet_kr;
                                            a_chast_chet_kr += 2;
                                        }
                                    }
                                    else
                                    {
                                        a_chast_chet_kr += 1;
                                        while (a_chast_chet_kr <= b_chast_chet_kr)
                                        {
                                            if (a_chast_chet_kr >= 11 && a_chast_chet_kr <= 19)
                                            {
                                                cout << a_chast_chet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_chast_chet_kr % 10 == 1)
                                                {
                                                    cout << a_chast_chet_kr << " Кирилл\n";
                                                }
                                                if (a_chast_chet_kr % 10 >= 2 && a_chast_chet_kr % 10 <= 4)
                                                {
                                                    cout << a_chast_chet_kr << " Кирилла\n";
                                                }
                                                if (a_chast_chet_kr % 10 >= 5 && a_chast_chet_kr % 10 <= 9 || a_chast_chet_kr % 10 == 0)
                                                {
                                                    cout << a_chast_chet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_chast_chet_kr /= a_chast_chet_kr;
                                            a_chast_chet_kr += 2;
                                        }
                                    }
                                    cout << "Итоговое частное начального Кирилла и диапазона чётных Кириллов: " << c_chast_chet_kr << "\n";
                                    cout << "Если вывело 0, значит вы ввели сликом большой диапазон\n";
                                    cout << "\n";
                                    system("pause");
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ЧЁТНЫЕ КИРИЛЛЫ\\ЧАСТНОЕ ЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Ещё раз\n";
                                    int chast_chet_kr;
                                    cout << "Выберите пункт: ";
                                    cin >> chast_chet_kr;
                                    cout << "\n";
                                    switch (chast_chet_kr)
                                    {
                                        case 1:
                                        {
                                            goto gl_men;//--------------------------------Частное чет кириллов -- Глав мен
                                        }
                                        case 2:
                                        {
                                            goto nz_chet_kr_;//--------------------------------Частное чёт кириллов -- чёт Кириллы нз
                                        }
                                        case 3:
                                        {
                                            goto chast_chet_kr_;//--------------------------------Частное чет кириллов -- Частное чет кириллов Еще раз
                                        }
                                    }
                                }
                            }
                        }
                        case 4: 
                        {
                            nz_nechet_kr_: //--------------------------------Назад в Нечётные кириллы
                            cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\НЕЧЁТНЫЕ КИРИЛЛЫ\\\n";
                            cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Сумма нечётных Кириллов\n4 - Разность нечётных Кириллов\n5 - Произведение нечётных Кириллов\n6 - Частное нечётных Кириллов\n";
                            int nechet_kr;
                            cout << "Выберите пункт: ";
                            cin >> nechet_kr;
                            cout << "\n";
                            switch (nechet_kr)
                            {
                                case 1:
                                {
                                    goto gl_men;//--------------------------------Нечётные кириллы -- Глав мен
                                }
                                case 2:
                                {
                                    goto nz_op_kr;//--------------------------------Нечётные кириллы -- Операции над Кириллами нз
                                }
                                case 3:
                                {
                                    summ_nechet_kr_://--------------------------------Еще раз в Сумма нечет кириллов
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\НЕЧЁТНЫЕ КИРИЛЛЫ\\СУММА НЕЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "Задайте диапазон с помощью целых положительных Кириллов\n";
                                    int a_summ_nechet_kr, b_summ_nechet_kr;
                                    long long int c_summ_nechet_kr = 0;
                                    do
                                    {
                                        cout << "От ";
                                        cin >> a_summ_nechet_kr;
                                        cout << "До ";
                                        cin >> b_summ_nechet_kr;
                                        if (a_summ_nechet_kr < 0 || b_summ_nechet_kr < 0)
                                        {
                                            cout << "Кириллы не должны быть отрицательными, повторите попытку!\n";
                                        }
                                        else
                                        {
                                            if (a_summ_nechet_kr > b_summ_nechet_kr)
                                            {
                                                cout << "Второй введенный Кирилл меньше первого, повторите попытку!\n";
                                            }
                                        }
                                    } while (a_summ_nechet_kr > b_summ_nechet_kr || a_summ_nechet_kr < 0 || b_summ_nechet_kr < 0);
                                    cout << "Идет подсчет нечётных Кириллов...\n";
                                    if (a_summ_nechet_kr % 2 == 1)
                                    {
                                        while (a_summ_nechet_kr <= b_summ_nechet_kr)
                                        {
                                            if (a_summ_nechet_kr >= 11 && a_summ_nechet_kr <= 19)
                                            {
                                                cout << a_summ_nechet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_summ_nechet_kr % 10 == 1)
                                                {
                                                    cout << a_summ_nechet_kr << " Кирилл\n";
                                                }
                                                if (a_summ_nechet_kr % 10 >= 2 && a_summ_nechet_kr % 10 <= 4)
                                                {
                                                    cout << a_summ_nechet_kr << " Кирилла\n";
                                                }
                                                if (a_summ_nechet_kr % 10 >= 5 && a_summ_nechet_kr % 10 <= 9 || a_summ_nechet_kr % 10 == 0)
                                                {
                                                    cout << a_summ_nechet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_summ_nechet_kr += a_summ_nechet_kr;
                                            a_summ_nechet_kr += 2;
                                        }
                                    }
                                    else
                                    {
                                        a_summ_nechet_kr += 1;
                                        while (a_summ_nechet_kr <= b_summ_nechet_kr)
                                        {
                                            if (a_summ_nechet_kr >= 11 && a_summ_nechet_kr <= 19)
                                            {
                                                cout << a_summ_nechet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_summ_nechet_kr % 10 == 1)
                                                {
                                                    cout << a_summ_nechet_kr << " Кирилл\n";
                                                }
                                                if (a_summ_nechet_kr % 10 >= 2 && a_summ_nechet_kr % 10 <= 4)
                                                {
                                                    cout << a_summ_nechet_kr << " Кирилла\n";
                                                }
                                                if (a_summ_nechet_kr % 10 >= 5 && a_summ_nechet_kr % 10 <= 9 || a_summ_nechet_kr % 10 == 0)
                                                {
                                                    cout << a_summ_nechet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_summ_nechet_kr += a_summ_nechet_kr;
                                            a_summ_nechet_kr += 2;
                                        }
                                    }
                                    cout << "Итоговая сумма нечётных Кириллов в выбранном диапазоне: " << c_summ_nechet_kr << "\n";
                                    cout << "Если число с минусом, значит вы ввели слишком большой диапазон\n";
                                    cout << "\n";
                                    system("pause");
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\НЕЧЁТНЫЕ КИРИЛЛЫ\\СУММА НЕЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Ещё раз\n";
                                    int summ_nechet_kr;
                                    cout << "Выберите пункт: ";
                                    cin >> summ_nechet_kr;
                                    cout << "\n";
                                    switch (summ_nechet_kr)
                                    {
                                        case 1:
                                        {
                                            goto gl_men;//--------------------------------Сумма нечет кириллов -- Глав мен
                                        }
                                        case 2:
                                        {
                                            goto nz_nechet_kr_;//--------------------------------Сумма нечёт кириллов -- Нечёт Кириллы нз
                                        } 
                                        case 3:
                                        {
                                            goto summ_nechet_kr_;//--------------------------------Сумма нечет кириллов -- Сумма нечет кириллов Еще раз
                                        }
                                    }
                                }
                                case 4:
                                {
                                    raz_nechet_kr_://--------------------------------Еще раз в Разность нечет кириллов
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\НЕЧЁТНЫЕ КИРИЛЛЫ\\РАЗНОСТЬ НЕЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "Введите Кирилла из которого будет вычитаться диапазон Кириллов: ";
                                    double c_raz_nechet_kr;
                                    cin >> c_raz_nechet_kr;
                                    cout << "Задайте диапазон с помощью целых положительных Кириллов\n";
                                    int a_raz_nechet_kr, b_raz_nechet_kr;
                                    do
                                    {
                                        cout << "От ";
                                        cin >> a_raz_nechet_kr;
                                        cout << "До ";
                                        cin >> b_raz_nechet_kr;
                                        if (a_raz_nechet_kr < 0 || b_raz_nechet_kr < 0)
                                        {
                                            cout << "Кириллы не должны быть отрицательными, повторите попытку!\n";
                                        }
                                        else
                                        {
                                            if (a_raz_nechet_kr > b_raz_nechet_kr)
                                            {
                                                cout << "Второй введенный Кирилл меньше первого, повторите попытку!\n";
                                            }
                                        }
                                    } while (a_raz_nechet_kr > b_raz_nechet_kr || a_raz_nechet_kr < 0 || b_raz_nechet_kr < 0);
                                    cout << "Идет подсчет Кириллов...\n";
                                    if (a_raz_nechet_kr % 2 == 1)
                                    {
                                        while (a_raz_nechet_kr <= b_raz_nechet_kr)
                                        {
                                            if (a_raz_nechet_kr >= 11 && a_raz_nechet_kr <= 19)
                                            {
                                                cout << a_raz_nechet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_raz_nechet_kr % 10 == 1)
                                                {
                                                    cout << a_raz_nechet_kr << " Кирилл\n";
                                                }
                                                if (a_raz_nechet_kr % 10 >= 2 && a_raz_nechet_kr % 10 <= 4)
                                                {
                                                    cout << a_raz_nechet_kr << " Кирилла\n";
                                                }
                                                if (a_raz_nechet_kr % 10 >= 5 && a_raz_nechet_kr % 10 <= 9 || a_raz_nechet_kr % 10 == 0)
                                                {
                                                    cout << a_raz_nechet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_raz_nechet_kr -= a_raz_nechet_kr;
                                            a_raz_nechet_kr += 2;
                                        }
                                    }
                                    else
                                    {
                                        a_raz_nechet_kr += 1;
                                        while (a_raz_nechet_kr <= b_raz_nechet_kr)
                                        {
                                            if (a_raz_nechet_kr >= 11 && a_raz_nechet_kr <= 19)
                                            {
                                                cout << a_raz_nechet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_raz_nechet_kr % 10 == 1)
                                                {
                                                    cout << a_raz_nechet_kr << " Кирилл\n";
                                                }
                                                if (a_raz_nechet_kr % 10 >= 2 && a_raz_nechet_kr % 10 <= 4)
                                                {
                                                    cout << a_raz_nechet_kr << " Кирилла\n";
                                                }
                                                if (a_raz_nechet_kr % 10 >= 5 && a_raz_nechet_kr % 10 <= 9 || a_raz_nechet_kr % 10 == 0)
                                                {
                                                    cout << a_raz_nechet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_raz_nechet_kr -= a_raz_nechet_kr;
                                            a_raz_nechet_kr += 2;
                                        }
                                    }
                                    cout << "Итоговая разность начального Кирилла и диапазона нечетных Кириллов: " << c_raz_nechet_kr << "\n";
                                    cout << "\n";
                                    system("pause");
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\НЕЧЁТНЫЕ КИРИЛЛЫ\\РАЗНОСТЬ НЕЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Ещё раз\n";
                                    int raz_nechet_kr;
                                    cout << "Выберите пункт: ";
                                    cin >> raz_nechet_kr;
                                    cout << "\n";
                                    switch (raz_nechet_kr)
                                    {
                                        case 1:
                                        {
                                            goto gl_men;//--------------------------------Разность нечет кирилов -- Глав мен
                                        }
                                        case 2:
                                        {
                                            goto nz_nechet_kr_;//--------------------------------Разность нечет кирилов -- Нечетные кириллы нз
                                        }
                                        case 3:
                                        {
                                            goto raz_nechet_kr_;//--------------------------------Разность нечет кириллов -- Разность нечет кириллов Еще раз
                                        }
                                    }
                                }
                                case 5:
                                {
                                    prozv_nechet_kr_://--------------------------------Еще раз в Произведение нечет кириллов
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\НЕЧЁТНЫЕ КИРИЛЛЫ\\ПРОИЗВЕДЕНИЕ НЕЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "Задайте диапазон с помощью целых положительных Кириллов\n";
                                    int a_prozv_nechet_kr, b_prozv_nechet_kr;
                                    long long int c_prozv_nechet_kr = 1;
                                    do
                                    {
                                        cout << "От ";
                                        cin >> a_prozv_nechet_kr;
                                        cout << "До ";
                                        cin >> b_prozv_nechet_kr;
                                        if (a_prozv_nechet_kr < 0 || b_prozv_nechet_kr < 0)
                                        {
                                            cout << "Кириллы не должны быть отрицательными, повторите попытку!\n";
                                        }
                                        else
                                        {
                                            if (a_prozv_nechet_kr > b_prozv_nechet_kr)
                                            {
                                                cout << "Второй введенный Кирилл меньше первого, повторите попытку!\n";
                                            }
                                        }
                                    } while (a_prozv_nechet_kr > b_prozv_nechet_kr || a_prozv_nechet_kr < 0 || b_prozv_nechet_kr < 0);
                                    cout << "Идет подсчет Кириллов...\n";
                                    if (a_prozv_nechet_kr % 2 == 1)
                                    {
                                        while (a_prozv_nechet_kr <= b_prozv_nechet_kr)
                                        {
                                            if (a_prozv_nechet_kr >= 11 && a_prozv_nechet_kr <= 19)
                                            {
                                                cout << a_prozv_nechet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_prozv_nechet_kr % 10 == 1)
                                                {
                                                    cout << a_prozv_nechet_kr << " Кирилл\n";
                                                }
                                                if (a_prozv_nechet_kr % 10 >= 2 && a_prozv_nechet_kr % 10 <= 4)
                                                {
                                                    cout << a_prozv_nechet_kr << " Кирилла\n";
                                                }
                                                if (a_prozv_nechet_kr % 10 >= 5 && a_prozv_nechet_kr % 10 <= 9 || a_prozv_nechet_kr % 10 == 0)
                                                {
                                                    cout << a_prozv_nechet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_prozv_nechet_kr *= a_prozv_nechet_kr;
                                            a_prozv_nechet_kr += 2;
                                        }
                                    }
                                    else
                                    {
                                        a_prozv_nechet_kr += 1;
                                        while (a_prozv_nechet_kr <= b_prozv_nechet_kr)
                                        {
                                            if (a_prozv_nechet_kr >= 11 && a_prozv_nechet_kr <= 19)
                                            {
                                                cout << a_prozv_nechet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_prozv_nechet_kr % 10 == 1)
                                                {
                                                    cout << a_prozv_nechet_kr << " Кирилл\n";
                                                }
                                                if (a_prozv_nechet_kr % 10 >= 2 && a_prozv_nechet_kr % 10 <= 4)
                                                {
                                                    cout << a_prozv_nechet_kr << " Кирилла\n";
                                                }
                                                if (a_prozv_nechet_kr % 10 >= 5 && a_prozv_nechet_kr % 10 <= 9 || a_prozv_nechet_kr % 10 == 0)
                                                {
                                                    cout << a_prozv_nechet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_prozv_nechet_kr *= a_prozv_nechet_kr;
                                            a_prozv_nechet_kr += 2;
                                        }
                                    }
                                    cout << "Итоговое произведение нечетных Кириллов в выбранном диапазоне: " << c_prozv_nechet_kr << "\n";
                                    cout << "Если число с минусом, значит вы ввели слишком большой диапазон\n";
                                    cout << "\n";
                                    system("pause");
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\НЕЧЁТНЫЕ КИРИЛЛЫ\\ПРОИЗВЕДЕНИЕ НЕЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Ещё раз\n";
                                    int prozv_nechet_kr;
                                    cout << "Выберите пункт: ";
                                    cin >> prozv_nechet_kr;
                                    cout << "\n";
                                    switch (prozv_nechet_kr)
                                    {
                                        case 1:
                                        {
                                            goto gl_men;//--------------------------------Произведение нечет кирилов -- Глав мен
                                        }
                                        case 2:
                                        {
                                            goto nz_nechet_kr_;//--------------------------------Произведение нечет кирилов -- Нечетные кириллы нз
                                        }
                                        case 3:
                                        {
                                            goto prozv_nechet_kr_;//--------------------------------Произведение нечет кириллов -- Произведение нечет кириллов Еще раз
                                        }
                                    }
                                }
                                case 6:
                                {
                                chast_nechet_kr_: //--------------------------------Частное нечетных кириллов еще раз
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\НЕЧЁТНЫЕ КИРИЛЛЫ\\ЧАСТНОЕ НЕЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "Введите Кирилла на которого будет делиться диапазон Кириллов: ";
                                    long double c_chast_nechet_kr;
                                    cin >> c_chast_nechet_kr;
                                    cout << "Задайте диапазон с помощью целых положительных Кириллов\n";
                                    int a_chast_nechet_kr, b_chast_nechet_kr;
                                    do
                                    {
                                        cout << "От ";
                                        cin >> a_chast_nechet_kr;
                                        cout << "До ";
                                        cin >> b_chast_nechet_kr;
                                        if (a_chast_nechet_kr < 0 || b_chast_nechet_kr < 0)
                                        {
                                            cout << "Кириллы не должны быть отрицательными, повторите попытку!\n";
                                        }
                                        else
                                        {
                                            if (a_chast_nechet_kr > b_chast_nechet_kr)
                                            {
                                                cout << "Второй введенный Кирилл меньше первого, повторите попытку!\n";
                                            }
                                        }
                                    } while (a_chast_nechet_kr > b_chast_nechet_kr || a_chast_nechet_kr < 0 || b_chast_nechet_kr < 0);
                                    cout << "Идет подсчет Кириллов...\n";
                                    if (a_chast_nechet_kr % 2 == 1)
                                    {
                                        while (a_chast_nechet_kr <= b_chast_nechet_kr)
                                        {
                                            if (a_chast_nechet_kr >= 11 && a_chast_nechet_kr <= 19)
                                            {
                                                cout << a_chast_nechet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_chast_nechet_kr % 10 == 1)
                                                {
                                                    cout << a_chast_nechet_kr << " Кирилл\n";
                                                }
                                                if (a_chast_nechet_kr % 10 >= 2 && a_chast_nechet_kr % 10 <= 4)
                                                {
                                                    cout << a_chast_nechet_kr << " Кирилла\n";
                                                }
                                                if (a_chast_nechet_kr % 10 >= 5 && a_chast_nechet_kr % 10 <= 9 || a_chast_nechet_kr % 10 == 0)
                                                {
                                                    cout << a_chast_nechet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_chast_nechet_kr /= a_chast_nechet_kr;
                                            a_chast_nechet_kr += 2;
                                        }
                                    }
                                    else
                                    {
                                        a_chast_nechet_kr += 1;
                                        while (a_chast_nechet_kr <= b_chast_nechet_kr)
                                        {
                                            if (a_chast_nechet_kr >= 11 && a_chast_nechet_kr <= 19)
                                            {
                                                cout << a_chast_nechet_kr << " Кириллов\n";
                                            }
                                            else
                                            {
                                                if (a_chast_nechet_kr % 10 == 1)
                                                {
                                                    cout << a_chast_nechet_kr << " Кирилл\n";
                                                }
                                                if (a_chast_nechet_kr % 10 >= 2 && a_chast_nechet_kr % 10 <= 4)
                                                {
                                                    cout << a_chast_nechet_kr << " Кирилла\n";
                                                }
                                                if (a_chast_nechet_kr % 10 >= 5 && a_chast_nechet_kr % 10 <= 9 || a_chast_nechet_kr % 10 == 0)
                                                {
                                                    cout << a_chast_nechet_kr << " Кириллов\n";
                                                }
                                            }
                                            c_chast_nechet_kr /= a_chast_nechet_kr;
                                            a_chast_nechet_kr += 2;
                                        }
                                    }
                                    cout << "Итоговое частное начального Кирилла и диапазона нечетных Кириллов: " << c_chast_nechet_kr << "\n";
                                    cout << "Если вывело 0, значит вы ввели сликом большой диапазон\n";
                                    cout << "\n";
                                    system("pause");
                                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\НЕЧЁТНЫЕ КИРИЛЛЫ\\ЧАСТНОЕ НЕЧЁТНЫХ КИРИЛЛОВ\\\n";
                                    cout << "1 - Вернуться в главное меню\n2 - Назад\n3 - Ещё раз";
                                    int chast_nechet_kr;
                                    cout << "Выберите пункт: ";
                                    cin >> chast_nechet_kr;
                                    cout << "\n";
                                    switch (chast_nechet_kr)
                                    {
                                        case 1:
                                        {
                                            goto gl_men;//--------------------------------Частное нечет кирилов -- Глав мен
                                        }
                                        case 2:
                                        {
                                            goto nz_op_kr;//--------------------------------Частное нечет кирилов -- Нечетные кириллы нз
                                        }
                                        case 3:
                                        {
                                            goto chast_nechet_kr_;//--------------------------------Частное нечет кириллов -- Частное нечет кириллов Еще раз
                                        }
                                    }
                                }
                            }
                        }
                        case 5:
                        {
                            cout << "Упс... Пока что здесь пусто, ждите новых обновлений :)\n";
                            cout << "\n";
                            system("pause");
                            cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ОПЕРАЦИИ НАД КИРИЛЛАМИ\\ВСЕ КИРИЛЛЫ\\\n";
                            cout << "1 - Вернуться в главное меню\n2 - Назад\n";
                            int vse_kr;
                            cout << "Выберите пункт: ";
                            cin >> vse_kr;
                            cout << "\n";
                            switch (vse_kr)
                            {
                                case 1:
                                {
                                    goto gl_men;//--------------------------------Все кириллы -- Глав мен
                                }
                                case 2:
                                {
                                    goto nz_op_kr;//--------------------------------Все кириллы -- Операции над кириллами
                                }
                            }
                        }
                    } 
                }
                case 4:
                {
                    cout << "Упс... Пока что здесь пусто, ждите новых обновлений :)\n";
                    cout << "\n";
                    system("pause");
                    cout << "ГЛАВНОЕ МЕНЮ\\ФУНКЦИИ\\ГЕОМЕТРИЧЕСКИЕ КИРИЛЛЫ\\\n";
                    cout << "1 - Вернуться в главное меню\n2 - Назад\n";
                    int geo_kr;
                    cout << "Выберите пункт: ";
                    cin >> geo_kr;
                    cout << "\n";
                    switch (geo_kr)
                    {
                    case 1:
                        {
                            goto gl_men;//--------------------------------Гео кириллы -- Глав мен
                        }
                        case 2:
                        {
                            goto nz_fk;//--------------------------------Гео кириллы -- Функции
                        }
                    }
                }
            }
        }
        case 2: 
        {
            cout << "Упс... Пока что здесь пусто, ждите новых обновлений :)\n";
            cout << "\n";
            system("pause");
            cout << "ГЛАВНОЕ МЕНЮ\\ПОМОЩЬ\\\n";
            cout << "1 - Вернуться в главное меню\n2 - Назад\n";
            int pomo;
            cout << "Выберите пункт: ";
            cin >> pomo;
            cout << "\n";
            switch (pomo)
            {
                case 1:
                {
                    goto gl_men;//--------------------------------Помощь -- Глав мен
                }
                case 2:
                {
                    goto nz_gl_men;//--------------------------------Помощь -- Глав мен нз
                }
            }
        }
        case 3: 
        {
            cout << "ГЛАВНОЕ МЕНЮ\\О ПРИЛОЖЕНИИ\\\n";
            cout << "Product: Нечётный Кирилл\n";
            cout << "Version: alpha 1.1.2\n";
            cout << "Last update: 1.11.2021\n";
            cout << "RamFate Corporation\n";
            cout << "Все права не защищены.\n";
            cout << "Нечётный Кирилл - это многофункциональное консольное приложение, расчитаное на пользователя которому нехер делать, в нем вы найдете кучу бесполезных функций, а само приложение делалось на коленке, приятного использования :)\n";
            cout << "\n";
            system("pause");
            cout << "ГЛАВНОЕ МЕНЮ\\О ПРИЛОЖЕНИИ\\\n";
            cout << "1 - Вернуться в главное меню\n2 - Назад\n";
            int o_pr;
            cout << "Выберите пункт: ";
            cin >> o_pr;
            cout << "\n";
            switch (o_pr)
            {
                case 1: 
                {
                    goto gl_men;//--------------------------------О приложении -- Глав мен
                }
                case 2:
                {
                    goto nz_gl_men;//--------------------------------О приложении -- Глав мен нз
                }
            }
        }
        case 4:
        {
            return 0;
        }
    }
}
