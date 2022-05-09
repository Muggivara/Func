

#include <iostream>
using namespace std;

void ShowAverage()
{
	srand(time(0));
	const int M = 5;
	const int N = 4;
	int arr[M][N];
	int sum = 0;
	int min = 20;
	int max = 0;
	int average;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 21;
			sum += arr[i][j];
			if (arr[i][j] > max) max = arr[i][j];
			else if (arr[i][j] < min) min = arr[i][j];
		}
	}
	average = sum / (M * N);
	cout << sum << "\n" << average << "\n" << min << "\n" << max;
}
void DiagonalSum() 
{

	const int M = 5;
	int arr[M][M];
	int sum1 = 0;
	int sum2 = 0;
	srand(time(0));
	for (int i = 0;i < M;i++)

		for (int j = 0;j < M;j++)
		{
			arr[i][j] = rand() % 21;
			if (i == j)sum1 += arr[i][j];
			else if (i + j == M - 1)sum2 += arr[i][j];
		}

	cout <<"\n"<< sum1 << "\n" << sum2;
}
void ColvoPolOtrNull()
{
	const int M = 5;
	const int N = 4;
	int pol = 0;
	int otr = 0;
	int null = 0;
	int arr[M][N];
	srand(time(0));
	for (int i = 0;i < M;i++)
	{
		for (int j = 0;j < N;j++)
		{
			arr[i][j] = rand() % 21 - 10;
			arr[i][j] > 0 ? pol++ : arr[i][j] < 0 ? otr++ : null++;
		}
	}
	cout << "\n" << pol << "\n" << otr << "\n" << null;
}
void StrokStolbSumm() 
{
	const int M = 5;
	const int N = 4;
	int arr[M][N];
	int M0 = 0,
		M1 = 0,
		M2 = 0,
		M3 = 0,
		N0 = 0,
		N1 = 0,
		N2 = 0,
		N3 = 0,
		N4 = 0;
	srand(time(0));
	for (int i = 0;i < M;i++)
	{
		for (int j = 0;j < N;j++)
		{
			arr[i][j] = rand() % 20;
			if (i == 0)N0 += arr[i][j];
			else if (i == 1)N1 += arr[i][j];
			else if (i == 2)N2 += arr[i][j];
			else if (i == 3)N3 += arr[i][j];
			else if (i == 4)N4 += arr[i][j];


			if (j == 0)M0 += arr[i][j];
			else if (j == 1)M1 += arr[i][j];
			else if (j == 2)M2 += arr[i][j];
			else if (j == 3)M3 += arr[i][j];

		}
	}
	cout << "\n" << N0 << " строка 0\n" << N1 << " строка 1\n" << N2 << " строка 2 \n" << N3 << " строка 3\n" << N4 << " строка 4\n\n";
	cout << "\n" << M0 << " столбец 0\n" << M1 << " столбец 1\n" << M2 << " столбец 2\n" << M3 << " столбец 3";
}
void StrokaStolbecNomer() 
{
	const int M = 5;
	const int N = 5;
	int arr[M][N];
	for (int i = 0;i < M;i++)
	{
		for (int j = 0;j < N;j++)
		{
			arr[i][j] = i * 10 + j;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	ShowAverage();
	DiagonalSum();
	ColvoPolOtrNull();
	StrokStolbSumm();
	StrokaStolbecNomer();
}

