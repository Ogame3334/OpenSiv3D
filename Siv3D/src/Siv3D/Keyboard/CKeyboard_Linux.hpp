﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2018 Ryo Suzuki
//	Copyright (c) 2016-2018 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include <Siv3D/Platform.hpp>
# if defined(SIV3D_TARGET_LINUX)

# include "IKeyboard.hpp"
# include "../Window/IWindow.hpp"

namespace s3d
{
	class CKeyboard_Linux : public ISiv3DKeyboard
	{
	private:

		WindowHandle m_glfwWindow = nullptr;

		std::array<InputState, KeyboardButtonCount> m_states;
	
	public:

		CKeyboard_Linux();

		~CKeyboard_Linux() override;

		bool init() override;

		void update() override;
		
		bool down(uint32 index) const override;
		
		bool pressed(uint32 index) const override;
		
		bool up(uint32 index) const override;

		MillisecondsF pressedDuration(uint32 index) const override;
	};
}

# endif