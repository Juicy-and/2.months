#include <iostream>
#include <string>

enum months
{
	january = 1,
	february,
	march,
	april,
	may,
	june,
	jule,
	august,
	september,
	october,
	november,
	december
};
int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a;
	std::string tmp;
	months month = months::january;
	do {
		std::cout << "������� ����� ������: ";
		std::cin >> a;
		month = static_cast<months>(a);
			switch (static_cast<months>(a))
			{
			case 1: tmp = "������";
				break;
			case 2: tmp = "�������";
				break;
			case 3: tmp = "����";
				break;
			case 4: tmp = "������";
				break;
			case 5: tmp = "���";
				break;
			case 6: tmp = "����";
				break;
			case 7: tmp = "����";
				break;
			case 8: tmp = "������";
				break;
			case 9: tmp = "��������";
				break;
			case 10: tmp = "�������";
				break;
			case 11: tmp = "������";
				break;
			case 12: tmp = "�������";
				break;
			default: 
			{
				if (a)
					std::cout << "������������ �����!" << std::endl;
				break; 
			}
			}
			if(a > 0 && a < 13)
			std::cout << tmp << std::endl;	
	} while (a != 0);
	std::cout << "�� ��������";
}