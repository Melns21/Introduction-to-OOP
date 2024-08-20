#pragma once
#include "Train.h"


void VS(Train arr[], int x) //ввод информации о поездах с помощью set 
{
    string pnk;
    string punkt;
    int num;
    int n = 0;
    string с;
    for (int a(0); a < x; ++a)
    {
        arr[a].setNumTrain();    //Номер поезда
        arr[a].setPT();          //Пункт назначения
        arr[a].setTime();        //Время отправления
        arr[a].setKP();          //Купе места
        arr[a].setPLC();         //Плац места
        cout << endl;
        getline(cin, с); // обнуление входного потока 
    }
    while (true) {
        cout << "---------------------------------------------------" << endl;
        cout << "1-Поиск по времени" << endl;
        cout << "2-Поиск поездов, следующих до заданного пункта назначения и отправляющихся после заданного часа" << endl;
        cout << "3-Поиск поездов, отправляющихся до заданного пункта назначения и общее количество мест" << endl;
        cout << "4-Выход" << endl;
        cout << "Выберите действие: ";
        cin >> num;
        //меню выбора действий с данными
        switch (num)
        {
            //Обозначения того, что будет происходить в case
        case 1:
        {
            system("cls");
            cout << "------ Список поездов --------------------------" << endl;
            cout << "Пункт назначения\tНомер\tВремя\tКоличество купе мест" << "\t" << "Количество плацкарт мест" << endl;
            for (int a = 0; a < x; a++) {
                cout << arr[a].getPT() << "\t\t\t" << arr[a].getNumTrain() << "\t" << arr[a].getTime() << "\t" << arr[a].getKP() << "\t\t\t" << arr[a].getPLC() << endl;  // "/t" - табуляция, что-то вроде большого пробела
            }
            float time;
            cout << "Введите время: ";
            cin >> time;
            cout << "Пункт назначения" << "\t" << "Номер поезда" << "\t" << "Время отправления" << endl;
            for (int a = 0; a < x; a++)
            {
                if (time <= arr[a].getTime())
                {
                    cout << arr[a].getPT() << "\t\t\t" << arr[a].getNumTrain() << "\t\t\t" << arr[a].getTime() << endl;
                   
                }
            }
        }
        break;
        case 2:
        {
            system("cls");
            cout << "------ Список поездов --------------------------" << endl;
            cout << "Пункт назначения\tНомер\tВремя\tКоличество купе мест" << "\t" << "Количество плацкарт мест" << endl;
            for (int a = 0; a < x; a++) {
                cout << arr[a].getPT() << "\t\t\t" << arr[a].getNumTrain() << "\t" << arr[a].getTime() << "\t" << arr[a].getKP() << "\t\t\t" << arr[a].getPLC() << endl;  // "/t" - табуляция, что-то вроде большого пробела
            }
            double times;
            int nms = 0;
            cout << "Введите куда вы хотите отправиться: ";
            cin >> punkt;
            cout << "После какого времени вы хотите отправиться: ";
            cin >> times;
            cout << "Номер поезда" << "\t" << "Время отправления" << endl;
            for (int a = 0; a < x; a++)
            {
                if (arr[a].getPT() == punkt && times < arr[a].getTime())
                {
                    cout << arr[a].getNumTrain() << "\t\t\t" << arr[a].getTime() << endl;
                }
            }
        }
        break;
        case 3:
        {
            double psp = 0;
            double psp1 = 0;
            double sum = 0;
            double sum1 = 0;
            system("cls");
            cout << "------ Список поездов --------------------------" << endl;
            cout << "Пункт назначения\tНомер\tВремя\tКоличество купе мест" << "\t" << "Количество плацкарт мест" << endl;
            for (int a = 0; a < x; a++) {
                cout << arr[a].getPT() << "\t\t\t" << arr[a].getNumTrain() << "\t" << arr[a].getTime() << "\t" << arr[a].getKP() << "\t\t\t" << arr[a].getPLC() << endl;  // "/t" - табуляция, что-то вроде большого пробела
            }
            cout << "Выберите пунк назначения: ";
            cin >> pnk;
            for (int a = 0; a < x; a++)
            {
                if (arr[a].getPT() == pnk)
                {
                    psp = arr[a].getKP();
                    sum = sum + psp;
                }
                if (arr[a].getPT() == pnk)
                {
                    psp1 = arr[a].getPLC();
                    sum1 = sum1 + psp1;
                }
            }
            cout << "Количество купе мест: " << sum << endl;
            cout << "Количество плацкарт мест: " << sum1 << endl;
        }
        break;
        case 4:
        {
            exit(0);
        }
        }
    }
}


