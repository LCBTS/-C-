#include<iostream>
#include<string>
using namespace std;
//���һ�������������� ���   ������������������Ա���ͬ�Ĺ���
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
int main()
{
	zheng c;
	c.setchang1(20, 20, 20);
	
	float mianj = c.getmianji();
	cout << "���Ϊ��" << mianj << endl;
	float tiji = c.gettiji();
	cout << "���Ϊ:" << tiji << endl;
	string aaa=c.duibi(30, 30, 30);
	cout << aaa << endl;

}

