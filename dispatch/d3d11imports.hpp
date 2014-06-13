/**************************************************************************
 *
 * Copyright 2012 VMware, Inc.
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 **************************************************************************/

/*
 * Central place for all D3D11 includes, and respective OS dependent headers.
 */

#ifndef _D3D11IMPORTS_HPP_
#define _D3D11IMPORTS_HPP_


#include <windows.h>

#include "compat.h"

#include <d3d11_1.h>

#include "d3derr.hpp"

#include "dxgiint.h"


#ifndef D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS
#define D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS MAKE_D3D11_HRESULT(1)
#endif

#ifndef D3D11_ERROR_FILE_NOT_FOUND
#define D3D11_ERROR_FILE_NOT_FOUND MAKE_D3D11_HRESULT(2)
#endif

#ifndef D3D11_ERROR_TOO_MANY_UNIQUE_VIEW_OBJECTS
#define D3D11_ERROR_TOO_MANY_UNIQUE_VIEW_OBJECTS MAKE_D3D11_HRESULT(3)
#endif

#ifndef D3D11_ERROR_DEFERRED_CONTEXT_MAP_WITHOUT_INITIAL_DISCARD
#define D3D11_ERROR_DEFERRED_CONTEXT_MAP_WITHOUT_INITIAL_DISCARD MAKE_D3D11_HRESULT(4)
#endif


#endif /* _D3D11IMPORTS_HPP_ */
