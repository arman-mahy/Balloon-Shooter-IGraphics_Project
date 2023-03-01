# include "iGraphics.h"
#include "myheader.h"
#include <iostream>


int a=1,pic_b_x,pic_b_y;
int pic_x,pic_y;
int image1, image2, image3,image4,image5;
int b_x, b_y;
int c_x,c_y;

int score = 0;
int gb_point = 10;
int rb_point = 20;
char score_char[10 + sizeof(char)];

void iDraw()
{

	iClear();

	iShowImage(0,0,640,520,image5);
	
	if(a==1){
		
		iShowImage(225, gb_y, 100, 100, image1);
	}
	if(a==2)
	{
		iShowImage(325, rb_y, 120, 120, image2);
	}

	if(a == 1)
	{
		iShowImage(325, rb_y, 120, 120, image4);
		rb_y = 520;
	}
	
	if(a == 2)
	{
		iShowImage(225, gb_y, 100, 100, image4);
		gb_y = 520;
	}

	///////////
	iShowImage(c_x,c_y,100,100,image3);	
	
	if(rb_y< -100 || gb_y< -100)
	{
		
		iSetColor(255, 0, 0);
	iText(290, 125, "GAME OVER BOY!!!! ");
	iPauseTimer(0);
	
	}

    std::sprintf(score_char, "%d", score);

    iText(565, 503, score_char);

	iSetColor(255, 0, 0);
	iText(512, 503, "Score: ");
	iText(10, 10, "Press p for pause, r for resume, END for exit.");
}


void iMouseMove(int mx, int my)
{

}

void iPassiveMouse(int mx, int my)
{
	printf("(x,y):%d,%d \n",mx, my);
	c_x = mx -50;
	c_y =my -50;
	
}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx >= 225 && mx <= 325)
		{
			printf("%d\n%d\n",my,gb_y);
			if(my >= gb_y && my <= gb_y+100)
			{
				a=2;
				 score+= gb_point;
			}
		}
		if(mx >= 325 && mx <=425)
		{
			printf("%d\n%d\n",my,gb_y);
			if(my >= rb_y && my <= rb_y+100)
			{
				a=1;
				 score+= rb_point;
			}
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

void iKeyboard(unsigned char key)
{
	if (key == 'p')
	{
		iPauseTimer(0);
	}
	if (key == 'r')
	{
		iResumeTimer(0);
	}

}

void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}

}

int main()
{

	iInitialize(640, 520, "Ballon Shooter");
	pic_x =0;
	pic_y = 640;
	iSetTimer(5,objectChange);

	image1 = iLoadImage("images\\gb.png");
	image2 = iLoadImage("images\\rb.png");
	image3 = iLoadImage("images\\c.png");
	image4 = iLoadImage("images\\boom.png");
	image5 = iLoadImage("images\\bk.jpg");

	iStart();

	return 0;
}

/// MY CUSTOM header.h ( uploaded only .cpp file thats why commented in here if needed////

////int pic_gb_x, pic_gb_y, pic_rb_x, pic_rb_y, c_x,c_y;
//int dx, dy;
////int pic_x,pic_y;
////
//int rb_y = 640;
//int gb_y = 640;
//int b;
//
//
//void objectChange() {
////pic_x -= dx;	pic_gb_y -= dy;
////rb_x -= dx;
////if(gb_y <= 0){
/////rb_y -= dy;
//
//	if(gb_y< -100){
//			gb_y = 520;
//		}
//		else{
//			gb_y -=2;
//		}
//		if(rb_y < -100){
//			rb_y = 520;
//		}else{
//			rb_y -=2;
//		}
//	}
//	
//
//	
//
//#endif // !MYHEADER_H_INCLUDED