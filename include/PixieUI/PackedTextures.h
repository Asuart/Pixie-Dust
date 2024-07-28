#ifndef PIXIE_UI_PACKED_TEXTURES
#define PIXIE_UI_PACKED_TEXTURES

#include <cstdint>
#include <vector>

namespace PixieUI {

	enum class TexturePacking : uint32_t {
		Greyscale = 0,
		RunlengthGreyscale
	};

	struct PackedTexture {
		const TexturePacking packing;
		const uint32_t width;
		const uint32_t height;
		const std::vector<uint8_t> data;
		PackedTexture(TexturePacking packing, uint32_t width, uint32_t height, std::vector<uint8_t> data) : packing(packing), width(width), height(height), data(data) {};
	};

	inline const PackedTexture packedFontTexture{
		TexturePacking::RunlengthGreyscale,
		(uint32_t)60, (uint32_t)80,
		std::vector<uint8_t>({ 8, 0, 1, 255, 4, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 4, 0, 1, 255, 3, 0, 2, 255, 5, 0, 2, 255, 4, 0, 2, 255, 6, 0, 1, 255, 3, 0, 1, 255, 12, 0, 1, 255, 4, 0, 1, 255, 1, 0, 1, 255, 2, 0, 5, 255, 2, 0, 4, 255, 1, 0, 2, 255, 2, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 4, 0, 1, 255, 5, 0, 1, 255, 5, 0, 1, 255, 11, 0, 1, 255, 4, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 6, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 4, 0, 1, 255, 5, 0, 1, 255, 7, 0, 1, 255, 10, 0, 1, 255, 10, 0, 1, 255, 1, 0, 1, 255, 3, 0, 3, 255, 4, 0, 1, 255, 4, 0, 2, 255, 10, 0, 1, 255, 7, 0, 1, 255, 10, 0, 1, 255, 9, 0, 5, 255, 3, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 4, 0, 1, 255, 2, 0, 2, 255, 8, 0, 1, 255, 7, 0, 1, 255, 21, 0, 1, 255, 1, 0, 1, 255, 2, 0, 4, 255, 2, 0, 1, 255, 2, 0, 2, 255, 1, 0, 1, 255, 2, 0, 1, 255, 10, 0, 1, 255, 5, 0, 1, 255, 11, 0, 1, 255, 17, 0, 1, 255, 6, 0, 2, 255, 2, 0, 2, 255, 1, 0, 1, 255, 10, 0, 1, 255, 3, 0, 1, 255, 66, 0, 1, 255, 34, 0, 3, 255, 4, 0, 1, 255, 4, 0, 3, 255, 2, 0, 5, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 25, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 2, 255, 3, 0, 1, 255, 3, 0, 1, 255, 4, 0, 1, 255, 3, 0, 3, 255, 4, 0, 1, 255, 24, 0, 1, 255, 2, 0, 1, 255, 2, 0, 2, 255, 3, 0, 1, 255, 6, 0, 1, 255, 4, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 5, 255, 7, 0, 5, 255, 9, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 5, 0, 1, 255, 6, 0, 1, 255, 4, 0, 1, 255, 5, 0, 1, 255, 4, 0, 2, 255, 16, 0, 1, 255, 4, 0, 2, 255, 2, 0, 1, 255, 3, 0, 1, 255, 4, 0, 1, 255, 4, 0, 1, 255, 3, 0, 1, 255, 9, 0, 1, 255, 5, 0, 1, 255, 10, 0, 2, 255, 3, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 2, 0, 3, 255, 2, 0, 5, 255, 2, 0, 3, 255, 15, 0, 1, 255, 11, 0, 2, 255, 10, 0, 3, 255, 83, 0, 1, 255, 2, 0, 5, 255, 2, 0, 3, 255, 2, 0, 5, 255, 2, 0, 3, 255, 3, 0, 3, 255, 17, 0, 1, 255, 10, 0, 2, 255, 2, 0, 1, 255, 5, 0, 1, 255, 9, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 2, 255, 4, 0, 2, 255, 5, 0, 1, 255, 10, 0, 1, 255, 1, 0, 1, 255, 2, 0, 4, 255, 2, 0, 4, 255, 5, 0, 1, 255, 3, 0, 3, 255, 2, 0, 1, 255, 3, 0, 1, 255, 2, 0, 2, 255, 4, 0, 2, 255, 4, 0, 1, 255, 4, 0, 5, 255, 1, 0, 5, 255, 5, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 2, 0, 4, 255, 13, 0, 1, 255, 14, 0, 1, 255, 2, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 5, 0, 1, 255, 2, 0, 2, 255, 4, 0, 2, 255, 4, 0, 1, 255, 4, 0, 5, 255, 4, 0, 1, 255, 3, 0, 3, 255, 3, 0, 3, 255, 4, 0, 1, 255, 4, 0, 3, 255, 3, 0, 3, 255, 3, 0, 2, 255, 5, 0, 1, 255, 5, 0, 1, 255, 52, 0, 1, 255, 7, 0, 1, 255, 69, 0, 1, 255, 5, 0, 3, 255, 3, 0, 3, 255, 3, 0, 3, 255, 2, 0, 4, 255, 3, 0, 3, 255, 2, 0, 3, 255, 3, 0, 5, 255, 1, 0, 5, 255, 2, 0, 3, 255, 4, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 5, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 4, 0, 1, 255, 6, 0, 1, 255, 5, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 4, 255, 2, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 1, 0, 4, 255, 2, 0, 4, 255, 2, 0, 1, 255, 9, 0, 1, 255, 4, 0, 1, 255, 3, 0, 2, 255, 1, 0, 1, 255, 1, 0, 5, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 5, 0, 1, 255, 5, 0, 1, 255, 1, 0, 3, 255, 4, 0, 1, 255, 4, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 5, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 9, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 4, 255, 3, 0, 3, 255, 2, 0, 3, 255, 3, 0, 5, 255, 1, 0, 1, 255, 6, 0, 3, 255, 3, 0, 1, 255, 6, 0, 1, 255, 4, 0, 3, 255, 104, 0, 1, 255, 3, 0, 1, 255, 2, 0, 3, 255, 4, 0, 3, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 3, 255, 2, 0, 4, 255, 3, 0, 3, 255, 2, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 6, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 5, 0, 2, 255, 1, 0, 2, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 5, 255, 3, 0, 1, 255, 6, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 5, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 2, 255, 2, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 6, 0, 1, 255, 2, 0, 3, 255, 3, 0, 1, 255, 5, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 4, 255, 2, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 2, 0, 2, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 5, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 3, 0, 1, 255, 2, 0, 3, 255, 3, 0, 2, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 5, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 3, 255, 2, 0, 1, 255, 6, 0, 2, 255, 1, 0, 1, 255, 121, 0, 4, 255, 3, 0, 4, 255, 1, 0, 5, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 5, 255, 2, 0, 2, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 7, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 3, 0, 1, 255, 5, 0, 1, 255, 2, 0, 1, 255, 4, 0, 1, 255, 3, 0, 1, 255, 2, 0, 3, 255, 4, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 4, 0, 1, 255, 1, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 4, 0, 4, 255, 6, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 5, 0, 1, 255, 5, 0, 1, 255, 4, 0, 1, 255, 4, 0, 1, 255, 3, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 4, 0, 1, 255, 4, 0, 1, 255, 5, 0, 1, 255, 4, 0, 1, 255, 3, 0, 1, 255, 1, 0, 4, 255, 4, 0, 1, 255, 4, 0, 3, 255, 4, 0, 1, 255, 4, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 5, 255, 2, 0, 1, 255, 59, 0, 2, 255, 71, 0, 2, 255, 4, 0, 1, 255, 9, 0, 1, 255, 11, 0, 1, 255, 15, 0, 1, 255, 7, 0, 1, 255, 8, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 9, 0, 1, 255, 5, 0, 2, 255, 3, 0, 1, 255, 6, 0, 4, 255, 5, 0, 1, 255, 2, 0, 3, 255, 3, 0, 1, 255, 7, 0, 1, 255, 2, 0, 1, 255, 3, 0, 1, 255, 8, 0, 2, 255, 6, 0, 1, 255, 2, 0, 4, 255, 2, 0, 1, 255, 6, 0, 4, 255, 1, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 6, 0, 1, 255, 21, 0, 3, 255, 2, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 1, 0, 5, 255, 4, 0, 1, 255, 5, 0, 1, 255, 20, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 5, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 9, 0, 1, 255, 4, 0, 1, 255, 21, 0, 4, 255, 1, 0, 4, 255, 3, 0, 4, 255, 2, 0, 4, 255, 2, 0, 4, 255, 9, 0, 2, 255, 8, 0, 5, 255, 99, 0, 2, 255, 8, 0, 1, 255, 7, 0, 1, 255, 6, 0, 1, 255, 2, 0, 1, 255, 5, 0, 2, 255, 23, 0, 1, 255, 2, 0, 1, 255, 2, 0, 3, 255, 2, 0, 1, 255, 17, 0, 1, 255, 6, 0, 1, 255, 4, 0, 2, 255, 1, 0, 1, 255, 2, 0, 4, 255, 3, 0, 3, 255, 3, 0, 1, 255, 4, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 6, 0, 2, 255, 5, 0, 2, 255, 2, 0, 1, 255, 2, 0, 1, 255, 3, 0, 1, 255, 4, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 3, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 4, 255, 4, 0, 1, 255, 6, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 4, 0, 1, 255, 4, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 1, 255, 5, 0, 4, 255, 1, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 6, 0, 1, 255, 2, 0, 2, 255, 5, 0, 1, 255, 4, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 1, 255, 8, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 3, 255, 2, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 1, 0, 2, 255, 2, 0, 3, 255, 3, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 3, 255, 8, 0, 4, 255, 15, 0, 2, 255, 153, 0, 4, 255, 3, 0, 4, 255, 1, 0, 1, 255, 1, 0, 2, 255, 3, 0, 4, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 2, 255, 2, 0, 1, 255, 1, 0, 1, 255, 5, 0, 5, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 6, 0, 3, 255, 4, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 1, 0, 4, 255, 3, 0, 4, 255, 1, 0, 1, 255, 9, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 3, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 1, 0, 1, 255, 3, 0, 4, 255, 1, 0, 1, 255, 9, 0, 1, 255, 1, 0, 1, 255, 5, 0, 4, 255, 5, 0, 2, 255, 2, 0, 3, 255, 4, 0, 1, 255, 4, 0, 1, 255, 1, 0, 1, 255, 2, 0, 1, 255, 3, 0, 1, 255, 5, 0, 1, 255, 1, 0, 1, 255, 9, 0, 1, 255, 44, 0, 3, 255, 70, 0, 1, 255, 5, 0, 1, 255, 5, 0, 1, 255, 4, 0, 2, 255, 1, 0, 1, 255, 31, 0, 5, 255, 2, 0, 1, 255, 6, 0, 1, 255, 6, 0, 1, 255, 2, 0, 1, 255, 2, 0, 1, 255, 35, 0, 1, 255, 3, 0, 1, 255, 6, 0, 1, 255, 6, 0, 1, 255, 40, 0, 1, 255, 3, 0, 1, 255, 7, 0, 1, 255, 7, 0, 1, 255, 38, 0, 1, 255, 5, 0, 1, 255, 6, 0, 1, 255, 6, 0, 1, 255, 38, 0, 5, 255, 2, 0, 1, 255, 6, 0, 1, 255, 6, 0, 1, 255, 46, 0, 1, 255, 5, 0, 1, 255, 5, 0, 1, 255, 99, 0 })
	};

	uint8_t* UnpackTexture(const PackedTexture& texture);
}

#endif // PIXIE_UI_PACKED_TEXTURES