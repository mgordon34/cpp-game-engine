#pragma once

#include <unordered_map>

namespace MattEngine {

	class InputManager
	{
	public:
		/*InputManager();
		~InputManager();*/
		static std::unordered_map<int, bool> _keyMap;

		static void pressKey(int key);
		static void releaseKey(int key);

		static bool isKeyPressed(int key);
	};

}
