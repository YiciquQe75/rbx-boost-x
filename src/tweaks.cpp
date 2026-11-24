// tweaks.cpp — part of rbx-boost-x.

#include "rbxboostx/tweaks.h"

#include <cstdio>

namespace rbxboostx {

Tweaks::Tweaks(const std::string& config_path)
    : config_path_(config_path) {}

void Tweaks::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tweaks::run() {
    if (verbose_) std::fprintf(stderr, "[rbx-boost-x] tweaks: run\n");
    // core logic lives here
    return true;
}

}  // namespace rbxboostx
