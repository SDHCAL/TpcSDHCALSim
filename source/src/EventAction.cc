  /// \file EventAction.cc
/*
 *
 * EventAction.cc source template automatically generated by a class generator
 * Creation date : mar. juil. 8 2014
 *
 * This file is part of TpcSDHCALSim libraries.
 * 
 * TpcSDHCALSim is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * based upon these libraries are permitted. Any copy of these libraries
 * must include this copyright notice.
 * 
 * TpcSDHCALSim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with TpcSDHCALSim.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * @author Remi
 * @copyright CNRS , IPNL
 */


#include "EventAction.h"

// geant4
#include "G4Event.hh"
#include "G4RunManager.hh"

// tpc sdhcal
#include "SteppingAction.h"

// std
#include <iostream>

namespace tpc_sdhcal
{

EventAction::EventAction()
{

}

EventAction::~EventAction() 
{

}

void EventAction::BeginOfEventAction(const G4Event *pEvent)
{
	std::cout << "<EVENT " << pEvent->GetEventID() << ">" << std::endl;

	SteppingAction *pSteppingAction = (SteppingAction *) G4RunManager::GetRunManager()->GetUserSteppingAction();
	pSteppingAction->BeginOfEvent();
}

void EventAction::EndOfEventAction(const G4Event *pEvent)
{
	SteppingAction *pSteppingAction = (SteppingAction *) G4RunManager::GetRunManager()->GetUserSteppingAction();
	pSteppingAction->EndOfEvent();
}


} 

