/*
 *  Messages.h
 *  HGmod
 *
 *  Created by Bernard Giroux on 06-11-17.
 *
 */
// Copyright (c) 2016 Bernard Giroux. All rights reserved.
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __MESSAGES_H__
#define __MESSAGES_H__

#include <string>
#include <map>

class Messages {
public:
	Messages(std::string);
	const std::string& getString(const std::string& key) { return this->msg[key]; }
private:
    std::map<std::string, std::string> msg;
	
	void constrFr();
	void constrEn();
};

#endif
