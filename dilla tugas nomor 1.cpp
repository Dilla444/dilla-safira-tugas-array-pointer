#include <iostream>

using namespace std;
	

int main(int argc, char *argv[])
{
		
	cout<<"       -NAMA : DILLA SAFIRA-\n";
	cout<<"       -NIM  : 20051397072-\n";
	cout<<"       -KELAS : 2020B-\n ";
	cout<<"\n";
	cout<<"===================================\n";	
	int arr[12];
	int *n = arr;
	
	for(int i = 0; i <= 7; i++){
	cout << " MASUKAN NILAI KE n " << i+1 << " : "; cin >> *(n+i);
	}
	
	cout << " OUTPUT ADDRESS DARI ARRAY ADALAH ";
	for (int o = 0; o <= 7; o++)
	cout << (n+o) << " ";
	
	
	cout << endl << " OUTPUT NILAI DARI ARRAY ADALAH " << endl;
	for(int p = 0; p <= 7; p++){
		cout << " NILAI KE " << p << " ADALAH " << *(n+p) << endl;
	}
	
	delete [] n;
}
