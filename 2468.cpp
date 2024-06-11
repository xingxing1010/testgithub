#include<iostream>//系统目录

#include<graphics.h>
#include<MMsystem.h>
#pragma comment(lib,"winmm.lib")
//include" " 本目录
//using  std::cout;
//using std::endl;
#include<string>
using namespace std;
namespace xingliang {
	int age=100;
}
using namespace xingliang;

void clearBuf() {
	char c;
	while ((c = getchar()) != '\n') {
		
	}
}
int main(void)//(int argc ,char*argv[]) char **argv
	{
	//cout << "我喜欢你!" << endl;
	//cout << "404攻击!!!!\n";
	//cout << age << endl;
	////让计算机说话
	//string str;
	//char st[32] ;
	//int c;
	//cout << "你好吗?\n";
	//cin >> str;
	//scanf_s("%d", &c);
	//cout << "你说了\n" << str << endl;
	//int a = 1000l;
	//printf("我是个程序员\n");
	//printf("我的工资是%d\n", a);
	//printf("我的工资是%d\n", 100);

	//printf("%d", c);
	//软件的过程 y预处理 g++ -e  一次汇编 g++ -s (a.s) g++ -c a.o  链接 g++ a.o -o a.exe
	//注释 
	//mciSendString("play 极乐净土.mp3 repeat", 0, 0, 0);
	//initgraph(800, 800);
	//loadimage(0, "she.png");
	////setbkcolor(RGB(233, 11, 33));
	////cleardevice();
	////setlinecolor(RED);
	////setlinestyle(PS_SOLID,10);
	////line(100, 200, 300, 200);
	//////circle(300, 200, 200);
	//settextcolor(GREEN);
	//settextstyle(100,0,"宋体");
	//outtextxy(100, 300, "吴清风");
	//outtextxy(100, 400, "邢梁");
	////rectangle(100, 200, 400, 500);
	//system("pause");
	//closegraph();
	//6/9
	////xiao duan da duan
	//double a = 3.3444444444;
	//cout.precision(4);
	//cout.flags(cout.fixed);
	////cout.unsetf(cout.fixed);
	//cout << a << endl;
	/*char name = 97;
	cout << name << endl;
	cout << sizeof( unsigned int) << endl;;
	cout << sizeof(wchar_t) << endl;;
	cout << sizeof(int) << endl;;
	cout << sizeof(long int) << endl;;
	cout << sizeof(long long) << endl;
	cout << sizeof(float) << endl;;
	cout << sizeof(double) << endl;;*/
	/*int a;
	int b;
	float c;
	cout << "shu ru shuju\n";
	cin >> a;
	if (cin.fail()) {
		cin.clear();

		clearBuf();

	}
	
		cout << "shu ru shuju\n";
		cin >> b;
		cout << "shu ru shuju\n";
		cin >> c;

		cout << "a=" << a << "b=" << b << "c=" << c << endl;
		*/
	string str ,str2;
	//str = "wo 是行动量";
//getline(cin, str);
//getline(cin, str2);
//    cout << str.size()<<endl;
//	cout << str2.size() << endl;
//	if (str.empty()) {
//		cout << "empty\n";
//	}
//	if (str > str2) {
//		cout << "str 大" << endl;
//	}
//	if (str < str2) {
//		cout << "str2 大" << endl;
//	}
//
//	if (str == str2) {
//		cout << "两者相等" << endl;
//	}
//	
//	float mm[5] = { 1,2,3,4,5 };
//	char name[5] = { 's',',','e','s','\0' };
//	gets_s(name,5);
	/*cout << *mm << endl;
	cout << name << endl;*/
	//string len;
	/*char len[128];
	int count=0;
	int length=0;
	while (1) {
		if (gets_s(len) == 0) {
			break;
		}
		
		count += 1;
		length +=strlen(len);
	}
	
	cout << "一共输入了" << count << "hang" << endl << "总长度" << length << endl;*/

	//账目密码比较
	//strcmp()
	//逻辑与 逻辑或 逻辑非 异或 
	//位运算 移位

	//int x;
	//cout << "输入一整数\n";
	//cin >> x;
	////后面置位成0110 0与任何数或 都能得到任何数 1.先清0 ,2 再与任何数做或运算 (x&(~15)
	//x = x & (~15);
	//x = x | 6;
	//cout << x << endl;
	//其他运算符 运算符优先级
	//类型转换

	//if elseif if嵌套 Switch ()

	//输入字符报错问题 /D CRT
	//scanf()
	//for循环
	/*for (int i = 0; i < 9; i++) {
		cout << i << endl;
	}*/
	/*int n = 10;
	do {
		n--;
		if (n == 5) {
			continue;
		}
		if (n < 0) {
			break;
		}
		cout << n << endl;;
		
	
	} while (n >= 0);*/


	//goto 标签 不怎么用





	system("pause");
    return 0;
	}