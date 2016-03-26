#ifndef VULKAN_EXAMPLE_HPP
#define VULKAN_EXAMPLE_HPP
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <vulkan/vulkan.h>

class VulkanExample {
private:
    void exitOnError(const char * msg);
    VkResult initInstance();

    const char * applicationName = "Vulkan Example";
    const char * engineName = "Vulkan Engine";

    VkInstance instance;
public:
    VulkanExample();
    virtual ~VulkanExample();
};

#endif // VULKAN_EXAMPLE_HPP