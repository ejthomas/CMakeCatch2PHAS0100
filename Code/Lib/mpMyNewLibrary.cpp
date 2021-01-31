/*=============================================================================

  MYPROJECT: A software package for whatever.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include "mpMyNewLibrary.h"
#include <iostream>
#include <vector>

namespace mp {
    
//----------------------------------------------------------------------------
void MyNewPrintFunction(std::vector<int> v)
{
    for (auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

}