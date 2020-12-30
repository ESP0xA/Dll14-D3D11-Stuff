#pragma once
#include <dxgi.h>
#include <DirectXMath.h>

#define safe_release(p) if (p) { p->Release(); p = nullptr; }

//TODO: Convert to use DirectX::Colors::
//D3DCOLORVALUE vs XMVECTORF32 for DirectXColors.h
//DirectX::XMVECTORF32 YELLOW = DirectX::Colors::Yellow;

const D3DCOLORVALUE red{ 1.0f, 0.0f, 0.0f, 1.0f };
const D3DCOLORVALUE green{ 0.0f, 1.0f, 0.0f, 1.0f };
const D3DCOLORVALUE blue{ 0.0f, 0.0f, 1.0f, 1.0f };
const D3DCOLORVALUE magenta{ 1.0f, 0.0f, 1.0f, 1.0f };
const D3DCOLORVALUE yellow{ 1.0f, 1.0f, 0.0f, 1.0f };

struct Vertex
{
	DirectX::XMFLOAT3 pos;
	D3DCOLORVALUE color;
};

struct HandleData
{
	DWORD pid;
	HWND hWnd;
};

HWND FindMainWindow(DWORD dwPID);
BOOL CALLBACK EnumWindowsCallback(HWND hWnd, LPARAM lParam);
