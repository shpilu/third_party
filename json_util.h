/*
 * =============================================================================
 *       Filename:  json_util.h 
 *
 *    Description:  Copyright (c) 2018, ofo Inc. All rights reserved.
 *        Version:  2.0
 *        Created:  04/07/2018
 *       Revision:  none
 *         Author:  James Wei, weijianlhp@163.com
 * =============================================================================
 */

#ifndef UTIL_JSON_UTIL_H_
#define UTIL_JSON_UTIL_H_

#include "json/json.h"

namespace util {

bool get_safe_bool(const Json::Value& val, bool default_val = false); 

int get_safe_int(const Json::Value& val, int default_val = 0);
int get_json_int2(const Json::Value& val1, const Json::Value& val2, int default_val = 0);

int64_t  get_safe_int64(const Json::Value& val, int64_t default_val = 0.0);

float get_safe_float(const Json::Value& val, float default_val = 0.0);
float get_json_float2(const Json::Value& val1, const Json::Value& val2, float default_val = 0.0);

double get_safe_double(const Json::Value& val, double default_val = 0.0);

std::string get_safe_str(const Json::Value& val, const char *default_str = "");
std::string get_json_str2(const Json::Value& val1, const Json::Value& val2, const char *default_str = "");

} // namespace util

#endif // UTIL_JSON_UTIL_H_
