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

## Setup the library parameters
#
set(Encoders_SRCS  Encoders.cpp)
set(Encoders_HDRS  Encoders.h)
set(Encoders_BOARD ${PROJECT_BOARD})

## Generate the library
#
generate_arduino_library(Encoders)

## Add the sub directory
#
add_subdirectory(test)

