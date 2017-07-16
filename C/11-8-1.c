/*NULL和EOF的区别要注意
 * NULL是0的字面表示法可以赋值给数组，指针，字符串等变量
 * EOF表示文件结束*/
#include<stdio.h>
/*打开文件 ，显示字符数*/

int  main (){
  int ch;
  int i=0;
  FILE *fp ;
  char fname[FILENAME_MAX];

  printf("输入一个文件名\n");
  scanf("%s",fname);

  if ((fp = fopen  (fname , "r") ) == NULL)
      printf("打开该文件失败\n");
  else 
   { 
       while (( ch = fgetc(fp)) != EOF)
        { i++;
          
       }
       printf("一共有%d个字符\n",i);
        fclose (fp);
  
   }
  return 0 ;
}
