/***************************************************************************
  This file is part of Project Apollo - NASSP
  Copyright 2004-2005 Mark Grant

  ORBITER vessel module: Sequential Events Controller simulation.

  Project Apollo is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  Project Apollo is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Project Apollo; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

  See http://nassp.sourceforge.net/license/ for more details.

  **************************** Revision History ****************************
  *	$Log$
  *	Revision 1.1  2006/01/14 18:57:49  movieman523
  *	First stages of pyro and SECS simulation.
  *	
  **************************** Revision History ****************************/

#include <stdio.h>
#include "orbitersdk.h"

#include "PanelSDK/PanelSDK.h"
#include "PanelSDK/Internals/Esystems.h"

#include "secs.h"

SECS::SECS()

{
}

SECS::~SECS()

{
}

void SECS::Timestep(double simt, double simdt)

{
	//
	// Nothing to do at this moment.
	//
}

bool SECS::IsPowered()

{
	return Voltage() > SP_MIN_DCVOLTAGE;
}
