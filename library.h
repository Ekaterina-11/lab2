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
	void print();
	void SetName(string name_);
	string GetName();
	void SetColor(string color_);
	string GetColor();
	bool SetSize(int size_);
	int GetSize();

	void operator++();
    void operator--();
    Product operator = (const Product &product);
    bool operator == (const Product &product);
    bool operator != (const Product &product);
    bool operator > (const Product &product);
    bool operator < (const Product &product);
    friend ostream& operator << (ostream &iz, const Product &product);
    friend istream& operator >> (istream &v, Product &product);
};

#endif // LIBRARY_H_INCLUDED
