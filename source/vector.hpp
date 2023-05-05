#pragma once
#include <iostream>
#include <initializer_list>

class Vector{
private:
    int* data;
    size_t size;
    size_t capacity;

private:
    void resize();
    void copyFrom(const Vector& other);
    void free();
    void swap(int& first, int& second);
public:
    Vector();
    Vector(const Vector&);
    Vector& operator=(const Vector&);
    ~Vector();

    Vector(int* newData, size_t newSize, size_t newCapacity);

    void pushBack(const int number);

    int& operator[](size_t index);

    Vector(std::initializer_list<int> initList);
    // Vector& operator=(int* array);

    Vector operator+(const Vector&);
     //(adds new vector data to our vector)
    Vector& operator+=(const Vector&);
    //(adds new vector data to our vector and returns our vector reference)
    bool operator==(const Vector&) const;
    //(checks if vectors are same)
    void pop();
    //(removes last element)
    void pushFront(const int number);
    
    void popFront();

    void sort();

    friend std::ostream& operator<<(std::ostream& output, const Vector& vector);
};