#include "InputManager.h"

namespace MattEngine {

	//InputManager::InputManager()
	//{
	//}


	//InputManager::~InputManager()
	//{
	//}

	std::unordered_map<int, bool> InputManager::_keyMap;

	void InputManager::pressKey(int key) {
		_keyMap[key] = true;
	}

	void InputManager::releaseKey(int key) {
		_keyMap[key] = false;
	}

	bool InputManager::isKeyPressed(int key) {
		auto it = _keyMap.find(key);
		if (it == _keyMap.end()) {
			return false;
		}
		return it->second;
	}

}