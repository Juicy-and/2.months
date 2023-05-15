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
		std::cout << "Введите номер месяца: ";
		std::cin >> a;
		month = static_cast<months>(a);
			switch (static_cast<months>(a))
			{
			case 1: tmp = "Январь";
				break;
			case 2: tmp = "Февраль";
				break;
			case 3: tmp = "Март";
				break;
			case 4: tmp = "Апрель";
				break;
			case 5: tmp = "Май";
				break;
			case 6: tmp = "Июнь";
				break;
			case 7: tmp = "Июль";
				break;
			case 8: tmp = "Август";
				break;
			case 9: tmp = "Сентябрь";
				break;
			case 10: tmp = "Октябрь";
				break;
			case 11: tmp = "Ноябрь";
				break;
			case 12: tmp = "Декабрь";
				break;
			default: 
			{
				if (a)
					std::cout << "Неправильный номер!" << std::endl;
				break; 
			}
			}
			if(a > 0 && a < 13)
			std::cout << tmp << std::endl;	
	} while (a != 0);
	std::cout << "До свидания";
}