/*
 *
 * Tencent is pleased to support the open source community by making
 * Hippy available.
 *
 * Copyright (C) 2019 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

#include "renderer/arkui/arkui_node.h"

namespace hippy {
inline namespace render {
inline namespace native {

class ImageSpanNode : public ArkUINode {
protected:
  enum class AttributeFlag {
    IMAGE_SPAN_SRC = 0,
    IMAGE_SPAN_ALT,
    IMAGE_SPAN_VERTICAL_ALIGNMENT,
    IMAGE_OBJECT_FIT,
  };
  
  std::string uri_;
  
public:
  ImageSpanNode();
  ~ImageSpanNode();
  
  ImageSpanNode &SetSources(std::string const &src);
  ImageSpanNode &SetAlt(std::string const &src);
  ImageSpanNode &SetVerticalAlignment(ArkUI_ImageSpanAlignment align);
  ImageSpanNode &SetImageObjectFit(ArkUI_ObjectFit fit);
  
  void ResetAllAttributes() override;
};

} // namespace native
} // namespace render
} // namespace hippy
