#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


struct Person {
	string name;
	string surname;
	int age;
};
//������� ���� ��� ������ ������� (struct)
int main() {


	/*
	string str = "This is string";
	vector<string> vec = { "one","two","three" };

	map<string, int> name_to_value;//������� ���������� "�������" � ������� �� ���������� �� ������� ���� � ��������

	name_to_value["two"] = 2;
	name_to_value["one"] = 1;

	name_to_value["three"] = 3;
	cout << "one is"<<name_to_value["one"] << endl;//�������������� ��� one is 1
	cout << "two is"<<name_to_value["two"] << endl;//�������������� ��� two is 2
	cout << "three is"<<name_to_value["three"] << endl;//�������������� ��� three is 3



	vector<Person> Staff;
		Staff.push_back({ "Dmitryi" ,"Ivanov",25 });
		Staff.push_back({ "Nikita" ,"Zaitcev",44 });

		cout << Staff[0].name << endl;// ��������� dmitriy
		cout << Staff[1].surname << endl;// ��������� zaitcev
		*/

		//����������-����,�������� ������ 1 ��������
	string s = "abcdefg";
	for (char c : s) {
		cout << c << ",";
	}
	cout << endl;
	vector<int> vec = { 1,5,3,4,5,6 };
	for (int i : vec) {        //����� ������ �����
		cout << i << ",";
	}

	cout << endl;
	int k = 0;
	/*
	for (auto i : vec) {//auto ��� ���������� �� �� ���� ��������� � �������� ���   
		
		if (i == 5)
		{
			k = k + 1;//��������� ������� 5-� � �������
			cout << "k=" << k<<endl;
		}
	
	}*/

	//�� ����� ����� ����� ������� ��� ��������� ���������� <algorithm> � ��������� ���������:
	k = count(begin(vec), end(vec), 5);
	cout << "k=" << k << endl;
	//����� ����� ������������� ������ � ���-� algorithm,��������
	sort(begin(vec), end(vec));
	for (int i : vec) {
		cout << i;
	}

	//����� ����������� �� ������ ��� � ������ � ������� ��������
	cout << endl;
	system("pause");
	return 0;
 }