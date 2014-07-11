  /// \file DetectorConstruction.h
/*
 *
 * DetectorConstruction.h header template automatically generated by a class generator
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


#ifndef DETECTORCONSTRUCTION_H
#define DETECTORCONSTRUCTION_H

#include "G4VUserDetectorConstruction.hh"
#include "G4Globals.hh"
#include "G4ThreeVector.hh"


namespace tpc_sdhcal
{

/** 
 * @brief DetectorConstruction class
 */ 
class DetectorConstruction : public G4VUserDetectorConstruction 
{
public:

 DetectorConstruction();
 virtual ~DetectorConstruction();

 // from G4VUserDetectorConstruction
 G4VPhysicalVolume* Construct();

 // methods
 void SetTargetThickness(double thickness);
 void SetDistanceToCalorimeter(double distance);
 void SetBField(const G4ThreeVector &bField);
 double GetTargetThickness() const;
 double GetDistanceToCalorimeter() const;
 const G4ThreeVector &GetBField() const;

protected:

 double          m_targetThickness;
 double          m_distanceToCalorimeter;
 G4ThreeVector    m_bField;
};


inline void DetectorConstruction::SetTargetThickness(double thickness)
{
	m_targetThickness = thickness;
}



inline void DetectorConstruction::SetDistanceToCalorimeter(double distance)
{
	m_distanceToCalorimeter = distance;
}



inline void DetectorConstruction::SetBField(const G4ThreeVector &bField)
{
	m_bField = bField;
}


inline double DetectorConstruction::GetTargetThickness() const
{
	return m_targetThickness;
}


inline double DetectorConstruction::GetDistanceToCalorimeter() const
{
	return m_distanceToCalorimeter;
}


inline const G4ThreeVector &DetectorConstruction::GetBField() const
{
	return m_bField;
}

} 

#endif  //  DETECTORCONSTRUCTION_H
