#include<iostream>
#include<string>
using namespace std;
//设计一个正方体计算体积 面积   并且有与其他正方体对比相同的功能
//设计一个圆类可以显示点的坐标与圆的关系
class zheng {

public:
	float getmianji() {

		return chang * gao * 2 + kuan * gao * 2 + chang * kuan * 2;

	}
	float gettiji() {

		return  chang * kuan * gao;

	}
	string duibi(float a, float b, float c) {

		if ((a == chang) && (b == kuan) && (c == gao))
		{
			return "这是个正方体";
		}
		else
		{
			return "这不是个正方体";
		}


	}
	void setchang1(float a, float b, float c) {

		chang = a;
		kuan = b;
		gao = c;
		if ((a == b) && (b == c))
		{
			cout << "这是个正方体" << endl;
		}
		else
		{
			cout << "这不是个正方体" << endl;
		}


	}


private:
	float chang;
	float kuan;
	float gao;




};
class yuan {

public:
	void setyuanxin(int a, int b) {
		yuaxingzuobiax = a;
		yuaxingzuobiay = b;

	}
	void setydian(int a, int b) {
		dianx = a;
		diany = b;

	}
	void setbanjin(int a) {

		banjing = a;

	}
	string getyuanxin()
	{
		long a = (dianx - yuaxingzuobiax) * (dianx - yuaxingzuobiax) + (diany - yuaxingzuobiay) * (diany - yuaxingzuobiay);
			long b = a * a;
		if (a == b)
		{
			return "点在圆上";
		}
		 if (a < b)
		{
			return "点在圆内";
		}
		 if (a > b)
		{
			return "点在圆外";

		}



	}



private:


	int yuaxingzuobiay;
	int yuaxingzuobiax;
	int dianx;
	int diany;
	int banjing;



};
int main()
{
	zheng c;
	c.setchang1(20, 20, 20);
	float mianj = c.getmianji();
	cout << "面积为：" << mianj << endl;
	float tiji = c.gettiji();
	cout << "体积为:" << tiji << endl;
	string aaa = c.duibi(30, 30, 30);
	cout << aaa << endl;

	yuan z;
	z.setyuanxin(500, 100);
	z.setydian(60, 100);
	z.setbanjin(10);
	string zhuangtai = z.getyuanxin();
	cout << "目前点与圆的关系是：" << zhuangtai << endl;


}
