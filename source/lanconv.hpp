//
//  lanconv.hpp
//  landb
//
//  Created by René Descartes Domingos Muala on 27/10/20.
//  Copyright © 2020 landia (René Muala). All rights reserved.
//

#ifndef lanconv_hpp
#define lanconv_hpp

#include <string>
#include <string_view>

namespace lan {

    int to_int(const char *);
    int to_int(std::string);
    int to_int(std::string_view);
    
    const char * to_char(int);
    const char * to_char(float);
    const char * to_char(double);
    const char * to_char(long);
    const char * to_char(long long);
    const char * to_char(bool);
    
    /*
    const std::string to_string(int);
    const std::string to_string(float);
    const std::string to_string(double);
    const std::string to_string(long);
    const std::string to_string(long long);
    const std::string to_string(bool);
    */
    
    template<typename Tp>
    const std::string to_string(Tp value){
        std::string v_string = to_char(value);
        return v_string;
    }
    
    float to_float(const char *);
    float to_float(std::string);
    float to_float(std::string_view);
    
    double to_double(const char *);
    double to_double(std::string);
    double to_double(std::string_view);
    
    long to_long(const char *);
    long to_long(std::string);
    long to_long(std::string_view);
    
    long long to_long_long(const char *);
    long long to_long_long(std::string);
    long long to_long_long(std::string_view);
    
}

#endif /* lanconv_hpp */
