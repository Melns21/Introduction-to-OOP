#include "Train.h"
//�������� ������� ������
string Train::getNumTrain()    
{
    return numTrain;
}

string Train::getPT() 
{
    return pt;
}

double Train::getTime() 
{
    return time;
}

int Train::getKP() 
{
    return kp;
}

int Train::getPLC()
{
    return plc;
}

void Train::setNumTrain()
{
    cout << "------ ���������� � ������ ----------------------" << endl;
    cout << "������� ����� ������: ";
    getline(cin, numTrain);
}

void Train::setPT()
{
    cout << "�������  ����� ����������: ";
    getline(cin, pt);
}

void Train::setTime()
{
    cout << "������� ����� �����������: ";
    cin >> time;
}

void Train::setKP() 
{
    cout << "������� ���������� ���� ����: ";
    cin >> kp;
}

void Train::setPLC()
{
    cout << "������� ���������� �������� ����: ";
    cin >> plc;
}
