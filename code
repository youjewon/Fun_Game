#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 주요 코드
//int main() {
//	FILE *fp, *fp2;
//
//	if ((fp = fopen("example.txt", "w")) == NULL) {
//		printf("파일 읽기 오류! \n");
//		return 0;
//	}
//
//	fputs("안녕하세요 여러분 \n Psi 입니다 \n", fp);
//
//	if ((fp2 = fopen("example.txt", "a")) == NULL) {
//		printf("파일 읽기 오류! \n");
//		return 0;
//	}
//
//	fputs("어 그래 안녕?", fp2);
//	return 0;
//}

void Title();
int RSP();
void Rank();
void PrintComRSP(int i);
void PrintUserRSP(int i);
void reGame();

void SaveData(int win, int lose, int draw, int count);
void ReSetData();

int cmd;
int w = 0;
int l = 0;
int d = 0;
int c = 0;

int wc = 0;
int lc = 0;
int dc = 0;
int cc = 0;

int* Fw;
int* Fl;
int* Fd;
int* Fc;

*Fw = &w;
*Fl = &l;
*Fd = &d;
*Fc = &c;

int main()
{

	Title();
	scanf_s("%d", &cmd);
	if (cmd == 1)
	{
		RSP();
	}
	else if (cmd == 2)
	{
		Rank();
	}
	else if (cmd == 3)
	{
		ReSetData();
	}


}

void Title()
{
	printf("======== ======== ======== ======== ========\n");

	printf("\t\t가위 바위 보\t \t\n");

	printf("======== ======== ======== ======== ========\n");

	printf("1. 게임 시작 \t 2.랭크 보기 \t 3.초기화\n");

	printf("======== ======== ======== ======== ========\n");

	
}

int  RSP()
{
	int GG = 1;
	int rsp = 0;

	FILE* data = fopen("GData.txt", "r");

	fscanf(data, "%d %d %d %d", Fw, Fl, Fd, Fc);
	if ((data = fopen("GData.txt", "w")) == NULL) {
		printf("파일 읽기 오류! \n");
		return 0;
	}

	srand((unsigned)time(NULL));

	int i = rand() % 3 + 1;
	//printf("%5d\n", i);
	printf("1번 : 바위\t 2번 : 가위\t 3번 : 보\n 사용자 입력 : ");
	scanf_s("%d", &rsp);


	if (rsp >= 4)
	{
		printf("다시 선택해주세요!\n");
		printf("1번 : 바위\t 2번 : 가위\t 3번 : 보\n 사용자 입력 : ");
		scanf_s("%d", &rsp);
		while (rsp >= 4)
		{
			printf("다시 선택해주세요!\n");
			printf("1번 : 바위\t 2번 : 가위\t 3번 : 보\n 사용자 입력 : ");
			scanf_s("%d", &rsp);
			if (rsp < 4)
				break;
		}

	}
	if (rsp == 1)	// rock;
	{
		PrintUserRSP(rsp);
		PrintComRSP(i);
		if (i == 1)
		{
			printf("무승부 입니다.");
			dc++;
			cc++;
			//SaveData(w,l,d+1,c+1);
		}
		else if (i == 2)
		{
			printf("이겼습니다.");
			wc++;
			cc++;
			//SaveData(w+1, l, d, c + 1);
		}
		else if (i == 3)
		{
			printf("졌습니다.");
			lc++;
			cc++;
			//SaveData(w, l+1, d, c + 1);
		}

	}
	else if (rsp == 2)	//scissirs
	{
		PrintUserRSP(rsp);
		PrintComRSP(i);
		if (i == 1)
		{
			printf("졌습니다.");
			lc++;
			cc++;
			//SaveData(w, l + 1, d, c + 1);
		}
		else if (i == 2)
		{
			printf("무승부 입니다.");
			dc++;
			cc++;
			//SaveData(w, l, d + 1, c + 1);
		}
		else if (i == 3)
		{
			printf("이겼습니다.");
			wc++;
			cc++;

			//SaveData(w + 1, l, d, c + 1);
		}

	}
	else if (rsp == 3) // paper
	{
		PrintUserRSP(rsp);
		PrintComRSP(i);
		if (i == 1)
		{
			printf("이겼습니다.");
			wc++;
			cc++;
			//SaveData(w + 1, l, d, c + 1);
		}
		else if (i == 2)
		{
			printf("졌습니다.");
			lc++;
			cc++;
			//SaveData(w, l + 1, d, c + 1);
		}
		else if (i == 3)
		{
			printf("무승부 입니다.");
			dc++;
			cc++;
			//SaveData(w, l, d + 1, c + 1);
		}
	}

	reGame();
	return 0;
}


//bug!
void reGame()
{
	int RSPcmd;
	printf("\n\tre?\t( 0 : 종료\t 1 : 다시하기 )\n\t\t");

	// 0 end  1 replay
	scanf_s("%d", &RSPcmd);
	if (RSPcmd == 1)
		RSP();
	else
		SaveData(w + wc, l + lc, d + dc, c + cc);

}

void Rank()
{
	FILE* data = fopen("GData.txt", "r");
	fscanf(data, "%d %d %d %d", Fw, Fl, Fd, Fc);
	printf("%d전 %d승 %d무 %d패", c,w,d,l);

	//system("peuse");

}

void SaveData(int win, int lose, int draw, int count)
{
	FILE* Data = fopen("GData.txt", "w");
	fprintf(Data, "%d %d %d %d", win, lose, draw, count);
}

void ReSetData()
{
	FILE* Data = fopen("GData.txt", "w");
	fprintf(Data, "%d %d %d %d", 0, 0, 0, 0);
}

void PrintComRSP(int i)
{
	/* Rock = 1 Scissors = 2 Paper = 3 */
	if (i == 1) {
		printf("컴퓨터 : 바위\n");
	}
	else if (i == 2) {
		printf("컴퓨터 : 가위\n");
	}
	else if (i == 3) {
		printf("컴퓨터 : 보\n");
	}
}

void PrintUserRSP(int i)
{
	printf("\n");
	/* Rock = 1 Scissors = 2 Paper = 3 */
	if (i == 1) {
		printf("유저 : 바위\n");
	}
	else if (i == 2) {
		printf("유저 : 가위\n");
	}
	else if (i == 3) {
		printf("유저 : 보\n");
	}
}
