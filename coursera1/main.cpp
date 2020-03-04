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
//создали свой тип данных человек (struct)
int main() {


	/*
	string str = "This is string";
	vector<string> vec = { "one","two","three" };

	map<string, int> name_to_value;//создали переменную "словарь" и сказали ей переводить из вектора слов в значение

	name_to_value["two"] = 2;
	name_to_value["one"] = 1;

	name_to_value["three"] = 3;
	cout << "one is"<<name_to_value["one"] << endl;//скомпилируется как one is 1
	cout << "two is"<<name_to_value["two"] << endl;//скомпилируется как two is 2
	cout << "three is"<<name_to_value["three"] << endl;//скомпилируется как three is 3



	vector<Person> Staff;
		Staff.push_back({ "Dmitryi" ,"Ivanov",25 });
		Staff.push_back({ "Nikita" ,"Zaitcev",44 });

		cout << Staff[0].name << endl;// вывелется dmitriy
		cout << Staff[1].surname << endl;// вывелется zaitcev
		*/

		//контейнеры-типы,хранящие больше 1 значения
	string s = "abcdefg";
	for (char c : s) {
		cout << c << ",";
	}
	cout << endl;
	vector<int> vec = { 1,5,3,4,5,6 };
	for (int i : vec) {        //новый способ цикла
		cout << i << ",";
	}

	cout << endl;
	int k = 0;
	/*
	for (auto i : vec) {//auto сам определяет тд не надо указывать у счетчика его   
		
		if (i == 5)
		{
			k = k + 1;//проверили сколько 5-к в массиве
			cout << "k=" << k<<endl;
		}
	
	}*/

	//но также можем легче сделать это подключив библиотеку <algorithm> и прописать следующее:
	k = count(begin(vec), end(vec), 5);
	cout << "k=" << k << endl;
	//также можем отсортировать вектор с пом-ю algorithm,пропишем
	sort(begin(vec), end(vec));
	for (int i : vec) {
		cout << i;
	}

	//могут сортировать не только инт а строки в порядке алфавита
	cout << endl;
	system("pause");
	return 0;
 }