#include<iostream>
#include<string>
using namespace std;
//设计一个正方体计算体积 面积   并且有与其他正方体对比相同的功能
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
int main()
{
	zheng c;
	c.setchang1(20, 20, 20);
	
	float mianj = c.getmianji();
	cout << "面积为：" << mianj << endl;
	float tiji = c.gettiji();
	cout << "体积为:" << tiji << endl;
	string aaa=c.duibi(30, 30, 30);
	cout << aaa << endl;

}

