#include<stdio.h>
#include<iostream>

using namespace std;

void swap(int* a, int* b){
	int* c;
	c = a;
	a = b;
	b = c;
}

void sort(int** a, int n){
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(a[1][j] > a[1][i]){
				swap(a[2][j], a[2][i]);
				swap(a[1][j], a[1][i]);
				}
			}
		}
}

int main(){
	int n, k;
	cin >> n >> k;
	int x[2][n], a[n][n], b[n][n];
	int ca = 0, cb = 0;
	for(int i = 0; i < n; i++){
		cin >> x[1][i] >> x[2][i];
		if(x[1][i] >= 0) {
			ca++;
			a[1][ca] = x[1][i];
			a[2][ca] = x[2][i];
		}else{
			cb++;
			b[1][ca] = x[1][i];
			b[2][ca] = x[2][i];
 		}
		}
	sort(a, ca);
	sort(b, cb);
	
	
	}
