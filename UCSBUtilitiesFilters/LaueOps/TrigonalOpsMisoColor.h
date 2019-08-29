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

#pragma once

#include "SIMPLib/SIMPLib.h"
#include "SIMPLib/Common/SIMPLibSetGetMacros.h"
#include "SIMPLib/DataArrays/DataArray.hpp"

#include "OrientationLib/OrientationLib.h"
#include "OrientationLib/LaueOps/TrigonalOps.h"



class TrigonalOpsMisoColor : public TrigonalOps
{
  public:
    SIMPL_SHARED_POINTERS(TrigonalOpsMisoColor)
     SIMPL_TYPE_MACRO_SUPER_OVERRIDE(TrigonalOpsMisoColor, TrigonalOpsMisoColor)
    SIMPL_STATIC_NEW_MACRO(TrigonalOpsMisoColor)

    TrigonalOpsMisoColor();
    ~TrigonalOpsMisoColor() override;

    /**
     * @brief generateMisorientationColor Generates a color based on the method developed by C. Schuh and S. Patala.
     * @param q Quaternion representing the direction
     * @param refDir The sample reference direction
     * @return Returns the ARGB Quadruplet SIMPL::Rgb
     */
    SIMPL::Rgb generateMisorientationColor(const QuatType& q, const QuatType& refFrame) const override;

  public:
    TrigonalOpsMisoColor(const TrigonalOpsMisoColor&) = delete; // Copy Constructor Not Implemented
    TrigonalOpsMisoColor(TrigonalOpsMisoColor&&) = delete;      // Move Constructor Not Implemented
    TrigonalOpsMisoColor& operator=(const TrigonalOpsMisoColor&) = delete; // Copy Assignment Not Implemented
    TrigonalOpsMisoColor& operator=(TrigonalOpsMisoColor&&) = delete;      // Move Assignment Not Implemented
};


