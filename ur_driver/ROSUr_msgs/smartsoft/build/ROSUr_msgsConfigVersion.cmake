# --------------------------------------------------------------------------
#
#  Copyright (C) 2014 Alex Lotz
#
#        lotz@hs-ulm.de
#
#        Alex Lotz
#        University of Applied Sciences
#        Prittwitzstr. 10
#        D-89075 Ulm
#        Germany
#
#  This file is part of the "SmartSoft Communication Library".
#  It provides standardized patterns for communication between
#  different components.
#
#  This library is free software; you can redistribute it and/or
#  modify it under the terms of the GNU Lesser General Public
#  License as published by the Free Software Foundation; either
#  version 2.1 of the License, or (at your option) any later version.
#
#  This library is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#  Lesser General Public License for more details.
#
#  You should have received a copy of the GNU Lesser General Public
#  License along with this library; if not, write to the Free Software
#  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
#
# --------------------------------------------------------------------------

# Check whether the requested PACKAGE_FIND_VERSION is compatible
IF("1.0.0" VERSION_LESS "${PACKAGE_FIND_VERSION}")
  SET(PACKAGE_VERSION_COMPATIBLE FALSE)
ELSE()
  SET(PACKAGE_VERSION_COMPATIBLE TRUE)
  IF ("1.0.0" VERSION_EQUAL "${PACKAGE_FIND_VERSION}")
    SET(PACKAGE_VERSION_EXACT TRUE)
  ENDIF()
ENDIF()

