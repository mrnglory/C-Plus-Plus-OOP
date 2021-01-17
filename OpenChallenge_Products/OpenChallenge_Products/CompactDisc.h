#include "Product.h"

class CompactDisc :public Product {
	string AlbumTitle, singer;
public:
	CompactDisc(int id, string description, string manufacturer, string price, string AlbumTitle, string singer) :Product(id, description, manufacturer, price) {
		this->AlbumTitle = AlbumTitle;
		this->singer = singer;
	}
	void show();
};