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

network Network
{
    //parameters:
       // int source;
       // int dest; 
    
    submodules:


        N1: Cm1 {
            address = 1;

            @display("p=78,48");
        }

        N2: Cm1 {
            address = 2;

            @display("p=275,48");
        }
    connections:
        N2.c_out --> {delay = 100ms;} --> N1.c_in ;
        N1.c_out --> {delay = 100ms;} --> N2.c_in;
}
