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
		TexturePacking packing;
		uint32_t width;
		uint32_t height;
		std::vector<uint8_t> data;
	};

	extern const PackedTexture packedFontTexture;

	uint8_t* UnpackTexture(const PackedTexture& texture);
}

#endif // PIXIE_UI_PACKED_TEXTURES