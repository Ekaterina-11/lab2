#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Product {
	string name, color;
	int size1;
public:
	Product();
	Product(string _name, string _color, int _size);
	Product(const Product &p);
	void print() const;
	void SetName(string name_);
	string GetName();
	void SetColor(string color_);
	string GetColor();
	bool SetSize(int size_);
	int GetSize();

    void operator++(); //создание оператора увеличения поля
    void operator--(); //создание оператора уменьшения поля
    Product operator = (const Product &product); //создание оператора присваивания
    bool operator == (const Product &product); //создание оператора равенства
    bool operator != (const Product &product); //создание оператора неравенства
    bool operator > (const Product &product); //создание оператора "больше"
    bool operator < (const Product &product); //создание оператора "меньше"
    friend ostream& operator << (ostream &iz, const Product &product); //создание оператора вывода
    friend istream& operator >> (istream &v, Product &product); //создание оператора ввода
};

#endif // LIBRARY_H_INCLUDED
