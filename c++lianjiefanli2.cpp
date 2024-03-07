// c++lianjiefanli2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<mysql.h>

#define HOSTNAME "127.0.0.1"
#define USERNAME "root"
#define USERPWD "xdl19951010"
#define DBPORT  3306
int main()
{
	MYSQL_RES* res;
	MYSQL_ROW row;
	char sql[256];
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gbk");
	if (mysql_real_connect(&mysql, HOSTNAME, USERNAME, USERPWD, "xingliang", DBPORT, NULL, 0) == 0) {
		printf("链接失败", "错误原因%s\n", mysql_error(&mysql));
		printf("lianjiecuowu\n");
	}
	sprintf_s(sql, 256, "select id from class where name='邢佳欢';");
	bool ret =mysql_query(&mysql, sql);
	if (ret) {
		printf("查询失败,%s失败原因 %s", sql, mysql_error(&mysql));
		mysql_close(&mysql);
		
	}
	res = mysql_store_result(&mysql);
	row = mysql_fetch_row(res);
	if (row == NULL) {
		mysql_free_result(res);
		mysql_close(&mysql);

		
	}
	int id = atoi(row[0]);
	mysql_free_result(res);
	mysql_close(&mysql);
	std::cout << "拿到的id是：" << id << std::endl;
   /* std::cout << "Hello World!\n";*/
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
