#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>

class Reader {
    std::string m_name;
    static int m_id;
public:
    Reader(const std::string& name = "ananun")
        : m_name{ name }
    {
        ++(Reader::m_id);
    }
    bool operator<(const Reader& obj) const { return true; }
    std::string get_name() const{
        return m_name;
    }
    static int get_id() {
        return m_id;
    }
    void set_name(const std::string& name) {
        m_name = name;
    } 
};
