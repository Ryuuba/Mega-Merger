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

#if !defined(BASE_ACTION_H)
#define BASE_ACTION_H

#define Add_Action(CLASSNAME) std::make_shared<CLASSNAME>(this)

class BaseAction {
private:
  const char* name;
public:
  /** @brief Default constructor: sets the value of member name */
  BaseAction(const char* n) : name(n) { }
  /** @brief Abstract member function that derived class overloads to act as
   *  functors */
  virtual void operator()(Event) = 0;
  /** @brief Returns the name of the action */
  virtual const char* getName() { return name; }
};

#endif // BASE_ACTION_H
