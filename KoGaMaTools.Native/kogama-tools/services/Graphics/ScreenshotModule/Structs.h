#pragma once

namespace KoGaMaTools::Services::ScreenshotModule
{
	struct Rect {
		float m_XMin, m_YMin, m_Width, m_Height;
	};
	struct ResolutionSize {
		int width;
		int height;
	};
}