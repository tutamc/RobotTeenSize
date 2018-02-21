#ifndef _DXL_MANAGER_CMD_PROCESS_H_
#define _DXL_MANAGER_CMD_PROCESS_H_


#include "LinuxDARwIn.h"
#include "../Framework_Dynamixel/include/dynamixel_sdk/dynamixel_sdk.h"
 #include <vector>


#define PROGRAM_VERSION		"v1.00"
#define SCREEN_COL			80
#define SCREEN_ROW			24

// Position of Column
#define CMD_COL			2
#define STP7_COL		19
#define STP0_COL		25
#define STP1_COL		30
#define STP2_COL		35
#define STP3_COL		40
#define STP4_COL		45
#define STP5_COL		50
#define STP6_COL		55
#define CWSLOPE_COL		60
#define CCWSLOPE_COL	61
#define NAME_COL		63
#define ADDR_COL		72
#define PAGENUM_COL		75
#define PAGEPARAM_COL	76

// Position of Row
#define ID_1_ROW	0
#define ID_2_ROW	1
#define ID_3_ROW	2
#define ID_4_ROW	3
#define ID_5_ROW	4
#define ID_6_ROW	5
#define ID_7_ROW	6
#define ID_8_ROW	7
#define ID_9_ROW	8
#define ID_10_ROW	9
#define ID_11_ROW	10
#define ID_12_ROW	11
#define ID_13_ROW	12
#define ID_14_ROW	13
#define ID_15_ROW	14
#define ID_16_ROW	15
#define ID_17_ROW	16
#define ID_18_ROW	17
#define ID_19_ROW	18
#define ID_20_ROW	19
#define ID_21_ROW	20
#define ID_22_ROW	21
#define PAUSE_ROW	22
#define SPEED_ROW	23
#define CMD_ROW		24
#define NAME_ROW		0
#define PAGENUM_ROW		1
#define ADDR_ROW		2
#define PLAYCOUNT_ROW	3
#define STEPNUM_ROW		4
#define PLAYSPEED_ROW	5
#define ACCEL_ROW		6
#define NEXT_ROW		7
#define EXIT_ROW		8


int _getch();
bool AskSave();

// uint8_t dxl_error;
// dynamixel::PortHandler *portHandler;
// dynamixel::PacketHandler *packetHandler;


// Move cursor
void GoToCursor(int col, int row);
void MoveUpCursor();
void MoveDownCursor();
void MoveLeftCursor();
void MoveRightCursor();

// Disp & Drawing
// void DrawIntro(Robot::CM730 *cm730);
void DrawIntro(dynamixel::PacketHandler *packetHandler, dynamixel::PortHandler *portHandler);
void DrawEnding();
void DrawPage();
void DrawStep(int index);
void DrawName();
void DrawStepLine(bool erase);
void ClearCmd();
void PrintCmd(const char *message);

// Edit value
// void UpDownValue(Robot::CM730 *cm730, int offset);
void UpDownValue(dynamixel::PacketHandler *packetHandler, dynamixel::PortHandler *portHandler, int offset);
// void SetValue(Robot::CM730 *cm730, int value);
void SetValue(dynamixel::PacketHandler *packetHandler, dynamixel::PortHandler *portHandler, uint32_t value);
int GetValue();
// void ToggleTorque(Robot::CM730 *cm730);
void ToggleTorque(dynamixel::PacketHandler *packetHandler, dynamixel::PortHandler *portHandler);

// Command process
void BeginCommandMode();
void EndCommandMode();
void HelpCmd();
void NextCmd();
void PrevCmd();
void PageCmd(int index);
void TimeCmd();
void SpeedCmd();
// void PlayCmd(Robot::CM730 *cm730);
void PlayCmd(dynamixel::PacketHandler *packetHandler, dynamixel::PortHandler *portHandler);
void ListCmd();
// void OnOffCmd(Robot::CM730 *cm730, bool on, int num_param, int *list);
void OnOffCmd(dynamixel::PacketHandler *packetHandler, dynamixel::PortHandler *portHandler, bool on, int num_param, int *list);
void WriteStepCmd(int index);
void DeleteStepCmd(int index);
void InsertStepCmd(int index);
void MoveStepCmd(int src, int dst);
void CopyCmd(int index);
void NewCmd();
// void GoCmd(Robot::CM730 *cm730, int index);
void GoCmd(dynamixel::PacketHandler *packetHandler, dynamixel::PortHandler *portHandler, int index);
void SaveCmd();
void NameCmd();
void goInitPage(); //Criando novas funcoes
void backToPage(); //Criando novas funcoes
// void readServo(Robot::CM730 *cm730);
void readServo(dynamixel::PacketHandler *packetHandler, dynamixel::PortHandler *portHandler);

#endif
