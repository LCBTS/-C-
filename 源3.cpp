#include<iostream>
#include<string>
using namespace std;
//���һ�������������� ���   ������������������Ա���ͬ�Ĺ���
//���һ��Բ�������ʾ���������Բ�Ĺ�ϵ
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
			return "���Ǹ�������";
		}
		else
		{
			return "�ⲻ�Ǹ�������";
		}


	}
	void setchang1(float a, float b, float c) {

		chang = a;
		kuan = b;
		gao = c;
		if ((a == b) && (b == c))
		{
			cout << "���Ǹ�������" << endl;
		}
		else
		{
			cout << "�ⲻ�Ǹ�������" << endl;
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
			return "����Բ��";
		}
		 if (a < b)
		{
			return "����Բ��";
		}
		 if (a > b)
		{
			return "����Բ��";

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
	cout << "���Ϊ��" << mianj << endl;
	float tiji = c.gettiji();
	cout << "���Ϊ:" << tiji << endl;
	string aaa = c.duibi(30, 30, 30);
	cout << aaa << endl;

	yuan z;
	z.setyuanxin(500, 100);
	z.setydian(60, 100);
	z.setbanjin(10);
	string zhuangtai = z.getyuanxin();
	cout << "Ŀǰ����Բ�Ĺ�ϵ�ǣ�" << zhuangtai << endl;


}
