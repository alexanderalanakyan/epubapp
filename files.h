//
// Created by nonedev on 4/28/2026.
//

#ifndef T_FILES_H
#define T_FILES_H

#endif //T_FILES_H

#include <filesystem>
#include <iostream>
#include <string>


namespace fs = std::filesystem;

inline void relativeToAbsolute(std::string& x) {
    fs::path p = fs:: canonical(fs:: path(x));
    x=p.string();
    std::cout << x << ";" << std::endl;
}

inline void readFiles(fs::path path) {}