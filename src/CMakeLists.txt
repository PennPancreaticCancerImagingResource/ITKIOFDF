set(IOFDF2_SRC
  itkFDF2ImageIO.cxx
  itkFDF2CommonImageIO.cxx
  itkFDF2ImageIOFactory.cxx)

add_library(IOFDF2 ${ITK_LIBRARY_BUILD_TYPE} ${IOFDF2_SRC})

target_link_libraries(IOFDF2 ${ITKIOImageBase_LIBRARIES} ${ITKTransform_LIBRARIES})
itk_module_target(IOFDF2)
