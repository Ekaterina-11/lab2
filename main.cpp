#include "library.h"

using namespace std;

int main() {
    string name_, color_;
    int size_;

	Product p;
	cout << "Dannie producta: " << endl;
	p.print();
	cout << "\nVvedite novie dannie producta:"<<endl;
	cout << "Nazvanie producta: ";
	cin >> name_;
	p.SetName(name_);
	cout << "Cvet producta: ";
	cin >> color_;
	p.SetColor(color_);
	cout << "Kolichestvo producta: ";
	cin >> size_;
	p.SetSize(size_);
	cout << "\nNovie dannie producta: " << endl;
	cout << "Nazvanie producta: " << p.GetName() << "\nCvet producta: " << p.GetColor() << "\nKolichestvo producta: " << p.GetSize() << endl;
	Product p2("Karandash","Prostoy",1000);
	cout << "\nDannie vtorogo producta: " << endl;
	p2.print();
	cout << "\nDannie tretiego (copy) producta: " << endl;
	Product p3 = p2;
	p3.print();

    cout << endl << endl;

    p.operator++(); //вызов оператора увеличения поля
    cout << "Operator++" << endl;
    p.print();
    cout << endl;

    p.operator--(); //вызов оператора уменьшения поля
    cout << "Operator--" << endl;
    p.print();
    p3.SetName("grechka");
    p3.SetColor("buriy");
    p3.SetSize(500);
    cout << endl;

    cout << "Operator=" << endl; //вызов оператора присваивания
    p3.print();
    cout << endl;
    p3 = p;
    p3.print();
    cout << endl;
    cout << "Nachalniy object: " << endl;
    p.print();
    cout << endl;
    cout << "Copy object: " << endl;
    p3.print();
    cout << endl;

    cout << "Operator==" << endl; //вызов оператора равенства
    bool obj = p == p3;
    cout << "bool is " << obj << endl;
    cout << endl;

    cout << "Operator!=" << endl; //вызов оператора неравенства
    obj = p != p3;
    cout << "bool is " << obj << endl;
    cout << endl;

    cout << "Operator> (Size) " << endl; //вызов оператора "больше"
    obj = p > p3;
    cout << "bool is " << obj << endl;
    cout << endl;

    cout << "Operator< (Size) " << endl; //вызов оператора "меньше"
    obj = p < p3;
    cout << "bool is " << obj << endl;
    cout << endl;

    cout << "Operator<< (Vvedenniy object) " << endl; //вызов оператора ввода
    cout << p << endl << endl;

    cout << "Operator>> (Izmenenniy object) " << endl;
    cout << "Vvedite dannie:\n" << "Nazvanie: Cvet: Kolichestvo:" << endl; //вызов оператора вывода
    cin >> p;
    cout << endl << "Izmenenniy:" << endl;
    p.print();

	return 0;
}
