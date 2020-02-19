//
// Generated file, do not edit! Created by nedtool 5.4 from ack.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __ACK_M_H
#define __ACK_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>ack.msg:15</tt> by nedtool.
 * <pre>
 * //
 * // This program is free software: you can redistribute it and/or modify
 * // it under the terms of the GNU Lesser General Public License as published by
 * // the Free Software Foundation, either version 3 of the License, or
 * // (at your option) any later version.
 * // 
 * // This program is distributed in the hope that it will be useful,
 * // but WITHOUT ANY WARRANTY; without even the implied warranty of
 * // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * // GNU Lesser General Public License for more details.
 * // 
 * // You should have received a copy of the GNU Lesser General Public License
 * // along with this program.  If not, see http://www.gnu.org/licenses/.
 * //
 * packet ack
 * {
 *     int Dll_packetType;
 *     int Dll_packetId;
 * }
 * </pre>
 */
class ack : public ::omnetpp::cPacket
{
  protected:
    int Dll_packetType;
    int Dll_packetId;

  private:
    void copy(const ack& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ack&);

  public:
    ack(const char *name=nullptr, short kind=0);
    ack(const ack& other);
    virtual ~ack();
    ack& operator=(const ack& other);
    virtual ack *dup() const override {return new ack(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getDll_packetType() const;
    virtual void setDll_packetType(int Dll_packetType);
    virtual int getDll_packetId() const;
    virtual void setDll_packetId(int Dll_packetId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ack& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ack& obj) {obj.parsimUnpack(b);}


#endif // ifndef __ACK_M_H
