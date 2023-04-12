/*
 * Copyright (C) 2023 Open Source Robotics Foundation
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
#ifndef GZ_RENDERING_OGREPROJECTOR_HH_
#define GZ_RENDERING_OGREPROJECTOR_HH_


#include <gz/utils/ImplPtr.hh>

#include "gz/rendering/config.hh"

#include "gz/rendering/base/BaseProjector.hh"
#include "gz/rendering/ogre/Export.hh"
#include "gz/rendering/ogre/OgreVisual.hh"

namespace gz
{
  namespace rendering
  {
    inline namespace GZ_RENDERING_VERSION_NAMESPACE {

    /// \brief Projects a material onto surface, light a light projector.
    class GZ_RENDERING_OGRE_VISIBLE OgreProjector :
      public BaseProjector<OgreVisual>
    {
      /// \brief Constructor.
      protected: OgreProjector();

      /// \brief Destructor.
      public: virtual ~OgreProjector();

      // Documentation inherited.
      // public: virtual void SetFarClipPlane(double _far) override;

      // Documentation inherited.
      // public: virtual void SetNearClipPlane(double _near) override;

      // Documentation inherited.
      // public: virtual void SetHFOV(const math::Angle &_hfov) override;

      // Documentation inherited.
      public: void PreRender() override;

      // Documentation inherited.
      public: void SetEnabled(bool _enabled) override;

      /// \brief Only the ogre scene can instanstiate this class
      private: friend class OgreScene;

      /// \cond warning
      /// \brief Private data pointer
      GZ_UTILS_UNIQUE_IMPL_PTR(dataPtr)
      /// \endcond
    };
    }
  }
}
#endif
