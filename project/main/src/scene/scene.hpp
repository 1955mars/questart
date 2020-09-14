#pragma once

#include "../core/asset-manifest.hpp"
#include "../core/renderer.hpp"
#include "../core/window-size.hpp"

namespace questart
{
    struct Scene
    {
        Scene() = default;

        virtual ~Scene() = default;

        virtual questart::AssetManifest getAssetManifest() = 0;

        virtual void prepare() = 0;

        virtual void update(const float& delta) = 0;

        virtual void render(questart::Renderer& renderer) = 0;

        virtual void onWindowResized(const questart::WindowSize& size) = 0;
    };
} // namespace questart