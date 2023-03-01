#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED

//int pic_gb_x, pic_gb_y, pic_rb_x, pic_rb_y, c_x,c_y;
int dx, dy;
//int pic_x,pic_y;
//
int rb_y = 640;
int gb_y = 640;
int b;


void objectChange() {
//pic_x -= dx;	pic_gb_y -= dy;
//rb_x -= dx;
//if(gb_y <= 0){
///rb_y -= dy;

	if(gb_y< -100){
			gb_y = 520;
		}
		else{
			gb_y -=2;
		}
		if(rb_y < -100){
			rb_y = 520;
		}else{
			rb_y -=2;
		}
	}
	

	

#endif // !MYHEADER_H_INCLUDED
