#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	{cout<<"=== «адание 1a ==============="<<endl;
	int x = 5, a =3, b = 7; ; bool b1, b2, b3;
	b1 = x>=a && x<=b;
	x = 2;
	b2 = x>=a && x<=b;
	x=8;
	b3 = x>=a && x<=b;

	}



	{cout<<"=== «адание 1b ==============="<<endl;
	int x = 0, y = 3; bool b1, b2, b3, b4;
	b1 = x==0 || y==0;
	x = 5, y = 0;
	b2 = x==0 || y==0;
	x = 0; y = 0;
	b3 = x==0 || y==0;
	x = 2; y = 4;
	b3 = x==0 || y==0;
	}



	{cout<<"=== «адание 2 ================"<<endl;
	int n=673319;
	if (n%17==0)
	{
		cout<<"n кратно 17"<<endl;
	}
	else
	{
		cout<<"n не кратно 17"<<endl;
	}

	if (n%23==0)
	{
		cout<<"n кратно 23"<<endl;
	}
	else
	{
		cout<<"n не кратно 23"<<endl;
	}
	}



	{cout<<"=== «адание 3 ================"<<endl;
	float x=-8, y= -11;
	char s[64]="точка (x,y) не принадлежит первой кооординатной четверти";
	if (x>0 && y>0) {
		strcpy(s,"точка (x,y) принадлежит первой кооординатной четверти");
	}
	cout<<s<<endl;
	}



	{cout<<"=== «адание 4 ================"<<endl;
	double a=1, b=5, c=4, d=7;
	cout<<"концы первого отезка: "<<a<<" "<<b<<endl;
	cout<<"концы второго отрезка: "<<c<<" "<<d<<endl;
	double x=3.5; cout<<"x = "<<x<<endl;

	if ((x>=a && x<=b)  &&  (x>=c && x<=d))
		cout<<"x принадлежит пересечению отрезков"<<endl;
	else
		cout<<"x не принадлежит пересечению отрезков"<<endl;

	char s[48] = "x не принадлежит объединению отрезков";
	if ((x>=a && x<=b) || (x>=c && x<=d))
		strcpy(s,"x принадлежит объединению отрезков");
	cout<<s<<endl;
	}



	{cout<<"=== «адание 5 ================"<<endl;
	int a=6, b=15, c=8; int max3;
	if (a>b)
	{
		if (a>c)
			max3=a;
		else
			max3=c;
	}
	else
	{
		if (b>c)
			max3=b;
		else
			max3=c;
	}
	cout<<"max(a,b,c) = "<<max3<<endl;
	}



	{cout<<"=== «адание 6 ================"<<endl;
	int a=2, b=0, x=4, y=3;
	if (a>=b)					//if-1
		if (x<y)				//if-2
		{
			a=1; b=2;
		}
		else					//else-2
			if (a==2)			//if-3
				if (b=1)		//if-4
					x=y=1;
				else			//else-4
				{
					x=5; y=6;
				}
			else				//else-3
			{
				a++; b++;
			}
	}



	{cout<<"=== «адание 7 ================"<<endl;
	int n = 63109; int m = abs(n);
	if (m<10)
		cout<<"n - однозначное";
	else if (m<100)
		cout<<"n - двузначное";
	else if (m<1000)
		cout<<"n - трЄхзначное";
	else
		cout<<"n содержит больше трЄх цифр";

	cout<<endl;
	}



	{cout<<"=== «адание 8 ================"<<endl;
	int n=1000; cout<<"n = "; //cin>>n;
	n = 253; 
	cout<<n<<endl;
	if (n>2 && n%2==0) cout<<"n чЄтное"<<endl;
	else if (n>3 && n%3==0) cout<<"n кратно 3"<<endl;
	else if (n>5 && n%5==0) cout<<"n кратно 5"<<endl;
	else if (n>7 && n%7==0) cout<<"n кратно 7"<<endl;
	else if (n>11 && n%11==0) cout<<"n кратно 11"<<endl;
	else if (n>13 && n%13==0) cout<<"n кратно 13"<<endl;
	else cout<<"n простое"<<endl;

	cout<<"n = "; //cin>>n;
	n = 251; 
	cout<<n<<endl;
	if (n>2 && n%2==0) cout<<"n чЄтное"<<endl;
	else if (n>3 && n%3==0) cout<<"n кратно 3"<<endl;
	else if (n>5 && n%5==0) cout<<"n кратно 5"<<endl;
	else if (n>7 && n%7==0) cout<<"n кратно 7"<<endl;
	else if (n>11 && n%11==0) cout<<"n кратно 11"<<endl;
	else if (n>13 && n%13==0) cout<<"n кратно 13"<<endl;
	else cout<<"n простое"<<endl;
	}



	{cout<<"=== «адание 9 ================"<<endl;
	int a=7;
	if (a)
		cout<<"a - ненулевое значение\n";
	else 
		cout<<"a - нуль\n";

	int b=0;
	if (b)
		cout<<"b - ненулевое значение\n";
	else 
		cout<<"b - нуль\n";


	int c=0;
	if (!c)
		cout<<"c - нуль\n";
	else 
		cout<<"c - ненулевое значение\n";

	int d=-3;
	if (!d)
		cout<<"d - нуль\n";		
	else 
		cout<<"d - ненулевое значение\n";
	}



	{cout<<"=== «адание 10 ================"<<endl;
	int x=2 , y=3 ;
	bool b1= !(y>x), b2 = y<5;
	bool b3 = y<2*x, b4 = !(x>0);
	}



	{cout<<"=== «адание 11 ================"<<endl;
	int x=7, y=3;
	if (x==y)
		cout<<"«начени€ переменных равны\n";
	else
		cout<<"«начени€ переменных не равны\n";

	x=5; y=0;
	if (x=y)
		cout<<"«начени€ второй переменной ненулевое\n";
	else
		cout<<"«начение второй переменной нулевое\n";
	}



	{cout<<"=== «адание 12 ================"<<endl;
	int x=4, y=7; int max_xy, min_xy;

	max_xy = x>y ? x : y;
	min_xy = x>y ? y : x;
	}



	{cout<<"=== «адание 13 ================"<<endl;
	int x=2, y=5;
	cout<<(x>0 && y>0 ? x*y : x+y)<<endl;

	x>0 && y>0 ? cout<<x<<endl : cout<<x+y<<endl;

	int z;
	x>0 && y>0 ? z=x*y : z=x+y;
	}



	{cout<<"=== «адание 14 ================"<<endl;
	double x = 0, y = 5.1;
	x==0 
		? y == 0 ? cout<<"центр\n" : cout<<"ось OY\n" 
		: y == 0 ? cout<<"ось OX\n" :cout<<"не принадлежат ос€м\n";

	x = -7.3; y = 0;
	x==0 
		? y == 0 ? cout<<"центр\n" : cout<<"ось OY\n" 
		: y == 0 ? cout<<"ось OX\n" :cout<<"не принадлежат ос€м\n";


	x = 0; y = 0;
	x==0
		? y == 0 ? cout<<"центр\n" : cout<<"ось OY\n" 
		: y == 0 ? cout<<"ось OX\n" :cout<<"не принадлежат ос€м\n";

	x = -7.3; y = 5.1;
	x==0 
		? y == 0 ? cout<<"центр\n" : cout<<"ось OY\n" 
		: y == 0 ? cout<<"ось OX\n" :cout<<"не принадлежат ос€м\n";
	}



	{cout<<"=== «адание 15 ================"<<endl;
	// первый вариант - break в каждой части ветви, a=2
	int a=2; cout<<a<<"--->";
	switch (2*a+1)
	{
	case 1 :
		a+=5;
		break;
	case 3:
		a+=10;
		break;
	case 5:
		a+=100;
		break;
	default:
		a=999;
	}
	cout<<a<<endl;

	// второй вариант - break в каждой части ветви, a=2
	a=5; cout<<a<<"--->";
	switch (2*a+1)
	{
	case 1 :
		a+=5;
		break;
	case 3:
		a+=10;
		break;
	case 5:
		a+=100;
		break;
	default:
		a=999;
	}
	cout<<a<<endl;

	// третий вариант - убираем ветвь default
	a=5; cout<<a<<"--->";
	switch (2*a+1)
	{
	case 1 :
		a+=5;
		break;
	case 3:
		a+=10;
		break;
	case 5:
		a+=100;
		break;
	}
	cout<<a<<endl;

	// четвЄртый вариант - break в последней ветви, a=0
	a=0; cout<<a<<"--->";
	switch (2*a+1)
	{
	case 1 :
		a+=5;
	case 3:
		a+=10;
	case 5:
		a+=100;
		break;
	default:
		a=999;
	}
	cout<<a<<endl;

	// п€тый вариант - без break, a=0
	a=0; cout<<a<<"--->";
	switch (2*a+1)
	{
	case 1 :
		a+=5;
	case 3:
		a+=10;
	case 5:
		a+=100;
	default:
		a=999;
	}
	cout<<a<<endl;
	}


	{cout<<"=== «адание 16 ================"<<endl;
	char letter='а';
	switch (letter)
	{
	case 'а':case 'о':case 'э':case 'у':case 'ы':
	case '€':case 'Є':case 'е':case 'ю':case 'и':
		cout<<letter<<" - гласна€ буква\n";
		break;

	case 'б':case 'в':case 'г':case 'д':case 'ж':
	case 'з':case 'й':case 'к':case 'л':case 'м':
	case 'н':case 'п':case 'р':case 'с':case 'т':
	case 'ф':case 'х':case 'ц':case 'ч':case 'ш':case 'щ':
		cout<<letter<<" - согласна€ буква\n";
		break;

	case 'ь':case 'ъ':
		cout<<letter<<" - буква, не обозначающа€ звука\n";
		break;
	default:
		cout<<letter<<" не €вл€етс€ строчной русскаой буквой\n";
	}
	}

	cout << endl; system("pause");
	return 0;
}