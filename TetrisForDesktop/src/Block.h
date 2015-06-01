#ifndef _BLOCK_H
#define _BLOCK_H
#include "Point.h"

#define POSITIONS_SIZE 4

typedef struct _block{
	Point positions[POSITIONS_SIZE][POSITIONS_SIZE];
	int current;
	int next;
	int hold;
	int direction;
	int color;
}Block;

Block Block_Make(int isFirst, Block block);
Block Block_Move(Block block, int direction);
Point* Block_GetPositions(Block block);
void Block_ChangeCurrentForHold(Block* block);
int Block_IsHoldSet(Block block);
void Block_PrintNext(Block block, int x, int y);
void Block_PrintHold(Block block, int x, int y);

#endif