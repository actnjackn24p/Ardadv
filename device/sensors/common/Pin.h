// Copyright (C) 2012 Mark R. Stevens
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef ardadv_sensors_common_Pin_h
#define ardadv_sensors_common_Pin_h

namespace ardadv
{
  namespace sensors
  {
    namespace common
    {

      //! @class Pin
      //!
      //! @brief An immutable class used to reduce error in passing
      //!        pin ids in methods
      //!
      class Pin
      {
      public:

        //! @brief Constructor
        //!
        //! @param[in] iPinId The pin id
        //!
        inline Pin(int iId) : mId(iId)
        {
        }

        //! @brief Get the pin id
        //!
        //! @return The pin id
        //!
        inline operator int () const
        {
          return mId;
        }

      private:

        //! @brief The pin id
        //!
        int mId;

      };
    }
  }
}
#endif

