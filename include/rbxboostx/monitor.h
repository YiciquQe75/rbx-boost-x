// monitor — part of rbx-boost-x.

#pragma once

#include <string>
#include <vector>

namespace rbxboostx {

class Monitor {
public:
    explicit Monitor(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace rbxboostx
