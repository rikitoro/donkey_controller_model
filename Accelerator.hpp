/**
 * Accelerator �N���X
 * �ڕW���䃂�f���̑����N���X�ɑ���
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