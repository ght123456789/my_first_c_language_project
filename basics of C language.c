#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1416    //定义符号常量
#include <stdio.h>    //在哪些文件中声明系统定义的C标准库函数,stdio:standard input output的缩写,include和define属于预处理指令
#include <stdbool.h>
#include <string.h>
int global_variable;    //所有函数之外定义的变量称为全局变量,一旦在多个函数中使用会降低函数的独立性,存储在静态区(数据段),加载创建进程时,静态区内存页批量清0,不需要反复调用销毁
//栈区存储局部变量,函数参数和返回地址,下次函数调用时复用栈空间,但不会清除内存数据
//main函数是程序的入口,在一个项目中只能有一个
int main()    //int为整型integer,分为short,long和long long,int:4个字节,short:2个字节,长度:long>=int,具体长度与操作系统,CPU架构和应用程序的2进制接口和指针类型的具体位宽有关.
{
	printf("a\n");    //\n为转义序列,表示换行,没有%直接输出""中间的内容,\+特殊符号:特殊符号;\a:让终端发出警报声或闪烁;\b:让光标退格一位但不删除字符;\r:回车即光标回到该行开头
	printf("%d\n", 'a');    //相当于printf(("%d\n", 97)
	printf("a\tbc\t");    //\t:光标移到下一个水平制表位(4位或8位的倍数(把字符本身计算在内);以上均为字符转义序列,还有数字转义序列\(0)ddd(1~3位8进制)和\(0)xdd(1~2位16进制)
	//printf('a');    //''之间为字符,""之间为字符串,但printf的第一个参数为字符串指针,故会打印a的ASCII码对应的存储内容
	printf("%c", 'a');    //%c为字符(char:长度为1字节)占位符,用后边的a替换%c;%d为十进制整数占位符,%s为字符串占位符,%f为双精度浮点型占位符
	bool flag = true;    //bool为布尔变量,在函数内部称为局部变量,若不初始化,则为随机脏值,值为真(true为1)或假(false为0),优先使用局部变量
	printf("%zu\n", sizeof(bool));    //sizeof为获取类型长度的操作符,返回值类型为无符号整型size_t,单位为字节,%zu专门用来打印sizeof的结果
	printf("%zu\n", strlen("abc"));    //strlen为标准库函数,获取字符串的长度
	const int a = 10;	//变量a用const修饰后无法修改
	return 0;
}
//C语言中默认为双精度浮点型duoble,若想让其为单精度浮点型float,必须在后面加f,double也有long double(>=double长度),int默认有符号,无符号:unsigned,有符号:signed
//signed和unsigned也可以用来修饰字符char,变量命名规则:只能由字母,数字和_组成但不能以数字开头,不能使用关键字

	
