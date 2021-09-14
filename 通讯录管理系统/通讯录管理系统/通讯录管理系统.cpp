#include<iostream>
#include<string>
using namespace std;
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
	Person *next;
};
class Addressbooks
{
public:
	Person *personArray = NULL;
	int m_Size;
};
void addPerson(Addressbooks &abs) 
{
	int count;
	cout<<
	string name;
	cout << "������������" << endl;
	cin >> name;
	abs->personArray[abs->m_Size].m_Name = name;
	cout << "�������Ա�" << endl;
	cout << "1 ���� ��" << endl;
	cout << "2 ���� Ů" << endl;
	int sex = 0;
	while (true) {
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArray[abs->m_Size].m_Sex = sex;
			break;
		}
		cout << "������������������" << endl;
	}
	cout << "���������䣺" << endl;
	int age = 0;
	cin >> age;
	abs->personArray[abs->m_Size].m_Age = age;
	cout << "��������ϵ�绰��" << endl;
	string phone;
	cin >> phone;
	abs->personArray[abs->m_Size].m_Phone = phone;
	cout << "�������ͥסַ��" << endl;
	string address;
	cin >> address;
	abs->personArray[abs->m_Size].m_Addr = address;
	abs->m_Size++;
	cout << "��ӳɹ�" << endl;
	system("pause");
	system("cls");
	}
}
void showPerson(Addressbooks* abs) {
	if (abs->m_Size == 0) {
		cout << "��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "������ " << abs->personArray[i].m_Name << "\t";
			cout << "�Ա� " << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺 " << abs->personArray[i].m_Age << "\t";
			cout << "�绰�� " << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ�� " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}
int isExist(Addressbooks* abs,string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}
void deletePerson(Addressbooks* abs) {
	cout << "������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->m_Size - 1; i++) {
			abs->personArray[ret] = abs->personArray[ret + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(Addressbooks* abs) {
	cout << "��������Ҫ���ҵ���ϵ��:" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1) {
		cout << "���޴���" << endl;
	}
	else {
		cout << "������ " << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա� " << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺 " << abs->personArray[ret].m_Age << "\t";
		cout << "�绰�� " << abs->personArray[ret].m_Phone << "\t";
		cout << "��ַ�� " << abs->personArray[ret].m_Addr << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(Addressbooks* abs) {
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1) {
		cout << "���޴���" << endl;
	}
	else {
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "�������Ա�" << endl;
		cout << "1������" << endl;
		cout << "2����Ů" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else {
				cout << "��������,����������" << endl;
			}
		}
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		cout << "������סַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(Addressbooks* abs) {
	cout << "�Ƿ�ȷ�����ͨѶ¼��" << endl
		<< "0����ȷ��" << endl
		<< "1����ȡ��" << endl;
	int judge = 0;
	while (true) {
		cin >> judge;
		if (judge == 0) {
			abs->m_Size = 0;
			cout << "ͨѶ¼�����" << endl;
			break;
		}
		else {
			if (judge == 1) {
				break;
			}
			else {
				cout << "������������������" << endl;
			}
		}
	}
	system("pause");
	system("cls");
}
void showMenu() 
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
int main() 
{
	Addressbooks abs;
	abs.m_Size = 0;
	int select = 0;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //�����ϵ��
			addPerson(&abs);
			break;
		case 2: //��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3: //ɾ����ϵ��
			deletePerson(&abs);
			break;
			
		case 4: //������ϵ��
			findPerson(&abs);
			break;
		case 5: //�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6: //�����ϵ��
			cleanPerson(&abs);
			break;
		case 0: //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default: 
			break;
		}
	}
	system("pause");
	return 0;
}