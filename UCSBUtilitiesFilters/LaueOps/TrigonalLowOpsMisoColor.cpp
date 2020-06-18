/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                                               *
 * Copyright (c) 2015 The Regents of the University of California, Author: William Lenthe        *
 *                                                                                               *
 * This program is free software: you can redistribute it and/or modify it under the terms of    *
 * the GNU Lesser General Public License as published by the Free Software Foundation, either    *
 * version 2 of the License, or (at your option) any later version.                              *
 *                                                                                               *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;     *
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.     *
 * See the GNU Lesser General Public License for more details.                                   *
 *                                                                                               *
 * You should have received a copy of the GNU Lesser General Public License                      *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.                         *
 *                                                                                               *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "TrigonalLowOpsMisoColor.h"

#include <stdexcept>

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
TrigonalLowOpsMisoColor::TrigonalLowOpsMisoColor() = default;

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
TrigonalLowOpsMisoColor::~TrigonalLowOpsMisoColor() = default;

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
SIMPL::Rgb TrigonalLowOpsMisoColor::generateMisorientationColor(const QuatD& q, const QuatD& refFrame) const
{
  SIMPL::Rgb rgb = RgbColor::dRgb(0, 0, 0, 0);

  throw std::runtime_error("TrigonalLowOpsMisoColor::generateMisorientationColor is not implemented");

  return rgb;
}

// -----------------------------------------------------------------------------
TrigonalLowOpsMisoColor::Pointer TrigonalLowOpsMisoColor::NullPointer()
{
  return Pointer(static_cast<Self*>(nullptr));
}

// -----------------------------------------------------------------------------
std::string TrigonalLowOpsMisoColor::getNameOfClass() const
{
  return std::string("TrigonalLowOpsMisoColor");
}

// -----------------------------------------------------------------------------
QString TrigonalLowOpsMisoColor::ClassName()
{
  return QString("TrigonalLowOpsMisoColor");
}

// -----------------------------------------------------------------------------
TrigonalLowOpsMisoColor::Pointer TrigonalLowOpsMisoColor::New()
{
  Pointer sharedPtr(new(TrigonalLowOpsMisoColor));
  return sharedPtr;
}
