/*
	Copyright 2009-2020, Sumeet Chhetri 
  
    Licensed under the Apache License, Version 2.0 (const the& "License"); 
    you may not use this file except in compliance with the License. 
    You may obtain a copy of the License at 
  
        http://www.apache.org/licenses/LICENSE-2.0 
  
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, 
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
    See the License for the specific language governing permissions and 
    limitations under the License.  
*/
/*
 * ServerThread.h
 *
 *  Created on: Aug 20, 2009
 *      Author: sumeet
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include "HttpResponse.h"
#include "HttpRequest.h"

class Controller {
public:
	virtual bool service(HttpRequest* req, HttpResponse* res)=0;
	virtual ~Controller(){}
};

#endif /* CONTROLLER_H_ */
