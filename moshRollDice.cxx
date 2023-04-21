/*
 * moshRollDice.cxx
 * 
 * Copyright 2022 Takatoshi Lee <takatoshilee@Crackbook>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	const short maxValue = 6;
	const short minValue = 1;
	
	
	srand(time(0));
	int firstRoll = (rand() % (maxValue - minValue + 1)) + minValue;
	int secondRoll = (rand() % (maxValue - minValue + 1)) + minValue;
	cout << firstRoll << " " << secondRoll;
	
	
	return 0;
}

