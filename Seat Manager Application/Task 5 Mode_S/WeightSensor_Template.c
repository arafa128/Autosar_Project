/**
 *
 * \file WeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: WeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 3-30-2024 01:03 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_WeightSensor.h"


/**
 *
 * Runnable WeightSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppWeightSensor_GetWeight
 *
 */

void WeightSensor_GetPosition (SensorWeightType* Weight)
{
	Std_ReturnType status;
	IoWeightSensorReadingType weight;

	/* Server Call Points */
	status = Rte_Call_rpIOGetWeight_IOGet(&weight);
	*Weight = (SensorWeightType) (weight / 1000);
	
}

