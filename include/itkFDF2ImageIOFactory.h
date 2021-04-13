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
#ifndef itkFDF2ImageIOFactory_h
#define itkFDF2ImageIOFactory_h
#include "IOFDF2Export.h"
#include "itkObjectFactoryBase.h"
#include "itkImageIOBase.h"

namespace itk
{
/** \class FDF2ImageIOFactory
 *  \ingroup ITKIOFDF2
 * \brief Create instances of FDF2ImageIO objects using an object factory.
 */
class IOFDF2_EXPORT FDF2ImageIOFactory : public ObjectFactoryBase
{
public:
  ITK_DISALLOW_COPY_AND_MOVE(FDF2ImageIOFactory);

  /** Standard class type alias. */
  using Self = FDF2ImageIOFactory;
  using Superclass = ObjectFactoryBase;
  using Pointer = SmartPointer<Self>;
  using ConstPointer = SmartPointer<const Self>;

  /** Class methods used to interface with the registered factories. */
  const char *
  GetITKSourceVersion() const override;
  const char *
  GetDescription() const override;

  /** Method for class instantiation. */
  itkFactorylessNewMacro(Self);

  /** Run-time type information (and related methods). */
  itkTypeMacro(FDF2ImageIOFactory, ObjectFactoryBase);

  /** Register one factory of this type  */
  static void
  RegisterOneFactory()
  {
    FDF2ImageIOFactory::Pointer FdfFactory = FDF2ImageIOFactory::New();
    ObjectFactoryBase::RegisterFactoryInternal(FdfFactory);
  }

protected:
  FDF2ImageIOFactory();
  ~FDF2ImageIOFactory() override;
};


} // end namespace itk

#endif
