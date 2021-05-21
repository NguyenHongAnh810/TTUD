#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	unsigned long long a,b,c;
	cin >> a >> b;
	unsigned long long a0 ,a1 ,b0 ,b1 ,c0 ,c1;
	a0 = a/10;
	a1 = a%10;
	b0 = b/10;
	b1 = b%10;
	c1 = a1 + b1;
	c0 = a0 + b0;
	if(c1 >= 10){
		c1 = c1 - 10;
		c0 = c0 + 1;
		}
	if(c0 > 0) cout << c0 << c1;
	else cout << c1;
	}
