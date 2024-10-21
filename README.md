# Terminal-Pong

Play the classic game of Pong right in your terminal! This implementation is written in C++17 and leverages ncurses for a retro gaming experience.

[![asciicast](https://asciinema.org/a/ZYCHw19s9rX6d3oS23vDkBDIc.svg)](https://asciinema.org/a/ZYCHw19s9rX6d3oS23vDkBDIc)


## Features

* Two-player action
* Simple and intuitive controls
* Retro terminal graphics
* Cross-platform compatibility (Linux, macOS, potentially others)


## Requirements

* A terminal emulator with UTF-8 support
* A UTF-8 compatible font
* ncurses library
* A C++ compiler (Clang, GCC, or MSVC)
* Build system (CMake or Meson)


## Installation

### Dependencies

#### Debian/Ubuntu:

```bash
sudo apt-get install libncurses5-dev libncursesw5-dev ninja-build
```

#### Arch Linux:

```bash
sudo pacman -S ncurses ninja
```

#### macOS (using Homebrew):

```bash
brew install ncurses ninja
```

### Building from Source

#### Using Meson:

```bash
git clone https://github.com/kumaran-14/terminal-pong.git
cd terminal-pong
meson setup builddir
meson compile -C builddir
./builddir/pong
```

#### Using CMake:

```bash
git clone https://github.com/kumaran-14/terminal-pong.git
cd terminal-pong
mkdir build && cd build
cmake ..
make
./pong
```


## Download

Pre-built binaries are available on the [releases](https://github.com/kumaran-14/terminal-pong/releases) page. Download the appropriate binary for your operating system and architecture.

## Roadmap/Future Enhancements

* Game state recording and playback (potentially using a serialization library)
* Difficulty levels
* Different paddle sizes/speeds
* Score tracking and display improvements


## Contributing

Contributions are welcome!  Feel free to submit pull requests or open issues for bug reports and feature suggestions.
