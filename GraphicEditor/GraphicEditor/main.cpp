#pragma once
#include "GraphicEditor.h"

int main() {
	GraphicEditor* editor = new GraphicEditor;
	editor->ui();
	delete editor;
}