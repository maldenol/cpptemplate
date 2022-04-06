/*!
  @file
  @brief The main file of target1.

  You can remove what you don't need.
*/
#include <QtGlobal>
#include <QGuiApplication>
#include <boost/asio.hpp>

#include <vulkan/vulkan.hpp>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <gtest/gtest.h>
#include <gmock/gmock.h>

/*!
  @brief An empty structure.
*/
struct Static {
  int value = 0;
};
