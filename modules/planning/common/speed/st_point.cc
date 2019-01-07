/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file st_point.cpp
 **/

#include "modules/planning/common/speed/st_point.h"

#include <iomanip>

#include "modules/common/util/string_util.h"

namespace apollo {
namespace planning {

using apollo::common::util::StringPrintf;

STPoint::STPoint(const double s, const double t) : Vec2d(t, s) {}                  // 构造一个t为横坐标, s为纵坐标的直角坐标系

STPoint::STPoint(const common::math::Vec2d& vec2d_point) : Vec2d(vec2d_point) {}   // 通过一个二维向量进行构造

double STPoint::s() const { return y_; }                                           // 直接返回y轴上的值

double STPoint::t() const { return x_; }                                           // 直接返回x轴上的值

void STPoint::set_s(const double s) { return set_y(s); }                           // 设置y轴上面的值

void STPoint::set_t(const double t) { return set_x(t); }

std::string STPoint::DebugString() const {
  return StringPrintf("{ \"s\" : %.6f, \"t\" : %.6f }", s(), t());
}

}  // namespace planning
}  // namespace apollo
