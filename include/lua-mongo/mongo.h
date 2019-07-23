/*
** Copyright (C) 2016-2019 Arseny Vakhrushev <arseny.vakhrushev@gmail.com>
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
** THE SOFTWARE.
*/
#pragma once

#ifdef LUA_MONGO_DLL
	#ifdef _WIN32
		#ifdef LUA_MONGO_BUILD_DLL
			#define EXPORT __declspec(dllexport)
		#else
			#define EXPORT __declspec(dllimport)
		#endif
	#else
		#ifdef LUA_MONGO_BUILD_DLL
			#define EXPORT __attribute__((visibility("default")))
		#else
			#define EXPORT 
		#endif
	#endif
#else
	#define EXPORT
#endif

typedef struct lua_State lua_State;

#ifdef __cplusplus
extern "C" {
#endif

EXPORT int luaopen_mongo(lua_State* L);

#ifdef __cplusplus
}
#endif
