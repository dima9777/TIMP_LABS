// ConsoleApplication59.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h" 
#include <fstream> 
#include <iostream> 
#include <cstring> 
using namespace std;//������������ ���� ��� �����1 � �� ��2 
int _tmain(int argc, _TCHAR* argv[])
{
	char str1[10][50];
	char str2[10][50];

	ifstream file1("file1.txt"); // ������� ����1 ��� ������ 
	ifstream file2("file2.txt"); // ������� ����2 ��� ������ 


								 //_________������ ����1________________________________ 
	{ int i = 0;
	while (file1) {
		const int max_lenght = 50;
		do {
			file1.getline(str1[i], 50);
			i++;
		} while (!file1.eof());
	}
	file1.close();
	}


	//_________������ ����2_________________________________ 
	{ int i = 0;
	while (file2) {
		const int max_lenght = 50;
		do {
			file2.getline(str2[i], 50);
			i++;
		} while (!file2.eof());
	}
	file2.close();
	}


	//__________������ ������� ���������� �����1_______________________________ 
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			printf_s("%c", str1[j][i]);
		} printf_s("\n");
	} printf_s("\n");


	//___________���������� �����2______________________________ 
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			printf_s("%c", str2[j][i]);
		} printf_s("\n");
	} printf_s("\n");


	//_____________������� �������� � ������ �����1 � ������ 2____________________________ 
	for (int i = 0; i < 3; i++) {
		if ((strcmp(str1[i], str2[i]) > 0) || strcmp(str1[i], str2[i]) < 0) {
			printf_s("file1.txt %d ", i + 1);
			for (int j = 0; j < 3; j++) {
				printf_s("%c", str1[i][j]);
			}printf_s("\n");
		}
	}printf_s("\n");


	//_____________������� �������� � ������ �����2 � ������ 1____________________________ 
	for (int i = 0; i < 3; i++) {
		if ((strcmp(str2[i], str1[i]) > 0) || strcmp(str2[i], str1[i]) < 0) {
			printf_s("file2.txt %d ", i + 1);
			for (int j = 0; j < 3; j++) {
				printf_s("%c", str2[i][j]);
			}printf_s("\n");
		}
	}printf_s("\n");
	//_________________________________________ 
	system("pause");
	return 0;
}