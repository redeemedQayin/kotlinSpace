#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SC_OP 1
#define OUT_OP 2


int main(int argc, char const* argv[])
{
  if(argc <=1){
    printf("Help page is being done\nuse runkt [source code '.kt' path] [output jar file path]\nverify if u have SDK kotlin installed\n");
    return 0;
  }

  /*
   *
   *
   *
   *
   *
  */
  //parameter validation above

  
  char __SOURCE_CODE[250];
  sprintf(__SOURCE_CODE, "%s", argv[SC_OP]);
  

  char __OUT_OP[250];
  sprintf(__OUT_OP, "%s", argv[OUT_OP]);



  char KOTLIN_COMPILE_COMAND[450];
  sprintf(&KOTLIN_COMPILE_COMAND, "kotlinc  %s -include-runtime -d %s", __SOURCE_CODE, __OUT_OP);

  char KOTLIN_RUN_COMAND[250];
  sprintf(&KOTLIN_RUN_COMAND, "java -jar %s", __OUT_OP);
  

  

  system(KOTLIN_COMPILE_COMAND);
  system(KOTLIN_RUN_COMAND);

  return 0;
}

