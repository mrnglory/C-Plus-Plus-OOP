#include "Book.h"

class ConversationBook :public Book {
	string language;
public:
	ConversationBook(int id, string description, string manufacturer, string price, string ISBN, string author, string BookTitle, string language) :Book(id, description, manufacturer, price, ISBN, author, BookTitle) {
		this->language = language;
	}
	void show();
};