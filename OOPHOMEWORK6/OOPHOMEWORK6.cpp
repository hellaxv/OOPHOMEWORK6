#include <iostream>

using namespace std;

void obzac()
{
	cout << "\n\n//====================================HomeWork====================================//\n\n";
}
void obzac1()
{
	cout << "\n\n//======================================END======================================//\n\n";
}
void obzac2()
{
	cout << "\n\n//-------------------------------------------------------------------------------//\n\n";
}


/*HomeWork1
Создать программу, которая считывает целое число типа int. 
И поставить «защиту от дурака»: если пользователь вводит что-то кроме одного целочисленного значения, 
нужно вывести сообщение об ошибке и предложить ввести число еще раз. 
Пример неправильных введенных строк:
1. rbtrb
2. nj34njkn
3. 1n
*/
void hw1()
{
	int num;

	cout << "Enter your number: ";

	while (true)
	{
		cin >> num;

		if (cin.good() && cin.peek() == '\n')
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
		cin.clear();
		cerr << "STOP! Try again: ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cout << "your number is: " << num << endl;
}

/*HomeWork2
Создать собственный манипулятор endll для стандартного потока вывода, 
который выводит два перевода строки и сбрасывает буфер.
*/
template<typename _CharT, typename _Traits>
inline basic_ostream<_CharT, _Traits>&
endll(basic_ostream<_CharT, _Traits>& os)
{
	return flush((os.put(os.widen('\n'))).put(os.widen('\n')));
}
void hw2()
{
	cout << "Hello" << endll << "world";
}


int main()
{
	{
		obzac();
		hw1();
		obzac2();
	}

	{
		obzac();
		hw2();
		obzac1();
	}
	return 0;
}