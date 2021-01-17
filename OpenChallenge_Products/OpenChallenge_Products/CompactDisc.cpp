#include "CompactDisc.h"

void CompactDisc::show() {
	cout << "--- 상품ID : " << getId() << endl;
	cout << "상품설명 : " << getDescription() << endl;
	cout << "생산자 : " << getManufacturer() << endl;
	cout << "가격 : " << getPrice() << endl;
	cout << "앨범제목 : " << AlbumTitle << endl;
	cout << "가수 : " << singer << endl;
}