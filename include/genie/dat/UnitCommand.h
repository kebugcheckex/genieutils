/*
    geniedat - A library for reading and writing data files of genie
               engine games.
    Copyright (C) 2011  Armin Preiml <email>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef GENIE_UNITCOMMAND_H
#define GENIE_UNITCOMMAND_H
#include "genie/file/ISerializable.h"

namespace genie
{

class UnitCommand : public ISerializable
{

public:
  UnitCommand();
  virtual ~UnitCommand();
  
  short One;
  short ID;
  char Unknown1;
  short Type;
  short ClassID;
  short UnitID;
  short Unknown2;
  short ResourceIn;
  short SubType;
  short ResourceOut;
  short Unknown3;
  float Unknown4;
  float ExecutionRadius;
  float Unknown5;
  char Unknown6;
  float Unknown7;
  char Unknown8;
  char Unknown9;
  char Unknown10;
  char Unknown11;
  short Unknown12;
  short Unknown13;
  char Unknown14;
  
  static short getGraphicsSize(void);
  std::vector<short> Graphics;
  
private:
  virtual void serializeObject(void);
};

}

#endif // GENIE_UNITCOMMAND_H