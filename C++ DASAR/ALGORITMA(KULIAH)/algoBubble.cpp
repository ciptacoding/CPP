#include <iostream>
using namespace std;

int main()
{
	// disini kita melakukan pembuatan array yang mana berasal dari inputan user
	int banyakA;
	int x[100];
	cout << "Masukan Banyaknya Jumlah Array : ";
	cin >> banyakA;
	for (int i = 0; i < banyakA; i++)
	{
		cout << "masukan array ke " << i << " :";
		cin >> x[i];
	}
	// proses pembuatan array
	// menampilkan array sebelum di sorting
	cout << "Array Awal Adalah: " << endl;
	int y = banyakA - 2;
	int param;
	for (int i = 0; i < banyakA; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl
		 << endl
		 << "Mulai Proses Sorting" << endl;

	// memulai proses sorting
	while (y >= 0)
	{
		int index = 0;
		while (index <= y)
		{
			if (x[index] > x[index + 1])
			{
				param = x[index];
				x[index] = x[index + 1];
				x[index + 1] = param;
			}
			index++;
		}
		// disini kita melakukan pengecekan hasil di setiap tahapan sort
		for (int i = 0; i < banyakA; i++)
		{
			cout << x[i] << " ";
		}
		cout << endl;
		y--;
	}
	// processing end

	// disini kita melakukan looping untuk mengeluarkan hasil sorting
	cout << "Hasil Sortingnya Adalah:" << endl;

	for (int i = 0; i < banyakA; i++)
	{
		cout << x[i] << " ";
	}
}