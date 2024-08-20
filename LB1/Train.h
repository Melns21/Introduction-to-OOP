#pragma once
#include <string>
#include <iostream>
using namespace std;

class Train //Класс
{
public:    //список методов класса
	string getNumTrain(); //Номер поезда
	string getPT(); //Пункт назначения
	double getTime(); //Время отправления
	int getKP(); //Купе места
	int getPLC(); //Плац места
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	void setNumTrain(); //Номер поезда
	void setPT(); //Пункт назначения
	void setTime(); //Время отправления
	void setKP(); //Купе места
	void setPLC(); //Плац места
private:    //Поле с переменными, которые используются только в данном классе
	string numTrain; //Номер поезда
	string pt;		 //Пунк назначения
	double time;     //Время
	int kp;          //Купе
	int plc;         //Плацкарт
};