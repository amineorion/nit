# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Window manager related SDL 2 services
module syswm is pkgconfig "sdl2"

import sdl2_base

in "C Header" `{
	#include <SDL2/SDL_syswm.h>
`}

redef extern class SDLWindow
	# Get the `SDLSysVMInfo` for the system running this window
	#
	# The returned value must be freed.
	fun wm_info: SDLSysWMInfo `{
		SDL_SysWMinfo *val = malloc(sizeof(SDL_SysWMinfo));

		SDL_VERSION(&val->version);

		if(SDL_GetWindowWMInfo(recv, val) <= 0) {
			free(val);
			return NULL;
		}

		return val;
	`}
end

# Information on the window manager
#
# Created using `SDLWindow::vm_info`
extern class SDLSysWMInfo `{ SDL_SysWMinfo * `}
	# Is this an unknown window manager?
	fun is_unknown: Bool `{ return recv->subsystem == SDL_SYSWM_UNKNOWN; `}

	# Is this a Windows system?
	fun is_windows: Bool `{ return recv->subsystem == SDL_SYSWM_WINDOWS; `}

	# Is this the X11 window manager?
	fun is_x11: Bool `{ return recv->subsystem == SDL_SYSWM_X11; `}

	# Is this a direct DirectFB?
	fun is_direcfb: Bool `{ return recv->subsystem == SDL_SYSWM_DIRECTFB; `}

	# Is this system an OS X?
	fun is_cocoa: Bool `{ return recv->subsystem == SDL_SYSWM_COCOA; `}

	# Is this system an iOS?
	fun is_uikit: Bool `{ return recv->subsystem == SDL_SYSWM_UIKIT; `}

	# It this window manager Wayland?
	fun is_wayland: Bool `{
		#if SDL_VERSION_ATLEAST(2, 0, 2)
			return recv->subsystem == SDL_SYSWM_WAYLAND;
		#else
			return 0;
		#endif
	`}

	# It this window manager Mir?
	fun is_mir: Bool `{
		#if SDL_VERSION_ATLEAST(2, 0, 3)
			return recv->subsystem == SDL_SYSWM_MIR;
		#else
			return 0;
		#endif
	`}

	# Is this system a Windows RT?
	fun is_winrt: Bool `{
		#if SDL_VERSION_ATLEAST(2, 0, 3)
			return recv->subsystem == SDL_SYSWM_WINRT;
		#else
			return 0;
		#endif
	`}

	# Is this system an Android?
	fun is_android: Bool `{
		#if SDL_VERSION_ATLEAST(2, 0, 4)
			return recv->subsystem == SDL_SYSWM_ANDROID;
		#else
			return 0;
		#endif
	`}

	# Returns the handle of this window on a X11 window system
	#
	# Require: `is_x11`
	fun x11_window_handle: Pointer `{
		return (void*)recv->info.x11.window;
	`}
end
