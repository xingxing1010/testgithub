#include<iostream>//ϵͳĿ¼

#include<graphics.h>
#include<MMsystem.h>
#pragma comment(lib,"winmm.lib")
//include" " ��Ŀ¼
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
	//cout << "��ϲ����!" << endl;
	//cout << "404����!!!!\n";
	//cout << age << endl;
	////�ü����˵��
	//string str;
	//char st[32] ;
	//int c;
	//cout << "�����?\n";
	//cin >> str;
	//scanf_s("%d", &c);
	//cout << "��˵��\n" << str << endl;
	//int a = 1000l;
	//printf("���Ǹ�����Ա\n");
	//printf("�ҵĹ�����%d\n", a);
	//printf("�ҵĹ�����%d\n", 100);

	//printf("%d", c);
	//����Ĺ��� yԤ���� g++ -e  һ�λ�� g++ -s (a.s) g++ -c a.o  ���� g++ a.o -o a.exe
	//ע�� 
	//mciSendString("play ���־���.mp3 repeat", 0, 0, 0);
	//initgraph(800, 800);
	//loadimage(0, "she.png");
	////setbkcolor(RGB(233, 11, 33));
	////cleardevice();
	////setlinecolor(RED);
	////setlinestyle(PS_SOLID,10);
	////line(100, 200, 300, 200);
	//////circle(300, 200, 200);
	//settextcolor(GREEN);
	//settextstyle(100,0,"����");
	//outtextxy(100, 300, "�����");
	//outtextxy(100, 400, "����");
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
	//str = "wo ���ж���";
//getline(cin, str);
//getline(cin, str2);
//    cout << str.size()<<endl;
//	cout << str2.size() << endl;
//	if (str.empty()) {
//		cout << "empty\n";
//	}
//	if (str > str2) {
//		cout << "str ��" << endl;
//	}
//	if (str < str2) {
//		cout << "str2 ��" << endl;
//	}
//
//	if (str == str2) {
//		cout << "�������" << endl;
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
	
	cout << "һ��������" << count << "hang" << endl << "�ܳ���" << length << endl;*/

	//��Ŀ����Ƚ�
	//strcmp()
	//�߼��� �߼��� �߼��� ��� 
	//λ���� ��λ

	//int x;
	//cout << "����һ����\n";
	//cin >> x;
	////������λ��0110 0���κ����� ���ܵõ��κ��� 1.����0 ,2 �����κ����������� (x&(~15)
	//x = x & (~15);
	//x = x | 6;
	//cout << x << endl;
	//��������� ��������ȼ�
	//����ת��

	//if elseif ifǶ�� Switch ()

	//�����ַ��������� /D CRT
	//scanf()
	//forѭ��
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


	//goto ��ǩ ����ô��





	system("pause");
    return 0;
	}