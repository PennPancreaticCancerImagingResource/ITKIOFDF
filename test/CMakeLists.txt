itk_module_test()
set(IOFDF2Tests
  itkFDF2ImageIOTest.cxx
)

CreateTestDriver(IOFDF2 "${IOFDF2-Test_LIBRARIES}" "${IOFDF2Tests}")

itk_add_test(NAME itkFDF2ImageIOTest
  COMMAND IOFDF2TestDriver itkFDF2ImageIOTest
  ${ITK_TEST_OUTPUT_DIR} ${CMAKE_CURRENT_LIST_DIR}/test.fdf)
