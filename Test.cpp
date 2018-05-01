#include<iostream>
#include <stdlib.h>
using namespace std;
class CRectangle //定义长方形类
{
public:
	CRectangle(); //声明默认构造函数
	CRectangle(int width, int height);  //声明带参构造函数
	~CRectangle();  //声明析构函数
	double circum();
	double area();
private:
	int width;
	int height;
};
CRectangle::CRectangle() //定义默认构造函数
{
	width = 10;
	height = 5;
	cout << "建立默认对象" << endl;
}
CRectangle::CRectangle(int width, int height)  //定义带参构造函数
{
	this->width = width;
	this->height = height;
	cout << "建立对象" << endl;
}
CRectangle::~CRectangle()  //定义构析函数
{
	cout << "撤销对象" << endl;
}
double CRectangle::circum() //定义周长计算成员函数
{
	return 2 * (width + height);
}
double CRectangle::area()  //定义计算面积成员函数
{
	return width*height;
}
void main()  //主函数
{
	CRectangle Rect1, Rect2(30, 20), *pRect = &Rect2;   //定义对象和指向对象的指针
	///使用对象输出周长和面积
	cout << "Rect1的周长为：" <<Rect1.circum()<< endl;  //使用对象输出Rect1的周长
	cout << "Rect1的面积为：" <<Rect1.area() << endl;
	cout << "Rect2的周长为：" <<Rect2.circum() << endl;
	cout << "Rect2的面积为：" <<Rect2.area() << endl;
	///使用对象指针输出Rect2的周长和面积
	cout << "Rect2的周长为：" << pRect->circum() << endl;
	cout << "Rect2的面积为：" << pRect->area() << endl;
	system("pause");
}