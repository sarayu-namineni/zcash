#include <string>
#include <map>

typedef uint64_t specID;
typedef uint64_t userID;
typedef struct {
	userID userId;
	std::string title;
} ZUZSpecParams;
typedef struct {
	specID specId;
	userID userId;
	std::string title;
} ZUZSpec;

class ZUZ
{
private:
	specID id = 0;

public: 
	std::map<specID, ZUZSpec> allSpecs; 

	specID getNewSpecID();

	specID createSpec(ZUZSpecParams);
};

extern ZUZ* zuz;