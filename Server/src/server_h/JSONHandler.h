#ifndef SERVER_H_JSONHANDLER_H_
#define SERVER_H_JSONHANDLER_H_
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <string>
#include "../data_structs/LinkedList.h"
#include "../memory_h/MemoryHandler.h"

class JSON_Handler {
	typedef rapidjson::Document::AllocatorType& Alloc;
	typedef rapidjson::Writer<rapidjson::StringBuffer> Writer;
public:
	JSON_Handler();
	static std::string build_msg( bool error, std::string msg );
	static std::string process_deleted( const char* json );
	static std::string build_get_msg( const char* key, const char* value, int size );
	static std::string build_set_msg( Linked_List< char* > keys, Linked_List< char* > values );
	static rapidjson::Value& get_value( const char* json, const char* json_key );
	static Linked_List < char* > process_array( const char* data, const char* arr_key );
	virtual ~JSON_Handler();
};

#endif /* SERVER_H_JSONHANDLER_H_ */
