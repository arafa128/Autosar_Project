/**
 *
 * \file SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3-4-2024 07:25 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SeatManager.h"

#define MULTI_STATE_BTN_MINUS           
#define MULTI_STATE_BTN_PLUS            

            
#define MOTOR_STEP_MINUS            
#define MOTOR_STEP_PLUS 


/**
 *
 * Runnable SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_HeightBtnState
 *
 */

void SeatManager_SetHeight (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	/* Logic */
    if(HeightBtnState == MULTI_STATE_BTN_MINUS)
    {
      Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
    }
    else if(HeightBtnState == MULTI_STATE_BTN_PLUS)
    {
      Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
    }
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	MultiStateBtnType SlideBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);
	/* Logic */
    if(SlideBtnState == MULTI_STATE_BTN_MINUS)
    {
      Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
    }
    else if(SlideBtnState == MULTI_STATE_BTN_PLUS)
    {
      Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
    }
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_InclineBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	MultiStateBtnType InclineBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_InclineBtnState(&InclineBtnState);
	/* Logic */
    if(InclineBtnState == MULTI_STATE_BTN_MINUS)
    {
      Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
    }
    else if(InclineBtnState == MULTI_STATE_BTN_PLUS)
    {
      Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
    }
}

