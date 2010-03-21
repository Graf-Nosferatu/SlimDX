#pragma once

namespace SlimDX
{
	namespace DXGI
	{
		ref class DXGIApi : IDXGIApi
		{
			public:
				DXGIApi();
				
				virtual IFactoryDXGI^ CreateFactory();
		};
	}
}