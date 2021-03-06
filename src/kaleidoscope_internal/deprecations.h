/* Kaleidoscope - Firmware for computer input devices
 * Copyright (C) 2013-2018  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define DEPRECATED(tag)                                                 \
  __attribute__((deprecated(_DEPRECATE(_DEPRECATED_MESSAGE_ ## tag))))

#define _DEPRECATE(message) "\n"                                               \
  "------------------------------------------------------------------------\n" \
  message                                                                      \
  "\n"                                                                         \
  "------------------------------------------------------------------------\n" \

/* Messages */
#define _DEPRECATED_MESSAGE_LAYER_DEFAULT                                   \
  "Layer.defaultLayer() is deprecated, and a no-op.\n"                      \
  "\n"                                                                      \
  "If you want to set the default layer for the keyboard, consider using\n" \
  "EEPROMSettings.default_layer() instead."

#define _DEPRECATED_MESSAGE_LAYER_ON                                        \
  "Please use `Layer.activate()` instead of `Layer.on()`."

#define _DEPRECATED_MESSAGE_LAYER_OFF                                       \
  "Please use `Layer.deactivate()` instead of `Layer.off()`."

#define _DEPRECATED_MESSAGE_LAYER_NEXT                                      \
  "Please use `Layer.activateNext()` instead of `Layer.next()`."

#define _DEPRECATED_MESSAGE_LAYER_PREVIOUS                                  \
  "Please use `Layer.deactivateTop()` instead of `Layer.previous()`."

#define _DEPRECATED_MESSAGE_LAYER_ISON                                      \
  "Please use `Layer.isActive()` instead of `Layer.isOn().`"
