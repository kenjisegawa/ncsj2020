#include	<stdio.h>
/*
  �R�}���h���C������̃p�����[�^���m�F����v���O����
  �^�[�~�i������R���p�C�����ł���悤�ɂȂ����̂ŁA
	C++�ł͂Ȃ�����ǁA�m�F�̂��ߍ쐬���܂����B

	C/C++�ł́Amain()�֐��̈����Ƃ��āA
	�R�}���h���͎��̏����󂯎�邱�Ƃ��ł��܂��B

	int  argc			:	�p�����[�^�̐���\���܂��B���ɂ́A�R�}���h���̂�����܂��B
	char *argv[]	:	�R�}���h���͎��̏����A�X�y�[�X�ŋ�؂��āA�z��Ɋi�[���Ă��܂��B
									�z��̍ŏ��́A�v���O�����N�����̃R�}���h�ł��B
*/
int main(int argc,char *argv[]){
	int  i;

	printf("argc : %d\n",argc);

	for(i=0;i<argc;i++){
		printf("argv[%d] : %s\n",i,argv[i]);
	}

	return 0;
}
