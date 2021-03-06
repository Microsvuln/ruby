/*******************************************************************************
 *
 * (c) Copyright IBM Corp. 2000, 2016
 *
 *  This program and the accompanying materials are made available
 *  under the terms of the Eclipse Public License v1.0 and
 *  Apache License v2.0 which accompanies this distribution.
 *
 *      The Eclipse Public License is available at
 *      http://www.eclipse.org/legal/epl-v10.html
 *
 *      The Apache License v2.0 is available at
 *      http://www.opensource.org/licenses/apache2.0.php
 *
 * Contributors:
 *    Multiple authors (IBM Corp.) - initial implementation and documentation
 *******************************************************************************/

#ifndef RUBY_CODEGENERATORBASE_INCL
#define RUBY_CODEGENERATORBASE_INCL

/*
 * The following #define and typedef must appear before any #includes in this file
 */
#ifndef RUBY_CODEGENERATORBASE_CONNECTOR
#define RUBY_CODEGENERATORBASE_CONNECTOR
namespace Ruby { class CodeGenerator; }
namespace Ruby { typedef CodeGenerator CodeGeneratorConnector; }
#endif


#include "codegen/OMRCodeGenerator.hpp"

namespace Ruby
{

class OMR_EXTENSIBLE CodeGenerator : public OMR::CodeGeneratorConnector
   {
   public:

   CodeGenerator() :
      OMR::CodeGeneratorConnector() {}

   };

}
#endif


