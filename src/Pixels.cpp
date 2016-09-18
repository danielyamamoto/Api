#include "Pixels.h"

void Pixels::putPixel(int x, int y, int r, int g, int b) {
	if (x <= ofGetWidth() && x >= 0) { // Protege al arreglo de pixeles que se salgan del mapa de bits en X
		if (y <= ofGetHeight() && y >= 0) { // Protege al arreglo de pixeles que se salgan del mapa de bits en Y
			pix.setColor(x, y, (r, g, b)); // Inicialización del putpixel
		} // y
	} // x
}

void Pixels::getPixel() {
	tex.loadData(pix); // Carga los pixeles que serán del bitmap
}

void Pixels::init() {
	pix.allocate(1024, 768, OF_PIXELS_RGB); // Crea espacio en la memoria
	tex.allocate(1024, 768, GL_RGB); // Canvas
}

void Pixels::draw() {
	tex.draw(0, 0); // Permite dibujar el bitmap
}
