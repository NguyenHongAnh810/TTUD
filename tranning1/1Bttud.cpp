#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		}
	int sum[n], minSum[n];
	sum[0] = a[0];
	for(int i = 1; i < n; i++){
		sum[i] = sum[i-1] + a[i];
		}
	
	
	}
