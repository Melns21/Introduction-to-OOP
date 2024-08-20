#include "Train.h"
//Описание методов класса
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
    cout << "------ Информация о поезде ----------------------" << endl;
    cout << "Введите номер поезда: ";
    getline(cin, numTrain);
}

void Train::setPT()
{
    cout << "Введите  пункт назначения: ";
    getline(cin, pt);
}

void Train::setTime()
{
    cout << "Введите время отправления: ";
    cin >> time;
}

void Train::setKP() 
{
    cout << "Введите количество купе мест: ";
    cin >> kp;
}

void Train::setPLC()
{
    cout << "Введите количество плацкарт мест: ";
    cin >> plc;
}
