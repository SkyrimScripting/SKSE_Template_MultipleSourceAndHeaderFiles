#pragma once

namespace MyPlugin {

    class Dragon {
        std::string _name;

    public:
        explicit Dragon(const std::string& name) : _name(name) {}
        void PrintName();
    };
}