#include "error_handler.hpp"

namespace error {

	std::string key_used_err() {
		return "The key is already being used.";
	}

	std::string key_not_found_err() {
		return "The key you're trying to access does not exist.";
	}

	std::string key_is_valid() {
		return "The key is valid. The action was performed succesfully";
	}

	std::string key_found() {
		return "The value associated to this key is valid";
	}

	std::string doc_parse_err() {
		return "The data could not be parsed.";
	}

}



