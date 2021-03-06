/*
	Copyright 2009-2020, Sumeet Chhetri 
  
    Licensed under the Apache License, Version 2.0 (the "License"); 
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
 * ConnectionSettings.h
 *
 *  Created on: Jan 30, 2010
 *      Author: sumeet
 */

#ifndef CONNECTIONSETTINGS_H_
#define CONNECTIONSETTINGS_H_
#include "string"


class ConnectionSettings {
	std::string mode;//ldap|database|filesystem
	std::string source;
	std::string username;
	std::string passwd;
	std::string address;
public:
	ConnectionSettings();
	ConnectionSettings(std::string,std::string,std::string,std::string,std::string);
	virtual ~ConnectionSettings();
	friend class ComponentGen;
};

#endif /* CONNECTIONSETTINGS_H_ */
/*
mode=ldap
source=host:port
username=user
passwd=user
address=ldap://example.com:9765

mode=database
source=dsn-name
username=user
passwd=user
address=oracle://host:port

mode=filesystem
source=host:port
username=user //ftp
passwd=user //ftp
address=ftp://example.com:9765
*/
