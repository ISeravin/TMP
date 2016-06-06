// Lab_4(TMP).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" 

void straight_sequence(int i, int* a, int n)
{
	for (int j = 0; j<n; j++)
		if (a[j] == i)
		{
			cout << j << " ";
			straight_sequence(j, a, n);
		}
}

void back_sequence(int i, int* a, int n)
{
	for (int j = 0; j<n; j++)
		if (a[j] == i)
		{
			back_sequence(j, a, n);
		}
	if (i != -1) cout << i << " ";
}

void symmetry_sequence(int i, int* a, int n)
{
	int k = 0;
	for (int j = 0; j<n; j++)
		if (a[j] == i)
		{
			symmetry_sequence(j, a, n);
			if ((!k) && (i != -1)) cout << i << " ";
			k++;
		}
	if (k == 0)
	{
		cout << i << " ";
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	int* tree = new int[n];
	for (int i = 0; i<n; i++)
		cin >> tree[i];
	straight_sequence(-1, tree, n);
	cout << endl;
	back_sequence(-1, tree, n);
	cout << endl;
	symmetry_sequence(-1, tree, n);
	cout << endl;
	system("pause");
	delete[] tree;
	return 0;
}