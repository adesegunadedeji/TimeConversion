// TimeConversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int hh;
	int mm;
	int ss;
	char type;
	cout << "Please Enter Time in 12 Hour Format:"<<endl;
	scanf("%d:%d:%d%c", &hh, &mm, &ss,&type);
	if (hh!=12 && type == 'p') {
		hh += 12;
	}
	if (hh == 12 & type == 'a') {
		hh = 0;
	}

	printf("%02d:%02d:%02d", hh, mm, ss);


	system("pause");
	return 0;
}
