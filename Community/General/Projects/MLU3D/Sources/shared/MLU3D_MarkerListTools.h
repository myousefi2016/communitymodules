//----------------------------------------------------------------------------------
// MarkerList tools for U3D file handling.
//
// \file    MLU3D_MarkerListTools.h
// \author  Axel Newe (axel.newe@fau.de)
// \date    2016-10-01
//----------------------------------------------------------------------------------


#ifndef _U3D_MarkerListTools_H
#define _U3D_MarkerListTools_H 

// Local includes
#include "MLU3DSystem.h"
#include "MLU3D_DataTypes.h"

// Project includes
#include <IndexPairList.h>
#include <ColoredMarkerList.h>

// ML includes
#include <mlXMarkerList.h>
#include <mlFiberSet.h>
#include <mlModuleIncludes.h>

// Inventor includes
#include <Inventor/nodes/SoNodes.h>  // for M_PI


ML_START_NAMESPACE

namespace mlU3D {

class MLU3D_EXPORT U3DMarkerListTools
{

public:

  //////////////////////////////////////////////

  // Get all positions (vertices) from ColoredMarkerList
  static PositionsVector getAllPositionsFromColoredMarkerList(const ml::ColoredMarkerList positionsList, const std::string allowedPositionTypes, double pointSize);

  // Get all positions (vertices) from XMarkerList
  static PositionsVector getAllPositionsFromXMarkerList(const ml::XMarkerList positionsList, const std::string allowedPositionTypes, double pointSize);

  //***********************************************************************************

  // Get all line connections from IndexPairList
  static LinesVector getAllLinesFromIndexPairList(const ml::IndexPairList connectionsList, const std::string allowedConnectionTypes, double lineWidth);

  // Automatically calculate simple line connections from XMarkerList
  static LinesVector getStandardLinesFromXMarkerList(const ml::XMarkerList positionsList, const std::string allowedPositionTypes, double lineWidth);

  // Automatically calculate simple line connections from  ColoredMarkerList
  static LinesVector getStandardLinesFromColoredMarkerList(const ml::ColoredMarkerList positionsList, const std::string allowedPositionTypes, double lineWidth);

  // Get all lines that end at a given position
  static LinesVector getNewLinesFromAllLines(LinesVector allLines, MLuint endPosition);

  //***********************************************************************************

  // Fill a FiberSetContainer from line positions and line connections
  static void fillFiberSetContainerFromPositionsAndConnections(ml::FiberSetContainer& outFiberSetContainer, const ml::XMarkerList& inLinePositions, const ml::IndexPairList& inLineConnections);

  //////////////////////////////////////////////

};

} // end namespace mlU3D

ML_END_NAMESPACE

#endif // _U3D_MarkerListTools_H