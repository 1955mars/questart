#pragma once

#include "../../core/asset-manifest.hpp"
#include "../../core/internal_ptr.hpp"
#include "../../core/renderer.hpp"
#include "../../core/window-size.hpp"

namespace questart
{
    struct VulkanContext : public questart::Renderer
    {
        VulkanContext();

        void loadAssetManifest(const questart::AssetManifest& assetManifest);

        bool renderBegin();

        void render(
            const questart::assets::Pipeline& pipeline,
            const std::vector<questart::StaticMeshInstance>& staticMeshInstances) override;

        void renderEnd();

        questart::WindowSize getCurrentWindowSize() const;

    private:
        struct Internal;
        questart::internal_ptr<Internal> internal;
    };
} // namespace questart