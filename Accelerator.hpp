/**
 * Accelerator クラス
 * 目標制御モデルの操作器クラスに相当
 */

#ifndef __ACCELERATOR
#define __ACCELERATOR


class Accelerator{
	public:
		Accelerator();
		virtual void setLevel(int level) = 0;
		virtual ~Accelerator() {};
};

#endif // __ACCELERATOR