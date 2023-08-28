#pragma once
class Game
{
public:
	Game();
	~Game();

public:
	void Init(HWND hwnd);
	void Update();
	void Render();

private:
	void RenderBegin();
	void RenderEnd();

private:
	void CreateDeviceAndSwapChain();
	void CreateRenderTargetView();
	void SetViewPort();

private:
	void CreateGeometry();			// Geometry
	void CreateInputLayout();		// Input Layout
	void CreateVS();				// Vertex Shader
	void CreatePS();				// Pixel Shader

private:
	void CreateSRV();				// Shader Resouce View

private:
	void CreateConstantBuffer();	// Constant Buffer

private:
	void LoadShaderFromFile(const wstring& path, const string& name, const string& version, ComPtr<ID3DBlob>& blob);
	
private:
	HWND	_hWnd;
	uint32	_width	= 0;
	uint32	_height = 0;

private:
	ComPtr<ID3D11Device>			_device				= nullptr;
	ComPtr<ID3D11DeviceContext>		_deviceContext		= nullptr;
	ComPtr<IDXGISwapChain>			_swapChain			= nullptr;
	ComPtr<ID3D11RenderTargetView>	_renderTargetView	= nullptr;

private:
	D3D11_VIEWPORT					_viewport		= { 0 };
	float							_clearColor[4]	= { 0.0f, 0.0f, 0.0f, 0.0f };

private:
	vector<Vertex>					_vertices;
	ComPtr<ID3D11Buffer>			_vertexBuffer		= nullptr;
	ComPtr<ID3D11InputLayout>		_inputLayout		= nullptr;

private:
	ComPtr<ID3D11VertexShader>		_vertexShader		= nullptr;
	ComPtr<ID3DBlob>				_vsBlob				= nullptr;

	ComPtr<ID3D11PixelShader>		_pixelShader		= nullptr;
	ComPtr<ID3DBlob>				_psBlob				= nullptr;

private:
	vector<uint32>						_indices;
	ComPtr<ID3D11Buffer>				_indexBuffer		= nullptr;
	ComPtr<ID3D11ShaderResourceView>	_shaderResouceView	= nullptr;

private:
	TransformData					_transformData;
	ComPtr<ID3D11Buffer>			_constantBuffer		= nullptr;
};