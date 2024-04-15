#include <iostream>
#include <fstream>
using namespace std;

//#8
//int f(int a)
//{
//	int temp = a;
//	while (temp)
//	{
//		if (temp % 10 == 2)
//		{
//			return 1;
//			break;
//		}
//		temp /= 10;
//	}
//}
//int main()
//{
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//	int x, sum = 0, n,pos=0;
//	cout << "n:";
//	cin >> n;
//	while (!fin.eof())
//	{
//		fin >> x;
//		if (pos % 3 == 0)
//			sum += x;
//		pos++;
//	}
//	cout << sum;
//	fin.close();
//	if (sum > n)
//	{
//		fin.open("input.txt");
//		while (!fin.eof())
//		{
//			fin >> x;
//			if (f(x) == 1)
//				fout << x << " ";
//
//		}
//		fin.close();
//	}
//	else {
//		fin.open("input.txt");
//		while (!fin.eof())
//		{
//			fin >> x;
//			if (x >= 10 && x < 100)
//				fout << x << " ";
//		}
//		fin.close();
//	}
//	fout.close();
//}

//#1
//int main()
//{
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//	int x, cnt = 0;
//	while (!fin.eof())
//	{
//		fin >> x;
//		if (x % 2 == 0)
//			cnt++;
//	}
//	fin.close();
//	cout << cnt;
//}

//#2
//int main()
//{
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//	int x, pos = 1,cnt=0;
//	while (!fin.eof())
//	{
//		fin >> x;
//		if (x % 7 == 0 && pos % 2 != 0)
//			cnt++;
//		pos++;
//	}
//	cout << cnt;
//	fin.close();
//}

//#3
//int main()
//{
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//	int x,max;
//	while (!fin.eof())
//	{
//		fin >> x;
//		max = x;
//	}
//	fin.close();
//	fin.open("input.txt");
//	while (!fin.eof())
//	{
//		fin >> x;
//		if (x > max)
//			max = x;
//	}
//	fin.close();
//	cout << max;
//}

//#4
//int main()
//{
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//	int x,y;
//	fin >> x;
//	int f = 1;
//	while (!fin.eof()&& fin>>y)
//	{
//		if (x * y > 0)
//		{
//			f = 0;
//			break;
//		}
//		x = y;
//	}
//	if (f == 1)
//		cout << "znakochered";
//	else
//		cout << "net";
// fin.close();
//}


// #5
//int main()
//{
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//	int x, y, f = 1;
//	fin >> x;
//	while (!fin.eof()&& fin>>y)
//	{
//		if ((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0))
//		{
//			f = 0;
//			break;
//		}
//		x = y;
//	}
//	fin.close();
//	fin.open("input.txt");
//	if (f == 1)
//	{
//		while (!fin.eof() && fin >> x)
//		{
//			if (x % 2 == 0)
//				fout << x << " ";
//		}
//	}
//	fin.close();
//	fin.open("input.txt");
//	if(f==0)
//	{
//		while (!fin.eof() && fin >> x)
//		{
//			if (x % 2 != 0)
//				fout << x << " ";
//		}
//	}
//	fin.close();
//	fout.close();
//}


//#6
//int main()
//{
//	fstream fin("input.txt");
//	ofstream fout("output.txt");
//	int x, a, b, min,f=0;
//	cin >> a;
//	cin >> b;
//	fin >> x;
//	min = x;
//	fin.close();
//	fin.open("input.txt");
//	while (!fin.eof() && fin >> x)
//	{
//		if (x < min)
//			min = x;
//	}
//	fin.close();
//	fin.open("input.txt");
//	int cnt = 0;
//	while (!fin.eof() && fin >> x)
//	{
//		if (x ==min*2)
//			cnt++;
//	}
//	fin.close();
//	if (cnt >= 2)
//		f = 1;
//	if (f == 1)
//	{
//		fin.open("input.txt");
//		int pos = 0;
//		while (!fin.eof() && fin >> x)
//		{
//			if (pos >= a && pos <= b)
//				fout << x << " ";
//			pos++;
//			cout << pos;
//		}
//	}
//	fin.close();
//	fout.close();
//}

//#7
//int main()
//{
//	fstream fin("input.txt");
//	ofstream fout("output.txt");
//	ofstream fout2("output2.txt");
//	int x, z, y, f = 1;
//	cin >> z;
//	fin >> x;
//	while (!fin.eof() && fin >> y)
//	{
//		if (x * y > 0)
//			f = 0;
//		x = y;
//	}
//	fin.close();
//	fin.open("input.txt");
//	if (f == 1)
//	{
//		while (!fin.eof() && fin >> x)
//		{
//			if (x < 0)
//				fout << abs(x) << " ";
//		}
//	}
//	fin.close();
//	fin.open("input.txt");
//	if (f == 0)
//	{
//		while (!fin.eof() && fin >> x)
//		{
//			if (x % 5 == 0)
//				fout2 << x + z << " ";
//		}
//	}
//	fin.close();
//	fout.close();
//}