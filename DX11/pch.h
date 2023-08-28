#pragma once

#include "Types.h"
#include "Values.h"
#include "Struct.h"

// STL
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

// WIN API
#include <windows.h>
#include <assert.h>

// DX
#include <d3d11.h>
#include <d3dcompiler.h>
#include <wrl.h>
#include <DirectXMath.h>

// direct �ؽ��� �ε� �����ؼ� ��� (�ܺ� ���̺귯�� ���� ����� ���̴�)
#include <DirectXTex/DirectXTex.h>
using namespace DirectX;
using namespace Microsoft::WRL;

#include <chrono>


#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3dcompiler.lib")

#ifdef _DEBUG
#pragma comment(lib, "DirectXTex\\DirectXTex_debug.lib")
#else
#pragma comment(lib, "DirectXTex\\DirectXTex.lib")
#endif

#define C(p) assert(SUCCEEDED(p))
#define Z(p, s) ZeroMemory(p, s)
#define H HRESULT