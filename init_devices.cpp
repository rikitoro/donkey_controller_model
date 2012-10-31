#include "init_devices.hpp"

#include "sfr29.h"
//
extern "C" {
	extern void init_led();
	extern void init_switch();
	extern void init_motor();
	extern void init_encoder();
}

#include "encoder_driver.h"
#include "led_driver.h"
#include "motor_driver.h"
#include "switch_driver.h"

void init_cpu();

void init_devices()
{
	init_cpu();	
	//
	init_led();
	init_switch();
	init_motor();
	init_encoder();
	
}

void init_cpu()
{
	prc2 = 1;			/*PACR�̏����݋���*/
	pacr = 3;			/*80�s���ɐݒ�*/
	
	/*�N���b�N�ݒ�*/
	prc0=1;
	cm21=0;
	cm06=0;
	prc0=0;
}

