#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	const int ROW = 4, COL = 4;
	int start;

	cout << "������� 1\n������� �����: ";
	cin >> start;

	int arr[ROW][COL];//������� ������, ����� �������
	for (int i = 0; i < ROW; i++)
	{
		
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = start;
			cout << arr[i][j]<<" ";
			start *= 2;



		}
		cout << endl;
	}
	//������� 2
	const int Row = 4, Col = 4;
	int first;

	cout << "������� 2\n������� �����: ";
	cin >> first;

	int mass[Row][Col];
	for (int i = 0; i < Row; i++)
	{

		for (int j = 0; j < Col; j++)
		{
			mass[i][j] = first;
			cout << mass[i][j] << " ";
			first ++;



		}
		cout << endl;
	}



	return 0;
}