#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        log::info("GD Level Generator Mod Loaded!");

        return true;
    }
};
