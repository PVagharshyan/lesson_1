#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>

class Book {
    std::string m_tittle;
    static int m_id;
public:
    Book(const std::string& tittle = "ananun")
        : m_tittle{ tittle }
    {
        ++(Book::m_id);
    }
    std::string get_name() const{
        return m_tittle;
    }
    static int get_id() {
        return m_id;
    }
    void set_name(const std::string& tittle) {
        m_tittle = tittle;
    } 
};

