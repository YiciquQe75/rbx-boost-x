// main.cpp — entry point. Wires config and subsystems together.

#include "rbxboostx/settings.h"
#include "rbxboostx/tweaks.h"
#include "rbxboostx/profiles.h"
#include "rbxboostx/monitor.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    rbxboostx::Settings settings = rbxboostx::Settings::load_default();
    rbxboostx::Tweaks tweaks(settings.store_path);
    rbxboostx::Profiles profiles(settings.store_path);
    rbxboostx::Monitor monitor(settings.store_path);
    std::fprintf(stderr, "[rbx-boost-x] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
