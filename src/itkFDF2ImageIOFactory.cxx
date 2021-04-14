/*=========================================================================
 *
 *  Copyright NumFOCUS
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#include "itkFDF2ImageIOFactory.h"
#include "itkCreateObjectFunction.h"
#include "itkFDF2ImageIO.h"
#include "itkVersion.h"


namespace itk
{
FDF2ImageIOFactory::FDF2ImageIOFactory()
{
  this->RegisterOverride(
    "itkImageIOBase", "itkFDF2ImageIO", "FDF2 Image IO", true, CreateObjectFunction<FDF2ImageIO>::New());
}

FDF2ImageIOFactory::~FDF2ImageIOFactory() = default;

const char *
FDF2ImageIOFactory::GetITKSourceVersion() const
{
  return ITK_SOURCE_VERSION;
}

const char *
FDF2ImageIOFactory::GetDescription() const
{
  return "FDF2 ImageIO Factory, allows the loading of Varian FDF images into Insight";
}


// Undocumented API used to register during static initialization.
// DO NOT CALL DIRECTLY.

static bool FDF2ImageIOFactoryHasBeenRegistered;

void IOFDF2_EXPORT
     FDF2ImageIOFactoryRegister__Private()
{
  if (!FDF2ImageIOFactoryHasBeenRegistered)
  {
    FDF2ImageIOFactoryHasBeenRegistered = true;
    FDF2ImageIOFactory::RegisterOneFactory();
  }
}


} // end namespace itk
