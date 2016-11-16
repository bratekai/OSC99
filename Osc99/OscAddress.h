/**
 * @file OscAddress.h
 * @author Seb Madgwick
 * @brief Functions for matching and manipulating OSC address patterns and OSC
 * addresses.
 * @see http://opensoundcontrol.org/spec-1_0
 */

#ifndef OSC_ADDRESS_H
#define OSC_ADDRESS_H

//------------------------------------------------------------------------------
// Includes

#include "OscCommon.h"
#include "OscError.h"
#include <stdbool.h>
#include <stddef.h>

//------------------------------------------------------------------------------
// Function prototypes

#ifdef OSC_RECIEVE_ENABLED

bool OscAddressMatch(const char * oscAddressPattern, const char * const oscAddress);
bool OscAddressMatchPartial(const char * oscAddressPattern, const char * const oscAddress);
bool OscAddressIsLiteral(const char * oscAddressPattern);
int OscAddressGetNumberOfParts(const char * oscAddressPattern);
OscError OscAddressGetPartAtIndex(const char * oscAddressPattern, const int index, char * const destination, const size_t destinationSize);

#endif

#endif

//------------------------------------------------------------------------------
// End of file
