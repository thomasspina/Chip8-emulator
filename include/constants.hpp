#pragma once

#include <unordered_map>

/* MODIFY CONSTANT BELOW TO CHANGE GAMES */
#define GAME "tetris"


#define C8_SCREEN_WIDTH 64
#define C8_SCREEN_HEIGHT 32
#define C8_SCREEN_SCALE 20

#define KEY_WAIT_BUFFER_EMPTY 0x10

#define AUDIO_FREQ 440.f
#define AUDIO_DESIRED_FREQ 44100
#define AUDIO_SAMPLES 2048
#define AUDIO_VOLUME .2f

namespace c8const {
    constexpr float TIMER_FREQ = 1 / 60.0;
    constexpr float EMULATOR_FREQ = 1 / 500.0;
    constexpr int PROGRAM_START_ADDR = 512;

    constexpr unsigned char chip8_fontset[80] = 
    { 
        0xF0, 0x90, 0x90, 0x90, 0xF0, // 0
        0x20, 0x60, 0x20, 0x20, 0x70, // 1
        0xF0, 0x10, 0xF0, 0x80, 0xF0, // 2
        0xF0, 0x10, 0xF0, 0x10, 0xF0, // 3
        0x90, 0x90, 0xF0, 0x10, 0x10, // 4
        0xF0, 0x80, 0xF0, 0x10, 0xF0, // 5
        0xF0, 0x80, 0xF0, 0x90, 0xF0, // 6
        0xF0, 0x10, 0x20, 0x40, 0x40, // 7
        0xF0, 0x90, 0xF0, 0x90, 0xF0, // 8
        0xF0, 0x90, 0xF0, 0x10, 0xF0, // 9
        0xF0, 0x90, 0xF0, 0x90, 0x90, // A
        0xE0, 0x90, 0xE0, 0x90, 0xE0, // B
        0xF0, 0x80, 0x80, 0x80, 0xF0, // C
        0xE0, 0x90, 0x90, 0x90, 0xE0, // D
        0xF0, 0x80, 0xF0, 0x80, 0xF0, // E
        0xF0, 0x80, 0xF0, 0x80, 0x80  // F
    };
    
    const std::unordered_map<char, unsigned char> key_map = {
        {'1', 0x1}, {'2', 0x2}, {'3', 0x3}, {'4', 0xC}, 
        {'Q', 0x4}, {'W', 0x5}, {'E', 0x6}, {'R', 0xD},
        {'A', 0x7}, {'S', 0x8}, {'D', 0x9}, {'F', 0xE},
        {'Z', 0xA}, {'X', 0x0}, {'C', 0xB}, {'V', 0xF}
    };
}
