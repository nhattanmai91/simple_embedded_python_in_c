#include <stdlib.h>
#include <Python.h>

int main()
{
  printf("Hello world!!!\n");
  Py_Initialize();
  PyRun_SimpleString("import string");
  PyRun_SimpleString("words = string.split('Mai Nhat Tan')");
  PyRun_SimpleString("print string.join(words,'-')");
  Py_Finalize();
  return 0;
}
