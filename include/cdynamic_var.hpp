#include <map>
#include <string>
#include <vector>
#include <stdexcept> // для std::runtime_error

namespace stdx {

class cdynamic_var {
private:
    std::map<std::string, std::vector<int>> vars;

public:
    void create_array(const std::string& name, int size) {
        vars[name] = std::vector<int>(size);
    }

    std::vector<int>& get_array(const std::string& name) {
        auto it = vars.find(name);
        if (it == vars.end()) {
            throw std::runtime_error("Array '" + name + "' does not exist");
        }
        return it->second;
    }
};

}
