#include <stdio.h>

int main()
{
  
  int j, jo;
  int m, mo;
  int e, eo;
  int r, ro;
  int s, so;
  
  printf("国語の点数と重みを入力してください：");
  scanf("%d%d",&j ,&jo);

  printf("\n数学の点数と重みを入力してください：");
  scanf("%d%d",&m ,&mo);

  printf("\n英語の点数と重みを入力してください：");
  scanf("%d%d",&e ,&eo);

  printf("\n理科の点数と重みを入力してください：");
  scanf("%d%d",&r ,&ro);

  printf("\n社会の点数と重みを入力してください：");
  scanf("%d%d",&s ,&so);

  printf("\n５教科の重み付き合計点は%dで、重み付き平均点は%fです。\n",(j*jo+m*mo+e*eo+r*ro+s*so), ((double)(j*jo+m*mo+e*eo+r*ro+s*so)/(double)(jo+mo+eo+ro+so)));
  
  
  return 0;
}
