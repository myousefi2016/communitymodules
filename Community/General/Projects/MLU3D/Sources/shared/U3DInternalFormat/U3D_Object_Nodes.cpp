//----------------------------------------------------------------------------------
// This header file contains the class definition for an U3D object
//
// \file    U3D_Object_Nodes.cpp
// \author  Axel Newe (axel.newe@fau.de)
// \date    2016-10-01
//----------------------------------------------------------------------------------


// Local includes
#include "U3D_Object_Nodes.h"


ML_START_NAMESPACE

namespace mlU3D {

  // ****************************************************************************************************
  //
  // Class NodeBase: base class for all view nodes, group nodes, model nodes & light nodes
  //
  // ****************************************************************************************************

  //! Implements code for the runtime type system of the ML
  ML_CLASS_SOURCE(mlU3D::NodeBase, RefCountedBase);

  //----------------------------------------------------------------------------------

  NodeBase::NodeBase() : RefCountedBase()
  {
    nodeName = "";
  }

  //----------------------------------------------------------------------------------

  NodeBase::~NodeBase()
  {
  }

  //----------------------------------------------------------------------------------


  // ****************************************************************************************************
  //
  // Class ViewNode: Represents a View Node
  //
  // ****************************************************************************************************

  //! Implements code for the runtime type system of the ML
  ML_CLASS_SOURCE(mlU3D::ViewNode, mlU3D::NodeBase);

  //----------------------------------------------------------------------------------

  ViewNode::ViewNode() : NodeBase()
  {
    displayName  = "";
    resourceName = "";
  }

  //----------------------------------------------------------------------------------

  ViewNode::~ViewNode()
  {
  }

  //----------------------------------------------------------------------------------


  // ****************************************************************************************************
  //
  // Class GroupNode: Represents a Group Node
  //
  // ****************************************************************************************************

  //! Implements code for the runtime type system of the ML
  ML_CLASS_SOURCE(mlU3D::GroupNode, mlU3D::NodeBase);

  //----------------------------------------------------------------------------------

  GroupNode::GroupNode() : NodeBase()
  {
    displayName = "";
    parentName  = "";
  }

  //----------------------------------------------------------------------------------

  GroupNode::~GroupNode()
  {
  }

  //----------------------------------------------------------------------------------


  // ****************************************************************************************************
  //
  // Class ModelNode: Represents a Model Node
  //
  // ****************************************************************************************************

  //! Implements code for the runtime type system of the ML
  ML_CLASS_SOURCE(mlU3D::ModelNode, mlU3D::NodeBase);

  //----------------------------------------------------------------------------------

  ModelNode::ModelNode() : NodeBase()
  {
    displayName  = "";
    internalName = "";
    groupPath    = "";
    shaderName   = "";
    resourceName = "";
    visibility   = 0;
  }

  //----------------------------------------------------------------------------------

  ModelNode::~ModelNode()
  {
  }

  //----------------------------------------------------------------------------------


  // ****************************************************************************************************
  //
  // Class LightNode: Represents a Light Node
  //
  // ****************************************************************************************************

  //! Implements code for the runtime type system of the ML
  ML_CLASS_SOURCE(mlU3D::LightNode, mlU3D::NodeBase);

  //----------------------------------------------------------------------------------

  LightNode::LightNode() : NodeBase()
  {
    displayName = "";
    resourceName = "";
  }

  //----------------------------------------------------------------------------------

  LightNode::~LightNode()
  {
  }

  //----------------------------------------------------------------------------------

} // end namespace mlU3D

ML_END_NAMESPACE
