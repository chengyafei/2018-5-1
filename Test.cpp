#include<iostream>
#include <stdlib.h>
using namespace std;
class CRectangle //���峤������
{
public:
	CRectangle(); //����Ĭ�Ϲ��캯��
	CRectangle(int width, int height);  //�������ι��캯��
	~CRectangle();  //������������
	double circum();
	double area();
private:
	int width;
	int height;
};
CRectangle::CRectangle() //����Ĭ�Ϲ��캯��
{
	width = 10;
	height = 5;
	cout << "����Ĭ�϶���" << endl;
}
CRectangle::CRectangle(int width, int height)  //������ι��캯��
{
	this->width = width;
	this->height = height;
	cout << "��������" << endl;
}
CRectangle::~CRectangle()  //���幹������
{
	cout << "��������" << endl;
}
double CRectangle::circum() //�����ܳ������Ա����
{
	return 2 * (width + height);
}
double CRectangle::area()  //������������Ա����
{
	return width*height;
}
void main()  //������
{
	CRectangle Rect1, Rect2(30, 20), *pRect = &Rect2;   //��������ָ������ָ��
	///ʹ�ö�������ܳ������
	cout << "Rect1���ܳ�Ϊ��" <<Rect1.circum()<< endl;  //ʹ�ö������Rect1���ܳ�
	cout << "Rect1�����Ϊ��" <<Rect1.area() << endl;
	cout << "Rect2���ܳ�Ϊ��" <<Rect2.circum() << endl;
	cout << "Rect2�����Ϊ��" <<Rect2.area() << endl;
	///ʹ�ö���ָ�����Rect2���ܳ������
	cout << "Rect2���ܳ�Ϊ��" << pRect->circum() << endl;
	cout << "Rect2�����Ϊ��" << pRect->area() << endl;
	system("pause");
}