/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_SPECIALISTRFQREJECTREQUEST_PACKET_H
#define XETRA_SPECIALISTRFQREJECTREQUEST_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class xetraSpecialistRFQRejectRequestPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t QUOTE_REQUEST_REJECT_REASON_MIN;
        static const int8_t QUOTE_REQUEST_REJECT_REASON_MAX;
        static const int8_t QUOTE_REQUEST_REJECT_REASON_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        uint64_t mQuoteID;
        int32_t mMarketSegmentID;
        int8_t mQuoteRequestRejectReason;
        char mPartyExecutingFirm[5];
        char mPad6[6];

        // constructor
        xetraSpecialistRFQRejectRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10421;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mQuoteRequestRejectReason = QUOTE_REQUEST_REJECT_REASON_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        // getters & setters
        const xetraMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const xetraMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const xetraRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const xetraRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
        }

        int64_t getSecurityID () const
        {
            return mSecurityID;
        }

        bool setSecurityID (int64_t v)
        {
            mSecurityID = v;
            return ((SECURITY_ID_MIN <= mSecurityID && mSecurityID <= SECURITY_ID_MAX) || mSecurityID == SECURITY_ID_NO_VALUE);
        }

        bool isSecurityIDValid () const
        {
            return (mSecurityID != SECURITY_ID_NO_VALUE);
        }

        void resetSecurityID ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
        }

        uint64_t getQuoteID () const
        {
            return mQuoteID;
        }

        bool setQuoteID (uint64_t v)
        {
            mQuoteID = v;
            return ((QUOTE_ID_MIN <= mQuoteID && mQuoteID <= QUOTE_ID_MAX) || mQuoteID == QUOTE_ID_NO_VALUE);
        }

        bool isQuoteIDValid () const
        {
            return (mQuoteID != QUOTE_ID_NO_VALUE);
        }

        void resetQuoteID ()
        {
            mQuoteID = QUOTE_ID_NO_VALUE;
        }

        int32_t getMarketSegmentID () const
        {
            return mMarketSegmentID;
        }

        bool setMarketSegmentID (int32_t v)
        {
            mMarketSegmentID = v;
            return ((MARKET_SEGMENT_ID_MIN <= mMarketSegmentID && mMarketSegmentID <= MARKET_SEGMENT_ID_MAX) || mMarketSegmentID == MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isMarketSegmentIDValid () const
        {
            return (mMarketSegmentID != MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetMarketSegmentID ()
        {
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
        }

        int8_t getQuoteRequestRejectReason () const
        {
            return mQuoteRequestRejectReason;
        }

        bool setQuoteRequestRejectReason (int8_t v)
        {
            mQuoteRequestRejectReason = v;
            return ((QUOTE_REQUEST_REJECT_REASON_MIN <= mQuoteRequestRejectReason && mQuoteRequestRejectReason <= QUOTE_REQUEST_REJECT_REASON_MAX) || mQuoteRequestRejectReason == QUOTE_REQUEST_REJECT_REASON_NO_VALUE);
        }

        bool isQuoteRequestRejectReasonValid () const
        {
            return (mQuoteRequestRejectReason != QUOTE_REQUEST_REJECT_REASON_NO_VALUE);
        }

        void resetQuoteRequestRejectReason ()
        {
            mQuoteRequestRejectReason = QUOTE_REQUEST_REJECT_REASON_NO_VALUE;
        }

        string getPartyExecutingFirm () const
        {
            return string (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setPartyExecutingFirm (const string& v)
        {
            memset (mPartyExecutingFirm, '\0', sizeof (mPartyExecutingFirm));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_EXECUTING_FIRM_MAX_LENGTH);
            strncpy (mPartyExecutingFirm, v.c_str (), size);
            return (v.size () <= PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool isPartyExecutingFirmValid () const
        {
            return (memcmp (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm)) != 0);
        }

        void resetPartyExecutingFirm ()
        {
            memcpy (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
        }

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            memset (mPad6, '\0', sizeof (mPad6));
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            strncpy (mPad6, v.c_str (), size);
            return (v.size () <= PAD6_MAX_LENGTH);
        }

        bool isPad6Valid () const
        {
            return (memcmp (mPad6, PAD6_NO_VALUE, sizeof (mPad6)) != 0);
        }

        void resetPad6 ()
        {
            memcpy (mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mQuoteID)
                + sizeof (mMarketSegmentID)
                + sizeof (mQuoteRequestRejectReason)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPad6);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteRequestRejectReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteRequestRejectReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SpecialistRFQRejectRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[QuoteRequestRejectReason=" << getQuoteRequestRejectReason () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const int64_t xetraSpecialistRFQRejectRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraSpecialistRFQRejectRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraSpecialistRFQRejectRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraSpecialistRFQRejectRequestPacket::QUOTE_ID_MIN = 0UL;
const uint64_t xetraSpecialistRFQRejectRequestPacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraSpecialistRFQRejectRequestPacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraSpecialistRFQRejectRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraSpecialistRFQRejectRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraSpecialistRFQRejectRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t xetraSpecialistRFQRejectRequestPacket::QUOTE_REQUEST_REJECT_REASON_MIN = 2;
const int8_t xetraSpecialistRFQRejectRequestPacket::QUOTE_REQUEST_REJECT_REASON_MAX = 106;
const int8_t xetraSpecialistRFQRejectRequestPacket::QUOTE_REQUEST_REJECT_REASON_NO_VALUE = 0xFF;
const char xetraSpecialistRFQRejectRequestPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraSpecialistRFQRejectRequestPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraSpecialistRFQRejectRequestPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraSpecialistRFQRejectRequestPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // XETRA_SPECIALISTRFQREJECTREQUEST_PACKET_H
