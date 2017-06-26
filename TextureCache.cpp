#include "TextureCache.h"

#include <iostream>

#include "ImageLoader.h"

namespace MattEngine {

	TextureCache::TextureCache()
	{
	}


	TextureCache::~TextureCache()
	{
	}

	GLuint TextureCache::getTexture(const char *filepath) {

		auto map_iter = _textureMap.find(filepath);

		if (map_iter == _textureMap.end()) {
			GLuint newTexture = ImageLoader::loadPicture(filepath);

			_textureMap.insert(std::make_pair(filepath, newTexture));

			std::cout << "made new texture" << std::endl;
			return newTexture;
		}

		std::cout << "loaded old texture" << std::endl;
		return map_iter->second;

	}

}