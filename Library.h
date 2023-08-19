#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Reader.h"
#include "Book.h"

class Library {
    std::map<Reader, std::vector<int>> readers;
    std::vector<Book> books;
public:
    void add_reader(Reader& current_reader) {
        readers[current_reader] = {};
    }
    void add_book(Book& current_book) {
        books.push_back(current_book);
    }
    void assigns_to_reader(const Reader& reader, int id_book) {
        for (auto const& x : readers) {
            for (int i = 0; i < x.second.size(); ++i) {
                if (x.second[i] == id_book) {
                    throw std::runtime_error("Errooor!");
                }
            } 
        }
        readers[reader].push_back(id_book);
    }
    void print_Library_readers() const {
        for (auto const& x : readers) {
            std::cout << "------Raders-------" << std::endl;
            std::cout << "-------------" << std::endl;
            std::cout << "id: " << x.first.get_id() << ", name: " << x.first.get_name() << std::endl;
            for (auto const& y : x.second) {
                std::cout << "\t" << y << " ";
            }
            std::cout << "-------------" << std::endl;
        }
    }
    void print_Library_books() const {
        for (auto const& x : books) {
            std::cout << "------Books-------" << std::endl;
            std::cout << "-------------" << std::endl;
            std::cout << "id: " << x.get_id() << ", name: " << x.get_name() << std::endl;
            std::cout << "-------------" << std::endl;
        }
    }
};
