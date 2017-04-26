#include <python2.7/Python.h>

int main(int argc, char *argv[])
{
  Py_SetProgramName(argv[0]);  /* optional but recommended */
  Py_Initialize();
  PyRun_SimpleString("def test():\n	print 'testing...'\n");
  PyRun_SimpleString("print 'hi'\ntest()\n");
  Py_Finalize();
  return 0;
}
