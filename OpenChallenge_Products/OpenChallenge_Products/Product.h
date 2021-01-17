#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
	int id;
	string description, manufacturer, price;
public:
	Product(){}
	Product(int id, string description, string manufacturer, string price) {
		this->id = id;
		this->description = description;
		this->manufacturer = manufacturer;
		this->price = price;
	}
	virtual void show() = 0;
	int getId() { return id; }
	string getDescription() { return description; }
	string getManufacturer(){ return manufacturer; }
	string getPrice() { return price; }
};