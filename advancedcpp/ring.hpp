//
//  ring.hpp
//  advancedcpp
//
//  Created by 小林和宏 on 6/18/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#ifndef ring_hpp
#define ring_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

template<class T>
class ring {
private:
    int m_pos;
    int m_size;
    T *m_values;
    
public:
    class iterator;
    
public:
    ring(int size): m_pos(0), m_size(size), m_values(NULL) {
        m_values = new T[size];
    }
    
    ~ring() {
        delete [] m_values;
    }
    
    int size() {
        return m_size;
    }
    
    iterator begin() {
        return iterator(0, *this);
    }
    
    iterator end() {
        return iterator(m_size, *this);
    }
    
    void add(T value) {
//        m_values[m_pos] = value;
//        m_pos++;
        m_values[m_pos++] = value;  // post addition
        
        if(m_pos == m_size) {
            m_pos = 0;
        }
    }
    
    T &get(int pos) {
        return m_values[pos];
    }
};

template<class T>
class ring<T>::iterator {
private:
    int m_pos;
    ring &m_ring;
public:
//    void print() {
//        cout << "Hello from iterator: " << T() << endl;
//    }
    iterator(int pos, ring &aRing): m_pos(pos), m_ring(aRing) {
        
    }
    
    iterator &operator++(int) {  //postfix
        m_pos++;
        return *this;
    }

    iterator &operator++() {  //prefix
        m_pos++;
        return *this;
    }
    
    T &operator*() {
        return m_ring.get(m_pos);
    }
    
    bool operator!=(const iterator &other) {
        return m_pos != other.m_pos;
    }

    
};


#endif /* ring_hpp */
