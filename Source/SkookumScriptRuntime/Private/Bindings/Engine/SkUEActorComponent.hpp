//=======================================================================================
// Copyright (c) 2001-2017 Agog Labs Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=======================================================================================

//=======================================================================================
// SkookumScript Plugin for Unreal Engine 4
//
// Additional bindings for the ActorComponent (= UActorComponent) class 
//=======================================================================================

#pragma once

//=======================================================================================
// Includes
//=======================================================================================

#include <SkUEActorComponent.generated.hpp>

//=======================================================================================
// Global Functions
//=======================================================================================

//---------------------------------------------------------------------------------------
// Bindings for the Actor (= AActor) class 
class SkUEActorComponent_Ext : public SkUEActorComponent
  {
  public:
    static void register_bindings();
  };

