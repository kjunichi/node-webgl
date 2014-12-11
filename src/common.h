/*
 * common.h
 *
 *  Created on: Dec 13, 2011
 *      Author: ngk437
 */

#ifndef COMMON_H_
#define COMMON_H_

#include <node.h>
#include "nan.h"
#include <v8.h>
#include "arch_wrapper.h"

namespace {
#define JS_STR(...) v8::String::NewFromUtf8(v8::Isolate::GetCurrent(),__VA_ARGS__)
#define JS_INT(val) v8::Integer::New(v8::Isolate::GetCurrent(),val)
#define JS_FLOAT(val) v8::Number::New(v8::Isolate::GetCurrent(),val)
#define JS_BOOL(val) v8::Boolean::New(v8::Isolate::GetCurrent(),val)

}
#endif /* COMMON_H_ */
