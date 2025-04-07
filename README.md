# cdynamic_var

`cdynamic_var` is a simple C++ header-only class that allows you to create and manage named dynamic arrays of integers.

## Features

- Create dynamic integer arrays by name
- Access and modify arrays using references

## Example Usage

```cpp
#include "cdynamic_var.hpp"
#include <iostream>

int main() {
    stdx::cdynamic_var vars;
    vars.create_array("numbers", 5);
    vars.get_array("numbers")[0] = 42;
    std::cout << vars.get_array("numbers")[0] << std::endl;
    return 0;
}
```

## License

This project is licensed under the MIT License.
