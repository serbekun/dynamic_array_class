#include <map>
#include <string>
#include <vector>

namespace stdx {

class cdynamic_var {
private:
    std::map<std::string, std::vector<int>> vars;

public:
    void create_array(const std::string& name, int size) {
        vars[name] = std::vector<int>(size);
    }

    std::vector<int>& get_array(const std::string& name) {
        return vars[name];
    }
};

}
