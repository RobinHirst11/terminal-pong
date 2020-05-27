/*
 * constants.h
 * Defines all game constants
 */

#pragma once

#include <cstdint>

namespace constants {
constexpr uint32_t MIN_SCREEN_WIDTH = 80;
constexpr uint32_t MIN_SCREEN_HEIGHT = 30;
constexpr uint32_t MIN_PADDLE_WIDTH = 16;
const std::string PADDLE_BODY_CHARACTER = "■";
constexpr uint32_t BALL_WIDTH = 1;
const std::string BALL_BODY_CHARACTER = "■";
constexpr double MAX_PADDLE_X_VELOCITY = 2.0;
constexpr double MAX_PADDLE_Y_VELOCITY = 2.0;
constexpr double MAX_BALL_X_VELOCITY = 2.0;
constexpr double MAX_BALL_Y_VELOCITY = 0.0;

} // namespace constants