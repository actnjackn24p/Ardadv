# CMakeLists.txt for building the code for Adventures in Arduino
#
# Copyright (C) 2012 Mark R. Stevens
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

## Add the qt dependency
#
find_package(Qt4 4.8.0 REQUIRED QtCore QtGui QtOpenGL QtNetwork QtTest QtSql)
if(QT_FOUND)
  message(FATAL_ERROR "Qt 4.8.0 not found")
endif()

## Add the subdirectories
#
add_subdirectory(accviewer)
