#include <stdio.h>
#include <stdlib.h> // for exit()

int main(){
	char c;
	FILE *fp;
	fp = fopen("D:\\fl.txt","w+");
	if (fp == NULL){
		printf("fail to open file \"D:\fl.txt\"");
		exit(1);
	}

	printf("Enter text (end with #):\n\n");

    //这种方法也可以，但是无法处理中文
    //因为fscanf遇到空白符会停止读取
    //fscanf(..., " %c")：前面的空格会告诉程序“跳过所有空白符（空格、回车、制表符）”。如果你输入“我 爱 你”，它存进文件会变成“我爱你”（空格丢了）。
//    //fscanf(..., "%c")：它会把你输入的每一个字符都读进来，包括空格、回车、制表符。所以如果你输入“我 爱 你”，它存进文件会是“我 爱 你”（空格没丢）。
    /*
    while(1){
        if (fscanf(stdin, " %c" , &c) != 1) break; //注意这里的空格
        if(c == '#') break;
        fputc(c,fp);
    }
    */
   //而
//fgetc 和  getchar：它们是“老实人”，给什么搬什么。空格、回车、甚至中文字符的每一个字节，它都原封不动地搬运。
/*	while(1){
		if (fscanf(stdin, "%c" , &c) != 1) break;  //注意这里没有空格
		if(c == '#') break;
		fputc(c,fp);
	}
*/
	while ((c = fgetc(stdin)) != '#'){
		fputc(c,fp);
	}

	rewind(fp);
	printf("\n--- reading as followed ---\n");

	while( (c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fprintf(stdout,"\n --- end --- \n");
	fclose(fp);

	return 0;
}

