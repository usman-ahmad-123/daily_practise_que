// #include<stdio.h>
// #include<string.h>
// int main(){
// FILE *fptr;
// char filename[]="passage.txt";
// fptr = fopen(filename, "r");
// char s[50];
// // fscanf(fptr,"%[^'0/']s",s);
// fprintf(fptr, "First file\n");
// char line[1024];
// while(fgets(line,sizeof(line),fptr)){
//   if(strstr(line,"keyword")){
//     printf("Found: %s",line);
//   }
// }
// }

#include<stdio.h>
#include<string.h>
void searchfile(const char *filename,const char *keyword){
  FILE *file=fopen(filename,"r");
  if(!file){
    printf("Failed to open :%s\n",filename);
    return;
  }
  char line[1024];
  int lines=0;
  int found=0;
  while(fgets(line,sizeof(line),file)){
    lines++;
    if(strstr(line,keyword)){
      printf("Found '%s' on line %d: %s",keyword,lines,line);
      found=1;
    }
  }
  if(!found){
    printf("'%s' not found in the file.\n",keyword);
  }
  fclose(file);
}
int main(){
  const char *filename="passage.txt";
  char s;
  scanf("%[^'\0']",s);
  const char *keyword="s";
  searchfile(filename,keyword);
  return 0;
}


