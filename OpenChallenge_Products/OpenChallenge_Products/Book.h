#include "Product.h"

class Book :public Product {
	string ISBN, author, BookTitle;
public:
	Book(int id, string description, string manufacturer, string price, string ISBN, string author, string title) :Product(id, description, manufacturer, price) {
		this->ISBN = ISBN; 
		this->author = author;
		this->BookTitle = BookTitle;
	}
	void show();
	string getISBN() { return ISBN; }
	string getAuthor() { return author; }
	string getBookTitle() { return BookTitle; }
};