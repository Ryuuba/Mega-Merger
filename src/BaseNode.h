//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#if !defined(BASENODE_H)
#define BASENODE_H

#include <omnetpp.h>
#include "Status.h"
#include "MsgKind.h"

class BaseNode : public omnetpp::cSimpleModule {
protected:
  /** @brief A timer to schedule events on this node */
  omnetpp::cMessage* timer;
  /** @brief A message that must be instanced only when a node creates a message */
  omnetpp::cMessage* msg;
  /** @brief The time at which an experiment starts */
  omnetpp::simtime_t startTime;
  /** @brief The current status of this node */
  Status status;
public:
  /** @brief Default constructor */
  BaseNode() : timer(nullptr), msg(nullptr), startTime(0.0) { }
  /** @brief Default destructor which tries to delete the timer */
  virtual ~BaseNode() { cancelAndDelete(timer); }
};

#endif // BASENODE_H
