/*
 * =============================================================================
 *       Filename:  json_util.cc
 *
 *    Description:  Copyright (c) 2018, ofo Inc. All rights reserved.
 *        Version:  2.0
 *        Created:  04/07/2018
 *       Revision:  none
 *         Author:  James Wei, weijianlhp@163.com
 * =============================================================================
 */

#include "json_util.h"

namespace util {

bool get_safe_bool(const Json::Value& val, bool default_val) {
    if (val.isBool()) {
        return val.asBool();
    } else {
        return default_val;
    }
}

int get_safe_int(const Json::Value& val, int default_val) {
    if (val.isInt()) {
        return val.asInt();
    } else { 
        return default_val;
    }    
}

int get_json_int2(const Json::Value& val1, const Json::Value& val2, int default_val) {
    if (val1.isInt()) {
        return val1.asInt();
    } else if (val2.isInt()) {
       return val2.asInt(); 
    } else {
       return default_val; 
    }
}

int64_t get_safe_int64(const Json::Value& val, int64_t default_val) {
    if (val.isInt64()) {
        return val.asInt64();
    } else { 
        return default_val;
    }
}

float get_safe_float(const Json::Value& val, float default_val) {
    if (val.isDouble()) {
        return val.asFloat();
    } else { 
        return default_val;
    }    
}

float get_json_float2(const Json::Value& val1, const Json::Value& val2, float default_val) {
    if (val1.isDouble()) {
        return val1.asFloat();
    } else if (val2.isDouble()) {
       return val2.asFloat(); 
    } else {
       return default_val; 
    }
}

double get_safe_double(const Json::Value& val, double default_val) {
    if (val.isDouble()) {
        return val.asDouble();
    } else {
        return default_val;
    }
}

std::string get_safe_str(const Json::Value& val, const char *default_str) {
    if (val.isString()) {
        return val.asString();
    } else { 
        return default_str;
    }
}

std::string get_json_str2(const Json::Value& val1, const Json::Value& val2, const char *default_str) {
    if (val1.isString()) {
        return val1.asString();
    } else if (val2.isString()) {
       return val2.asString(); 
    } else {
       return default_str; 
    }
}

} // namespace util
