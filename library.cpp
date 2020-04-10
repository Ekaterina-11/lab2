#include "library.h"

void Product::print() {
	cout <<"Nazvaniye producta: "<< name <<"\nCvet producta: "<< color <<"\nKolichestvo producta: "<< size1 << endl;
}

void Product::SetName(string name_) {
	name = name_;
}

void Product::SetColor(string color_) {
	color = color_;
}

bool Product::SetSize(int size_){
    if (size_ < 0)
    return false;
    else
    size1 = size_;
    return true;
}

Product::Product() {
	name = "Skrepka";
	color = "Chrom";
	size1 = 200;
}

Product::Product(string _name, string _color, int _size) {
	name = _name;
	color = _color;
	if (!SetSize(_size))
    size1 = 0;
}

Product::Product(const Product &p) {
	name = p.name;
	color = p.color;
	size1 = p.size1;
}

string Product::GetName() {
    return name;
}
string Product::GetColor() {
    return color;
}
int Product::GetSize() {
    return size1;
}


void Product::operator++(){ //оператор увеличения поля size1
    this->size1++;
}
void Product::operator--(){ //оператор уменьшения поля size1
    this->size1--;
}
bool Product::operator == (const Product &product){ //оператор равенства
    return ((this->size1 == product.size1) && (this->name == product.name) && (this->color == product.color)); 
}
bool Product::operator != (const Product &product){ //оператор неравенства
    return !((this->size1 == product.size1) && (this->name == product.name) && (this->color == product.color)); 
}
bool Product::operator > (const Product &product){ //оператор "больше"
    return (this->size1 > product.size1);
}
bool Product::operator < (const Product &product){ //оператор "меньше"
    return (this->size1 < product.size1);
}
ostream& operator << (ostream &iz, const Product &product){ //оператор вывода
    iz << "Name: " << product.name << endl;
    iz << "Color: " << product.color << endl;
    iz << "Size: " << product.size1 << endl;
    return iz;
}
istream& operator >> (istream &v, Product &product){ //оператор ввода
    v >> product.name;
    v >> product.color;
    v >> product.size1;
    return  v;
}
Product Product::operator = (const Product &product){ //оператор присваивания
    this->name = product.name;
    this->color = product.color;
    return *this;
}
