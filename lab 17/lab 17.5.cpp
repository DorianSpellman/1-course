#include<iostream>
using namespace std;
int main()
{
	int N;
	int A[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (A[i] == A[j]) {
				cout << "Numbers of the similar elements: " << i << " " << j + 1;
			}
		}
	}
}
