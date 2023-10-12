#include <iostream>
using namespace std;
void calculate(int va);
void as_calculate(int va);

int mem[9][3]; //개수, 주간퀘x 일수,  "주간퀘o 일수"추가해보기

int main()
{
	char a, b, c, d, e, f, g1, h1, h2;
	cout << "[아케인&어센틱 심볼 계산기]" << endl;
	cout << "=====================" << endl;
	cout << "계산하려는 심볼 입력" << endl;
	cout << "소멸의 여로(y/n):"; cin >> a;
	cout << "츄츄 아일랜드(y/n):"; cin >> b;
	cout << "레헬른(y/n):"; cin >> c;
	cout << "아르카나(y/n):"; cin >> d;
	cout << "모라스(y/n):"; cin >> e;
	cout << "에스페라(y/n):"; cin >> f;
	cout << "세르니움(y/n):"; cin >> g1;
	cout << "아르크스(y/n):"; cin >> h1;
	cout << "오디움(y/n):"; cin >> h2;


	if (a == 'y')
	{
		cout << "소멸의 여로" << endl;
		calculate(0);
		cout << endl;
	}

	if (b == 'y')
	{
		cout << "츄츄 아일랜드" << endl;
		calculate(1);
		cout << endl;
	}

	if (c == 'y')
	{
		cout << "레헬른" << endl;
		calculate(2);
		cout << endl;
	}

	if (d == 'y')
	{
		cout << "아르카나" << endl;
		calculate(3);
		cout << endl;
	}

	if (e == 'y')
	{
		cout << "모라스" << endl;
		calculate(4);
		cout << endl;
	}

	if (f == 'y')
	{
		cout << "에스페라" << endl;
		calculate(5);
		cout << endl;
	}

	if (g1 == 'y')
	{
		cout << "세르니움" << endl;
		as_calculate(6);
		cout << endl;
	}

	if (h1 == 'y')
	{
		cout << "아르크스" << endl;
		as_calculate(7);
		cout << endl;
	}

	if (h2 == 'y')
	{
		cout << "오디움" << endl;
		as_calculate(8);
		cout << endl;
	}
	cout << endl << "===========계산결과===========" << endl;
	for (int i = 0; i < 9; i++)
	{
		if (mem[i][0] != 0)
		{
			switch (i)
			{
			case 0:
			{
				cout << "소멸의 여로" << endl;
				cout << "남은 심볼 개수: " << mem[i][0] << endl;
				cout << "주간퀘x시 소요일: ";
				if (mem[i][0] % 20 == 0) cout << mem[i][0] / 20 << "일" << endl;
				else cout << mem[i][0] / 20 + 1 << "일" << endl;

				cout << endl;
				break;
			}
			case 1:
			{
				cout << "츄츄 아일랜드" << endl;
				cout << "남은 심볼 개수: " << mem[i][0] << endl;
				cout << "주간퀘x시 소요일: ";
				if (mem[i][0] % 20 == 0) cout << mem[i][0] / 20 << "일" << endl;
				else cout << mem[i][0] / 20 + 1 << "일" << endl;
				cout << endl;
				break;
			}
			case 2:
			{
				cout << "레헬른" << endl;
				cout << "남은 심볼 개수: " << mem[i][0] << endl;
				cout << "주간퀘x시 소요일: ";
				if (mem[i][0] % 20 == 0) cout << mem[i][0] / 20 << "일" << endl;
				else cout << mem[i][0] / 20 + 1 << "일" << endl;
				cout << endl;
				break;
			}
			case 3:
			{
				cout << "아르카나" << endl;
				cout << "남은 심볼 개수: " << mem[i][0] << endl;
				cout << "주간퀘x시 소요일: ";
				if (mem[i][0] % 20 == 0) cout << mem[i][0] / 20 << "일" << endl;
				else cout << mem[i][0] / 20 + 1 << "일" << endl;
				cout << endl;
				break;
			}
			case 4:
			{
				cout << "모라스" << endl;
				cout << "남은 심볼 개수: " << mem[i][0] << endl;
				cout << "주간퀘x시 소요일: ";
				if (mem[i][0] % 20 == 0) cout << mem[i][0] / 20 << "일" << endl;
				else cout << mem[i][0] / 20 + 1 << "일" << endl;
				cout << endl;
				break;
			}
			case 5:
			{
				cout << "에스페라" << endl;
				cout << "남은 심볼 개수: " << mem[i][0] << endl;
				cout << "주간퀘x시 소요일: ";
				if (mem[i][0] % 20 == 0) cout << mem[i][0] / 20 << "일" << endl;
				else cout << mem[i][0] / 20 + 1 << "일" << endl;
				cout << endl;
				break;
			}
			case 6:
			{
				cout << "세르니움" << endl;
				cout << "남은 심볼 개수: " << mem[i][0] << endl;
				cout << "소요일: ";
				if (mem[i][0] % 20 == 0) cout << mem[i][0] / 20 << "일" << endl;
				else cout << mem[i][0] / 20 + 1 << "일" << endl;
				cout << endl;
				break;
			}
			case 7:
			{
				cout << "아르크스" << endl;
				cout << "남은 심볼 개수: " << mem[i][0] << endl;
				cout << "소요일: ";
				if (mem[i][0] % 10 == 0) cout << mem[i][0] / 10 << "일" << endl;
				else cout << mem[i][0] / 10 + 1 << "일" << endl;
				cout << endl;
				break;
			}
			case 8:
			{
				cout << "오디움" << endl;
				cout << "남은 심볼 개수: " << mem[i][0] << endl;
				cout << "소요일: ";
				if (mem[i][0] % 10 == 0) cout << mem[i][0] / 10 << "일" << endl;
				else cout << mem[i][0] / 10 + 1 << "일" << endl;
				cout << endl;
				break;
			}
			}
		}
	}
	int end;
	cout << "창을 닫으려면 입력: "; cin >> end;
}

void calculate(int va)
{
	int level;
	int exp;
	cout << "현재 심볼 레벨:"; cin >> level;
	cout << "현재 심볼 경험치:"; cin >> exp;
	int r = 2679;
	switch (level)
	{
	case 1:
	{
		r -= exp;
		break;
	}
	case 2:
	{
		r -= exp + 12;
		break;
	}
	case 3:
	{
		r -= exp + 27;
		break;
	}
	case 4:
	{
		r -= exp + 47;
		break;
	}
	case 5:
	{
		r -= exp + 74;
		break;
	}
	case 6:
	{
		r -= exp + 110;
		break;
	}
	case 7:
	{
		r -= exp + 157;
		break;
	}
	case 8:
	{
		r -= exp + 217;
		break;
	}
	case 9:
	{
		r -= exp + 292;
		break;
	}
	case 10:
	{
		r -= exp + 384;
		break;
	}
	case 11:
	{
		r -= exp + 495;
		break;
	}
	case 12:
	{
		r -= exp + 627;
		break;
	}
	case 13:
	{
		r -= exp + 782;
		break;
	}
	case 14:
	{
		r -= exp + 962;
		break;
	}
	case 15:
	{
		r -= exp + 1169;
		break;
	}
	case 16:
	{
		r -= exp + 1405;
		break;
	}
	case 17:
	{
		r -= exp + 1672;
		break;
	}
	case 18:
	{
		r -= exp + 1972;
		break;
	}
	case 19:
	{
		r -= exp + 2307;
		break;
	}
	}
	mem[va][0] = r;
}

void as_calculate(int va)
{
	int level;
	int exp;
	cout << "현재 심볼 레벨:"; cin >> level;
	cout << "현재 심볼 경험치:"; cin >> exp;
	int r = 4565;
	switch (level)
	{
	case 1:
	{
		r -= exp;
		break;
	}
	case 2:
	{
		r -= exp + 29;
		break;
	}
	case 3:
	{
		r -= exp + 105;
		break;
	}
	case 4:
	{
		r -= exp + 246;
		break;
	}
	case 5:
	{
		r -= exp + 470;
		break;
	}
	case 6:
	{
		r -= exp + 795;
		break;
	}
	case 7:
	{
		r -= exp + 1239;
		break;
	}
	case 8:
	{
		r -= exp + 1820;
		break;
	}
	case 9:
	{
		r -= exp + 2556;
		break;
	}
	case 10:
	{
		r -= exp + 3465;
		break;
	}
	}
	mem[va][0] = r;
}
