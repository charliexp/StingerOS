/***************************************
* ͨ�ú���
***************************************/
#include "common.h"

/*******************************************
* �������ܣ���ʱ����
* ���������ns-��ʱʱ��
* ����ֵ����
********************************************/
void delay(int ns){
	int i;

	for(i = 0; i < (ns * 10); i++){
         // do nothing, delay 3 or more sclk periods
	}
}