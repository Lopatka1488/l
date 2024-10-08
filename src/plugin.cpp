/**
 * @file plugin.cpp
 * @brief The main file of the plugin
 */

#include <llapi/LoggerAPI.h>

#include "version.h"

// We recommend using the global logger.
extern Logger logger;

/**
 * @brief The entrypoint of the plugin. DO NOT remove or rename this function.
 *        
 */
void PluginInit()
{
    THook(bool, "?isTrustedSkin@SerializedSkin@@QEBA_NXZ", SerializedSkin* skin) {
  return true;
}
    // Your code here
    logger.info("Hello, world!");
}
