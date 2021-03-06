/*--------------------------------------------------------------------

******************************************************************************
* @file ActionMove.hpp
* @author Isaac Jesus da Silva - ROBOFEI-HT - FEI 😛
* @version V1.0.5
* @created 14/07/2016
* @Modified 14/07/2016
* @e-mail isaac25silva@yahoo.com.br
* @revisor Isaac Jesus da Silva
* @e-mail isaac25silva@yahoo.com.br
* @brief action move 😛
****************************************************************************
****************************************************************************
Arquivo cabeçalho contendo metodos de movimentos de acoes
/--------------------------------------------------------------------------*/

#ifndef ActionMove_H
#define ActionMove_H

#include "Action.h"
#include "Walking.h"
#include <blackboard.h>
#include "dynamixel_sdk.h"

using namespace Robot;

// Criação da Classe
class ActionMove
{
    public:

        //Construtor
        ActionMove(int *mem_t, char* filename, dynamixel::PortHandler *portHandler);

        //Destrutor
        ~ActionMove(){};

        void pass_left(dynamixel::PacketHandler *cm730, bool &stop_gait);

        void pass_right(dynamixel::PacketHandler *cm730, bool &stop_gait);

        void goalkeeper(bool &stop_gait);

        void kick_right_weak(bool &stop_gait);

        void kick_left_weak(bool &stop_gait);

        void kick_left_strong(dynamixel::PacketHandler *cm730, bool &stop_gait);

        void kick_right_strong(dynamixel::PacketHandler *cm730, bool &stop_gait);

        void goodBye(bool &stop_gait);

        void greetings(bool &stop_gait);

        void standupFront(bool &stop_gait);

        void standupBack(bool &stop_gait);

        void poseStandup(bool &stop_gait);

    private:
        int *mem;
        int erro;
        int value;
        dynamixel::PortHandler *portHandler;
        uint8_t dxl_error;

        void move_action(int move_number, bool interrupt, bool &stop_gait);
};

//*********************************************************************
//---------------------------------------------------------------------
#endif
