#pragma once

//인력 사무소 GPU랑 핑퐁을 할..
class Device
{
	//각종 객체를 생성하는 부분을 담당한다.
public :

	void Init();
	ComPtr<IDXGIFactory> GetDXGI() { return _dxgi; }
	ComPtr<ID3D12Device> GetDevice() { return _device; }
private:

	ComPtr<ID3D12Debug>			_debugController;
	ComPtr<IDXGIFactory>		_dxgi; // 화면 관련 기능들
	ComPtr<ID3D12Device>		_device; //각종 객체 생성
 
};

