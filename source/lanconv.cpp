//
//  lanconv.cpp
//  landb
//
//  Created by René Descartes Domingos Muala on 27/10/20.
//  Copyright © 2020 landia (René Muala). All rights reserved.
//

#include "lanconv.hpp"

namespace lan {
    namespace conv_buffers {
        char cbuffer[22];
    }
}

int lan::to_int(const char * value){
    return (value) ? atoi(value) : 0;
}

int lan::to_int(std::string value){
    return lan::to_int(value.c_str());
}

int lan::to_int(std::string_view value){
    return lan::to_int(((std::string)value).c_str());
}

const char * lan::to_char(int value){
    sprintf(conv_buffers::cbuffer, "%d", value);
    return conv_buffers::cbuffer;
}

const char * lan::to_char(float value){
    sprintf(conv_buffers::cbuffer, "%f", value);
    return conv_buffers::cbuffer;
}

const char * lan::to_char(double value){
    sprintf(conv_buffers::cbuffer, "%lf", value);
    return conv_buffers::cbuffer;
}

const char * lan::to_char(long value){
    sprintf(conv_buffers::cbuffer, "%ld", value);
    return conv_buffers::cbuffer;
}

const char * lan::to_char(long long value){
    sprintf(conv_buffers::cbuffer, "%lld", value);
    return conv_buffers::cbuffer;
}

const char * lan::to_char(bool value){
    sprintf(conv_buffers::cbuffer, "%s", (value) ? "true" : "false");
    return conv_buffers::cbuffer;
}

float lan::to_float(const char * value){
    return (value) ? atof(value) : 0;
}

float lan::to_float(std::string value){
    return lan::to_float(value.c_str());
}

float lan::to_float(std::string_view value){
    return lan::to_float(((std::string)value).c_str());
}

double lan::to_double(const char * value){
    return (value) ? atof(value) : 0;
}

double lan::to_double(std::string value){
    return lan::to_double(value.c_str());
}

double lan::to_double(std::string_view value){
    return lan::to_double(((std::string)value).c_str());
}

long lan::to_long(const char * value){
    return (value) ? atol(value) : 0;
}

long lan::to_long(std::string value){
    return lan::to_long(value.c_str());
}

long lan::to_long(std::string_view value){
    return lan::to_long(((std::string)value).c_str());
}

long long lan::to_long_long(const char * value){
    return (value) ? atol(value) : 0;
}

long long lan::to_long_long(std::string value){
    return lan::to_long(value.c_str());
}

long long lan::to_long_long(std::string_view value){
    return lan::to_long(((std::string)value).c_str());
    }
