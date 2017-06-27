#pragma once

#include <cstdint>
class DepthConfData
{
private:
	int16_t *depth;
	int16_t *conf;
	int width;
	int height;
public:
	DepthConfData(const int16_t *depthPtr, const int16_t *confPtr, int w, int h);
	~DepthConfData();
	int getHeight();
	int getWidth();
	int16_t getDepthValue(int i, int j);
	int16_t getConfValue(int i, int j);
};

