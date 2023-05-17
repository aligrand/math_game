#include <string>
#include <iostream>

using namespace std;

int game()
{
	int info = 0;
	int p = 0;
	int skilllevel = 0;
	char ne = 0;
	char answer = 0;


	printf("                             MATHEMATICAL EQUATION game\n");
	cout << "\n\n               *notice:all of the answers are integer numbers*\n";
	cout << "\n                     *notice:you can only answer 5 times*\n";
	cout << "\n  *notice:when you answer to questions you can by press<p>play again the game";
	cout << "                           and by press<e>exit the game*\n\n";
	printf("\n\npleas select your skill level or information:\n");
	printf("eazy     <1>\n");
	printf("medium   <2>\n");
	printf("hard     <3>\n");
	printf("expert(very hard)   <4>\n");
	printf("information     <5>\n");
	printf("what's your selection?");

	scanf_s("%d", &skilllevel);
	if ((skilllevel > 5) || (skilllevel < 1)){
		while (true)
		{
			cout << "\n\nerror:the number must be 1 to 5 no more!\n\n";
			printf("eazy     <1>\n");
			printf("medium   <2>\n");
			printf("hard     <3>\n");
			printf("expert(very hard)   <4>\n");
			printf("information     <5>\n");
			printf("what's your selection?");

			scanf_s("%d", &skilllevel);
			if ((skilllevel > 5) || (skilllevel < 1)){}
			else{
				break;
			}
		}
	}
	switch (skilllevel)
	{
	case 1:
	{
			  system("cls");
			  printf("\n\n                                   **eazy**\n");
			  printf("\nlevel:1_________________________________[play again<p> & exit<e>]");
			  printf("\nstart...\n");
			  printf("\n2+X+X=8");
			  printf("\nX=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main = game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  int checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '3')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nx=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
				  }
			  }
			  if (checkbox == 0)
			  {
				  printf("you lose!\n");
			  }
			  printf("\nnext:press<n>");
			  printf("\nexit:press<other key>");
			  cin >> ne;
			  if (ne == 'n')
			  {
			  }
			  else{
				  return 0;
			  }
			  system("cls");
			  printf("\n\n                                  **eazy**\n");
			  printf("\nlevel:2_________________________________[play again<p> & exit<e>]");
			  printf("\nstart...\n");
			  printf("\n7*X+X=16");
			  printf("\nX=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '2')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nx=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
				  }
			  }
			  if (checkbox == 0)
			  {
				  printf("you lose!\n");
			  }
			  printf("\nnext:press<n>");
			  printf("\nexit:press<other key>");
			  cin >> ne;
			  if (ne == 'n')
			  {
				  ;
			  }
			  else
			  {
				  return 0;
			  }
			  system("cls");
			  printf("\n\n                                  **eazy**\n");
			  printf("\nlevel:3_________________________________[play again<p> & exit<e>]");
			  printf("\nstart...\n");
			  printf("\n20/X-X=1");
			  printf("\nX=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '4')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nX=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
				  }
			  }
			  if (checkbox == 0)
			  {
				  printf("you lose!\n");
			  }
			  printf("\nnext:press<n>");
			  printf("\nexit:press<other key>");
			  cin >> ne;
			  if (ne == 'n')
			  {
				  ;
			  }
			  else
			  {
				  return 0;
			  }
	}
	case 2:
	{
			  system("cls");
			  printf("\n\n                                  **medium**\n");
			  printf("\nlevel:1_________________________________[play again<p> & exit<e>]");
			  printf("\nstart...\n");
			  printf("\n7-X+Y=2*X+Y+Y");
			  printf("\nX=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  int checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '2')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nX=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
					  printf("\nyou lose in the number X!\n");
				  }
			  }
			  printf("\nY=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '1')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nY=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
				  }
				  if (checkbox == 0)
				  {
					  printf("you lose!\n");
				  }
			  }
			  printf("\nnext:press<n>");
			  printf("\nexit:press<other key>");
			  cin >> ne;
			  if (ne == 'n')
			  {

			  }
			  else
			  {
				  return 0;
			  }
			  system("cls");
			  printf("\n\n                                  **medium**\n");
			  printf("\nlevel:2_________________________________[play again<p> & exit<e>]");
			  printf("\nstart...\n");
			  printf("\n12*Y=4*Y*3");
			  printf("\nY=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '1')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nY=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
				  }
			  }
			  if (checkbox == 0)
			  {
				  printf("you lose!\n");
			  }
			  printf("\nnext:press<n>");
			  printf("\nexit:press<other key>");
			  cin >> ne;
			  if (ne == 'n')
			  {
				  ;
			  }
			  else
			  {
				  return 0;
			  }
			  system("cls");
			  printf("\n\n                                  **medium**\n");
			  printf("\nlevel:3_________________________________[play again<p> & exit<e>]");
			  printf("\nstart...\n");
			  printf("\n24-X=7*X");
			  printf("\nX=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '3')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nX=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
				  }
			  }
			  if (checkbox == 0)
			  {
				  printf("you lose!\n");
			  }
			  printf("\nnext:press<n>");
			  printf("\nexit:press<other key>");
			  cin >> ne;
			  if (ne == 'n')
			  {
				  ;
			  }
			  else
			  {
				  return 0;
			  }
	}
	case 3:
	{
			  system("cls");
			  printf("\n\n                                  **hard**\n");
			  printf("\nlevel:1_________________________________[play again<p> & exit<e>]");
			  printf("\nstart...\n");
			  printf("\n2^3*Y=32/Y");
			  printf("\nY=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  int checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '2')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nY=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
				  }
			  }
			  if (checkbox == 0)
			  {
				  printf("you lose!\n");
			  }
			  printf("\nnext:press<n>");
			  printf("\nexit:press<other key>");
			  cin >> ne;
			  if (ne == 'n')
			  {
				  ;
			  }
			  else
			  {
				  return 0;
			  }
			  system("cls");
			  printf("\n\n                                  **hard**\n");
			  printf("\nlevel:2_________________________________[play again<p> & exit<e>]");
			  printf("\nstart...\n");
			  printf("\n9+X^2=11+X");
			  printf("\nX=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '2')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nX=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
				  }
			  }
			  if (checkbox == 0)
			  {
				  printf("you lose!\n");
			  }
			  printf("\nnext:press<n>");
			  printf("\nexit:press<other key>");
			  cin >> ne;
			  if (ne == 'n')
			  {
				  ;
			  }
			  else
			  {
				  return 0;
			  }
			  system("cls");
			  printf("\n\n                                  **hard**\n");
			  printf("\nlevel:3_________________________________[play again<p> & exit<e>]");
			  printf("\nstart...\n");
			  printf("\n√9*X=X^2");
			  printf("\nX=?");
			  cin >> answer;
			  if (answer == 'p'){
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else if (answer == 'e'){
				  return 0;
			  }
			  checkbox = 0;
			  for (int d = 1; d <= 5; d++)
			  {
				  if (answer == '3')
				  {
					  printf("your answer is correct!\n\n");
					  checkbox = 1;
					  break;
				  }
				  else
				  {
					  printf("your answer is wrong!");
					  printf("\nX=?");
					  cin >> answer;
					  if (answer == 'p'){
						  int main =game();
						  if (main == 0){
							  return 0;
						  }
					  }
					  else if (answer == 'e'){
						  return 0;
					  }
				  }
			  }
			  if (checkbox == 0)
			  {
				  printf("you lose!\n");
			  }
			  printf("\nnext:press<n>");
			  printf("\nexit:press<other key>");
			  cin >> ne;
			  if (ne == 'n')
			  {
				  ;
			  }
			  else
			  {
				  return 0;
			  }
	}
	case 4:{
			   system("cls");
			   printf("\n\n                                  **expert(very hard)**\n");
			   printf("\nlevel:1_________________________________[play again<p> & exit<e>]");
			   printf("\nstart...\n");
			   printf("\nX+X+X=12 -----> Y*Y*X=36 ");
			   printf("\nX-Y=?");
			   cin >> answer;
			   if (answer == 'p'){
				   int main =game();
				   if (main == 0){
					   return 0;
				   }
			   }
			   else if (answer == 'e'){
				   return 0;
			   }
			   int checkbox = 0;
			   for (int d = 1; d <= 5; d++)
			   {
				   if (answer == '1')
				   {
					   printf("your answer is correct!\n\n");
					   checkbox = 1;
					   break;
				   }
				   else
				   {
					   printf("your answer is wrong!");
					   printf("\nX-Y=?");
					   cin >> answer;
					   if (answer == 'p'){
						   int main =game();
						   if (main == 0){
							   return 0;
						   }
					   }
					   else if (answer == 'e'){
						   return 0;
					   }
				   }
			   }
			   if (checkbox == 0)
			   {
				   printf("you lose!\n");
			   }
			   printf("\nnext:press<n>");
			   printf("\nexit:press<other key>");
			   cin >> ne;
			   if (ne == 'n')
			   {
				   ;
			   }
			   else
			   {
				   return 0;
			   }
			   system("cls");
			   printf("\n\n                                  **expert(very hard)**\n");
			   printf("\nlevel:2_________________________________[play again<p> & exit<e>]");
			   printf("\nstart...\n");
			   printf("\nX*X*X=8 -----> Y/X+Y=6 -----> Z+X-2Y+3X=1 ");
			   printf("\nZ*X*Y=?");
			   cin >> answer;
			   if (answer == 'p'){
				   int main =game();
				   if (main == 0){
					   return 0;
				   }
			   }
			   else if (answer == 'e'){
				   return 0;
			   }
			   checkbox = 0;
			   for (int d = 1; d <= 5; d++)
			   {
				   if (answer == '8')
				   {
					   printf("your answer is correct!\n\n");
					   checkbox = 1;
					   break;
				   }
				   else
				   {
					   printf("your answer is wrong!");
					   printf("\nZ*X*Y=?");
					   cin >> answer;
					   if (answer == 'p'){
						   int main =game();
						   if (main == 0){
							   return 0;
						   }
					   }
					   else if (answer == 'e'){
						   return 0;
					   }
				   }
			   }
			   if (checkbox == 0)
			   {
				   printf("you lose!\n");
			   }
			   printf("\nnext:press<n>");
			   printf("\nexit:press<other key>");
			   cin >> ne;
			   if (ne == 'n')
			   {
				   ;
			   }
			   else
			   {
				   return 0;
			   }
			   system("cls");
			   printf("\n\n                                  **expert(very hard)**\n");
			   printf("\nlevel:3_________________________________[play again<p> & exit<e>]");
			   printf("\nstart...\n");
			   printf("\n√16+X=3^2 -----> Y-X=X+1/2X -----> Y+Y+Y-X^2=Z ");
			   printf("\nY+X+Z=?");
			   cin >> answer;
			   if (answer == 'p'){
				   int main =game();
				   if (main == 0){
					   return 0;
				   }
			   }
			   else if (answer == 'e'){
				   return 0;
			   }
			   checkbox = 0;
			   for (int d = 1; d <= 5; d++)
			   {
				   if (answer == '30')
				   {
					   printf("your answer is correct!\n\n");
					   checkbox = 1;
					   break;
				   }
				   else
				   {
					   printf("your answer is wrong!");
					   printf("\nY+X+Z=?");
					   cin >> answer;
					   if (answer == 'p'){
						   int main =game();
						   if (main == 0){
							   return 0;
						   }
					   }
					   else if (answer == 'e'){
						   return 0;
					   }
				   }
			   }
			   if (checkbox == 0)
			   {
				   printf("you lose!\n");
			   }
			   printf("\nnext:press<n>");
			   printf("\nexit:press<other key>");
			   cin >> ne;
			   if (ne == 'n')
			   {
				   ;
			   }
			   else
			   {
				   return 0;
			   }
	}
	info = 1;
	case 5:
	{
			  system("cls");
			  cout << "\n\n                                  **information**\n\n";
			  if (info == 1){
				  printf("\n\nthanks for finishing the game.");
			  }
			  printf("\n\nyou are a smart person.i hope you to win in the other quizes.\n");
			  printf("\n\n+++PROGRAMMER:ALI ELAHI+++\n");
			  printf("\n\n\nif you want to play again the  game press<p>and for exit press<other key>");
			  cin >> ne;
			  if (ne == 'p')
			  {
				  int main =game();
				  if (main == 0){
					  return 0;
				  }
			  }
			  else
			  {
				  return 0;
			  }
	}
	}


	while (true){}
	return 0;
}


int main()
{
	game();
	
	return 0;
}