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

#include <QtCore/QString>

/**
 * @brief This namespace is used to define some Constants for the plugin itself.
 */
namespace UCSBUtilitiesConstants
{
const QString UCSBUtilitiesPluginFile("UCSBUtilitiesPlugin");
const QString UCSBUtilitiesPluginDisplayName("UCSB Utilities Plugin");
const QString UCSBUtilitiesBaseName("UCSBUtilities");

namespace FilterGroups
{
const QString UCSBUtilitiesFilters("UCSBUtilities");
}
} // namespace UCSBUtilitiesConstants

/**
 * @brief Use this namespace to define any custom GUI widgets that collect FilterParameters
 * for a filter. Do NOT define general reusable widgets here.
 */
namespace FilterParameterWidgetType
{
/* const QString SomeCustomWidget("SomeCustomWidget"); */
}

namespace DREAM3D
{
namespace FeatureData
{
const QString MicroTextureRegionFractionOccupied("MicroTextureRegionFractionOccupied");
const QString MicroTextureRegionNumCells("MicroTextureRegionNumCells");
} // namespace FeatureData
} // namespace DREAM3D
