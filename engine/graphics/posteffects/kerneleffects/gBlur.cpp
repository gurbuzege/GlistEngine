/*
 * gBlur.cpp
 *
 *  Created on: 2 Ara 2021
 *      Author: kayra
 */

#include <gBlur.h>

gBlur::gBlur() {
	float kernel[9] = {
			.0625f, .125f, .0625f,
			.125f,  .25f,  .125f,
			.0625f, .0125f, .0625f
	};
	float offset = 1.0f / 300.0f;
	shader->use();
	shader->setFloat("offset", offset);
	for(int i = 0; i < 9; i++) shader->setFloat("kernel[" + gToStr(i) + "]", kernel[i]);
}

gBlur::~gBlur() {
	// TODO Auto-generated destructor stub
}

void gBlur::use() {
	shader->use();
}

const std::string gBlur::getVertSrc() {
	return "";
}

const std::string gBlur::getFragSrc() {
	return "";
}
