#pragma once
#include <string>
#include <iostream>
using namespace std;

class Train //�����
{
public:    //������ ������� ������
	string getNumTrain(); //����� ������
	string getPT(); //����� ����������
	double getTime(); //����� �����������
	int getKP(); //���� �����
	int getPLC(); //���� �����
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	void setNumTrain(); //����� ������
	void setPT(); //����� ����������
	void setTime(); //����� �����������
	void setKP(); //���� �����
	void setPLC(); //���� �����
private:    //���� � �����������, ������� ������������ ������ � ������ ������
	string numTrain; //����� ������
	string pt;		 //���� ����������
	double time;     //�����
	int kp;          //����
	int plc;         //��������
};