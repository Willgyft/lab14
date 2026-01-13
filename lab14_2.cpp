#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double x[][N]){
    for(int a = 0; a < N;a++){
        cout << "Row " << a+1 << ": ";
    }
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> x[i][j];
}
void showMatrix(const bool s[][N]){
		for(int i = 0; i < N; i++){
		    for(int j = 0; j < N; j++){
		        cout << s[i][j] << " ";
		    }
		    cout << "\n";
		}
}
void findLocalMax(const double f[][N], bool m[][N]){
	for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            m[i][j] = false;
		}
	}
	for(int i = 1; i < N-1; i++){
        for(int j = 1; j < N-1; j++){

            if( f[i][j] >= f[i-1][j] &&  f[i][j] >= f[i+1][j] &&  f[i][j] >= f[i][j-1] && f[i][j] >= f[i][j+1]){
                m[i][j] = true;
            }
		}
	}
}
