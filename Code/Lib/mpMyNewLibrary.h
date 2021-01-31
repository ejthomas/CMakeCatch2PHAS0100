/*=============================================================================

  MYPROJECT: A software package for whatever.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef mpMyNewLibrary_h
#define mpMyNewLibrary_h

#include "mpWin32ExportHeader.h"
#include <iostream>
#include <vector>

/**
* \file mpMyNewLibrary.h
* \brief Utilities for new library as exercise.
* \ingroup utilities
*/
namespace mp {

/**
* \brief My new function, which prints elements of a vector in a row.
*/
MYPROJECT_WINEXPORT void MyNewPrintFunction(std::vector<int> v);

} // end namespace

#endif