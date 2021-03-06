/**
 * @file Refrigerator.h
 * @author Christoff Linde
 * @brief Specific type of CateringEquipment
 * @version 0.1
 * @date 2020-10-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CateringEquipment.h"

#if !defined(REFRIGERATOR_H)
#define REFRIGERATOR_H

class Refrigerator : public CateringEquipment
{
public:
    /**
     * @brief Construct a new Refrigerator object
     */
    Refrigerator();

};

#endif // REFRIGERATOR_H
