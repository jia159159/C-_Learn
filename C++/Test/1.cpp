#include<iostream>
#include<string>
using namespace std;
//结构体数组
//1、定义结构体 
struct  student
{
	string name;
	int age;
	int score;
};
 
int main() {
	//2、创建结构体数组
	struct student arr[3] = {
		{"张三",18,100},
		{"李四",17,90},
		{"王二",16,80}
	};
	//3、给结构体数组中的元素赋值
	arr[2].name = "李三";
	arr[2].age = 17;
	arr[2].score = 10;
	//4、遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名:" << arr[i].name << "\t年龄：" << arr[i].age << "\t分数:" << arr[i].score << endl;
 
	}
	// system("pause");
	return 0;
}