#pragma once
#include "Train.h"


void VS(Train arr[], int x) //���� ���������� � ������� � ������� set 
{
    string pnk;
    string punkt;
    int num;
    int n = 0;
    string �;
    for (int a(0); a < x; ++a)
    {
        arr[a].setNumTrain();    //����� ������
        arr[a].setPT();          //����� ����������
        arr[a].setTime();        //����� �����������
        arr[a].setKP();          //���� �����
        arr[a].setPLC();         //���� �����
        cout << endl;
        getline(cin, �); // ��������� �������� ������ 
    }
    while (true) {
        cout << "---------------------------------------------------" << endl;
        cout << "1-����� �� �������" << endl;
        cout << "2-����� �������, ��������� �� ��������� ������ ���������� � �������������� ����� ��������� ����" << endl;
        cout << "3-����� �������, �������������� �� ��������� ������ ���������� � ����� ���������� ����" << endl;
        cout << "4-�����" << endl;
        cout << "�������� ��������: ";
        cin >> num;
        //���� ������ �������� � �������
        switch (num)
        {
            //����������� ����, ��� ����� ����������� � case
        case 1:
        {
            system("cls");
            cout << "------ ������ ������� --------------------------" << endl;
            cout << "����� ����������\t�����\t�����\t���������� ���� ����" << "\t" << "���������� �������� ����" << endl;
            for (int a = 0; a < x; a++) {
                cout << arr[a].getPT() << "\t\t\t" << arr[a].getNumTrain() << "\t" << arr[a].getTime() << "\t" << arr[a].getKP() << "\t\t\t" << arr[a].getPLC() << endl;  // "/t" - ���������, ���-�� ����� �������� �������
            }
            float time;
            cout << "������� �����: ";
            cin >> time;
            cout << "����� ����������" << "\t" << "����� ������" << "\t" << "����� �����������" << endl;
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
            cout << "------ ������ ������� --------------------------" << endl;
            cout << "����� ����������\t�����\t�����\t���������� ���� ����" << "\t" << "���������� �������� ����" << endl;
            for (int a = 0; a < x; a++) {
                cout << arr[a].getPT() << "\t\t\t" << arr[a].getNumTrain() << "\t" << arr[a].getTime() << "\t" << arr[a].getKP() << "\t\t\t" << arr[a].getPLC() << endl;  // "/t" - ���������, ���-�� ����� �������� �������
            }
            double times;
            int nms = 0;
            cout << "������� ���� �� ������ �����������: ";
            cin >> punkt;
            cout << "����� ������ ������� �� ������ �����������: ";
            cin >> times;
            cout << "����� ������" << "\t" << "����� �����������" << endl;
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
            cout << "------ ������ ������� --------------------------" << endl;
            cout << "����� ����������\t�����\t�����\t���������� ���� ����" << "\t" << "���������� �������� ����" << endl;
            for (int a = 0; a < x; a++) {
                cout << arr[a].getPT() << "\t\t\t" << arr[a].getNumTrain() << "\t" << arr[a].getTime() << "\t" << arr[a].getKP() << "\t\t\t" << arr[a].getPLC() << endl;  // "/t" - ���������, ���-�� ����� �������� �������
            }
            cout << "�������� ���� ����������: ";
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
            cout << "���������� ���� ����: " << sum << endl;
            cout << "���������� �������� ����: " << sum1 << endl;
        }
        break;
        case 4:
        {
            exit(0);
        }
        }
    }
}


