/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_DELETEORDERBROADCAST_PACKET_H
#define XETRA_DELETEORDERBROADCAST_PACKET_H

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

class xetraDeleteOrderBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const uint64_t ORIG_CL_ORD_ID_MIN;
        static const uint64_t ORIG_CL_ORD_ID_MAX;
        static const uint64_t ORIG_CL_ORD_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const double CUM_QTY_MIN;
        static const double CUM_QTY_MAX;
        static const int64_t CUM_QTY_NO_VALUE;
        static const double CXL_QTY_MIN;
        static const double CXL_QTY_MAX;
        static const int64_t CXL_QTY_NO_VALUE;
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const uint32_t ORDER_IDSFX_MIN;
        static const uint32_t ORDER_IDSFX_MAX;
        static const uint32_t ORDER_IDSFX_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t PARTY_IDENTERING_TRADER_MIN;
        static const uint32_t PARTY_IDENTERING_TRADER_MAX;
        static const uint32_t PARTY_IDENTERING_TRADER_NO_VALUE;
        static const uint32_t PARTY_IDSESSION_ID_MIN;
        static const uint32_t PARTY_IDSESSION_ID_MAX;
        static const uint32_t PARTY_IDSESSION_ID_NO_VALUE;
        static const int16_t EXEC_RESTATEMENT_REASON_MIN;
        static const int16_t EXEC_RESTATEMENT_REASON_MAX;
        static const int16_t EXEC_RESTATEMENT_REASON_NO_VALUE;
        static const int8_t PARTY_IDENTERING_FIRM_MIN;
        static const int8_t PARTY_IDENTERING_FIRM_MAX;
        static const int8_t PARTY_IDENTERING_FIRM_NO_VALUE;
        static const char ORD_STATUS_NO_VALUE[1];
        static const size_t ORD_STATUS_MAX_LENGTH;
        static const char EXEC_TYPE_NO_VALUE[1];
        static const size_t EXEC_TYPE_MAX_LENGTH;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t ORDER_EVENT_TYPE_MIN;
        static const int8_t ORDER_EVENT_TYPE_MAX;
        static const int8_t ORDER_EVENT_TYPE_NO_VALUE;
        static const char FIXCL_ORD_ID_NO_VALUE[20];
        static const size_t FIXCL_ORD_ID_MAX_LENGTH;
        static const char PARTY_ENTERING_FIRM_NO_VALUE[5];
        static const size_t PARTY_ENTERING_FIRM_MAX_LENGTH;
        static const char PARTY_ENTERING_TRADER_NO_VALUE[6];
        static const size_t PARTY_ENTERING_TRADER_MAX_LENGTH;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        uint64_t mOrigClOrdID;
        int64_t mSecurityID;
        uint64_t mExecID;
        int64_t mCumQty;
        int64_t mCxlQty;
        uint64_t mQuoteID;
        uint32_t mOrderIDSfx;
        int32_t mMarketSegmentID;
        uint32_t mPartyIDEnteringTrader;
        uint32_t mPartyIDSessionID;
        int16_t mExecRestatementReason;
        int8_t mPartyIDEnteringFirm;
        char mOrdStatus[1];
        char mExecType[1];
        int8_t mSide;
        int8_t mOrderEventType;
        char mFIXClOrdID[20];
        char mPartyEnteringFirm[5];
        char mPartyEnteringTrader[6];
        char mPad2[2];

        // constructor
        xetraDeleteOrderBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10112;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mExecID = EXEC_ID_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mCxlQty = CXL_QTY_NO_VALUE;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
            memcpy(mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
            memcpy(mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
            mSide = SIDE_NO_VALUE;
            mOrderEventType = ORDER_EVENT_TYPE_NO_VALUE;
            memcpy(mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
            memcpy(mPartyEnteringFirm, PARTY_ENTERING_FIRM_NO_VALUE, sizeof (mPartyEnteringFirm));
            memcpy(mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
        const xetraMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const xetraMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const xetraRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const xetraRBCHeaderMECompPacket& v)
        {
            mRBCHeaderME = v;
            return true;
        }

        uint64_t getOrderID () const
        {
            return mOrderID;
        }

        bool setOrderID (uint64_t v)
        {
            mOrderID = v;
            return ((ORDER_ID_MIN <= mOrderID && mOrderID <= ORDER_ID_MAX) || mOrderID == ORDER_ID_NO_VALUE);
        }

        bool isOrderIDValid () const
        {
            return (mOrderID != ORDER_ID_NO_VALUE);
        }

        void resetOrderID ()
        {
            mOrderID = ORDER_ID_NO_VALUE;
        }

        uint64_t getClOrdID () const
        {
            return mClOrdID;
        }

        bool setClOrdID (uint64_t v)
        {
            mClOrdID = v;
            return ((CL_ORD_ID_MIN <= mClOrdID && mClOrdID <= CL_ORD_ID_MAX) || mClOrdID == CL_ORD_ID_NO_VALUE);
        }

        bool isClOrdIDValid () const
        {
            return (mClOrdID != CL_ORD_ID_NO_VALUE);
        }

        void resetClOrdID ()
        {
            mClOrdID = CL_ORD_ID_NO_VALUE;
        }

        uint64_t getOrigClOrdID () const
        {
            return mOrigClOrdID;
        }

        bool setOrigClOrdID (uint64_t v)
        {
            mOrigClOrdID = v;
            return ((ORIG_CL_ORD_ID_MIN <= mOrigClOrdID && mOrigClOrdID <= ORIG_CL_ORD_ID_MAX) || mOrigClOrdID == ORIG_CL_ORD_ID_NO_VALUE);
        }

        bool isOrigClOrdIDValid () const
        {
            return (mOrigClOrdID != ORIG_CL_ORD_ID_NO_VALUE);
        }

        void resetOrigClOrdID ()
        {
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
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

        uint64_t getExecID () const
        {
            return mExecID;
        }

        bool setExecID (uint64_t v)
        {
            mExecID = v;
            return ((EXEC_ID_MIN <= mExecID && mExecID <= EXEC_ID_MAX) || mExecID == EXEC_ID_NO_VALUE);
        }

        bool isExecIDValid () const
        {
            return (mExecID != EXEC_ID_NO_VALUE);
        }

        void resetExecID ()
        {
            mExecID = EXEC_ID_NO_VALUE;
        }

        double getCumQty () const
        {
            return mCumQty / 10000.0;
        }

        bool setCumQty (double v)
        {
            mCumQty = v * 10000.0;
            return ((CUM_QTY_MIN <= v && v <= CUM_QTY_MAX) || mCumQty == CUM_QTY_NO_VALUE);
        }

        bool isCumQtyValid () const
        {
            return (mCumQty != CUM_QTY_NO_VALUE);
        }

        void resetCumQty ()
        {
            mCumQty = CUM_QTY_NO_VALUE;
        }

        double getCxlQty () const
        {
            return mCxlQty / 10000.0;
        }

        bool setCxlQty (double v)
        {
            mCxlQty = v * 10000.0;
            return ((CXL_QTY_MIN <= v && v <= CXL_QTY_MAX) || mCxlQty == CXL_QTY_NO_VALUE);
        }

        bool isCxlQtyValid () const
        {
            return (mCxlQty != CXL_QTY_NO_VALUE);
        }

        void resetCxlQty ()
        {
            mCxlQty = CXL_QTY_NO_VALUE;
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

        uint32_t getOrderIDSfx () const
        {
            return mOrderIDSfx;
        }

        bool setOrderIDSfx (uint32_t v)
        {
            mOrderIDSfx = v;
            return ((ORDER_IDSFX_MIN <= mOrderIDSfx && mOrderIDSfx <= ORDER_IDSFX_MAX) || mOrderIDSfx == ORDER_IDSFX_NO_VALUE);
        }

        bool isOrderIDSfxValid () const
        {
            return (mOrderIDSfx != ORDER_IDSFX_NO_VALUE);
        }

        void resetOrderIDSfx ()
        {
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
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

        uint32_t getPartyIDEnteringTrader () const
        {
            return mPartyIDEnteringTrader;
        }

        bool setPartyIDEnteringTrader (uint32_t v)
        {
            mPartyIDEnteringTrader = v;
            return ((PARTY_IDENTERING_TRADER_MIN <= mPartyIDEnteringTrader && mPartyIDEnteringTrader <= PARTY_IDENTERING_TRADER_MAX) || mPartyIDEnteringTrader == PARTY_IDENTERING_TRADER_NO_VALUE);
        }

        bool isPartyIDEnteringTraderValid () const
        {
            return (mPartyIDEnteringTrader != PARTY_IDENTERING_TRADER_NO_VALUE);
        }

        void resetPartyIDEnteringTrader ()
        {
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
        }

        uint32_t getPartyIDSessionID () const
        {
            return mPartyIDSessionID;
        }

        bool setPartyIDSessionID (uint32_t v)
        {
            mPartyIDSessionID = v;
            return ((PARTY_IDSESSION_ID_MIN <= mPartyIDSessionID && mPartyIDSessionID <= PARTY_IDSESSION_ID_MAX) || mPartyIDSessionID == PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isPartyIDSessionIDValid () const
        {
            return (mPartyIDSessionID != PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetPartyIDSessionID ()
        {
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
        }

        int16_t getExecRestatementReason () const
        {
            return mExecRestatementReason;
        }

        bool setExecRestatementReason (int16_t v)
        {
            mExecRestatementReason = v;
            return ((EXEC_RESTATEMENT_REASON_MIN <= mExecRestatementReason && mExecRestatementReason <= EXEC_RESTATEMENT_REASON_MAX) || mExecRestatementReason == EXEC_RESTATEMENT_REASON_NO_VALUE);
        }

        bool isExecRestatementReasonValid () const
        {
            return (mExecRestatementReason != EXEC_RESTATEMENT_REASON_NO_VALUE);
        }

        void resetExecRestatementReason ()
        {
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
        }

        int8_t getPartyIDEnteringFirm () const
        {
            return mPartyIDEnteringFirm;
        }

        bool setPartyIDEnteringFirm (int8_t v)
        {
            mPartyIDEnteringFirm = v;
            return ((PARTY_IDENTERING_FIRM_MIN <= mPartyIDEnteringFirm && mPartyIDEnteringFirm <= PARTY_IDENTERING_FIRM_MAX) || mPartyIDEnteringFirm == PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        bool isPartyIDEnteringFirmValid () const
        {
            return (mPartyIDEnteringFirm != PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        void resetPartyIDEnteringFirm ()
        {
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
        }

        string getOrdStatus () const
        {
            return string (mOrdStatus, ORD_STATUS_MAX_LENGTH);
        }

        bool setOrdStatus (const string& v)
        {
            memset (mOrdStatus, '\0', sizeof (mOrdStatus));
            size_t size = min ((size_t) v.size (), (size_t) ORD_STATUS_MAX_LENGTH);
            strncpy (mOrdStatus, v.c_str (), size);
            return (v.size () <= ORD_STATUS_MAX_LENGTH);
        }

        bool isOrdStatusValid () const
        {
            return (memcmp (mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus)) != 0);
        }

        void resetOrdStatus ()
        {
            memcpy (mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
        }

        string getExecType () const
        {
            return string (mExecType, EXEC_TYPE_MAX_LENGTH);
        }

        bool setExecType (const string& v)
        {
            memset (mExecType, '\0', sizeof (mExecType));
            size_t size = min ((size_t) v.size (), (size_t) EXEC_TYPE_MAX_LENGTH);
            strncpy (mExecType, v.c_str (), size);
            return (v.size () <= EXEC_TYPE_MAX_LENGTH);
        }

        bool isExecTypeValid () const
        {
            return (memcmp (mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType)) != 0);
        }

        void resetExecType ()
        {
            memcpy (mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
        }

        int8_t getSide () const
        {
            return mSide;
        }

        bool setSide (int8_t v)
        {
            mSide = v;
            return ((SIDE_MIN <= mSide && mSide <= SIDE_MAX) || mSide == SIDE_NO_VALUE);
        }

        bool isSideValid () const
        {
            return (mSide != SIDE_NO_VALUE);
        }

        void resetSide ()
        {
            mSide = SIDE_NO_VALUE;
        }

        int8_t getOrderEventType () const
        {
            return mOrderEventType;
        }

        bool setOrderEventType (int8_t v)
        {
            mOrderEventType = v;
            return ((ORDER_EVENT_TYPE_MIN <= mOrderEventType && mOrderEventType <= ORDER_EVENT_TYPE_MAX) || mOrderEventType == ORDER_EVENT_TYPE_NO_VALUE);
        }

        bool isOrderEventTypeValid () const
        {
            return (mOrderEventType != ORDER_EVENT_TYPE_NO_VALUE);
        }

        void resetOrderEventType ()
        {
            mOrderEventType = ORDER_EVENT_TYPE_NO_VALUE;
        }

        string getFIXClOrdID () const
        {
            return string (mFIXClOrdID, FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool setFIXClOrdID (const string& v)
        {
            memset (mFIXClOrdID, '\0', sizeof (mFIXClOrdID));
            size_t size = min ((size_t) v.size (), (size_t) FIXCL_ORD_ID_MAX_LENGTH);
            strncpy (mFIXClOrdID, v.c_str (), size);
            return (v.size () <= FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool isFIXClOrdIDValid () const
        {
            return (memcmp (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID)) != 0);
        }

        void resetFIXClOrdID ()
        {
            memcpy (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
        }

        string getPartyEnteringFirm () const
        {
            return string (mPartyEnteringFirm, PARTY_ENTERING_FIRM_MAX_LENGTH);
        }

        bool setPartyEnteringFirm (const string& v)
        {
            memset (mPartyEnteringFirm, '\0', sizeof (mPartyEnteringFirm));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_ENTERING_FIRM_MAX_LENGTH);
            strncpy (mPartyEnteringFirm, v.c_str (), size);
            return (v.size () <= PARTY_ENTERING_FIRM_MAX_LENGTH);
        }

        bool isPartyEnteringFirmValid () const
        {
            return (memcmp (mPartyEnteringFirm, PARTY_ENTERING_FIRM_NO_VALUE, sizeof (mPartyEnteringFirm)) != 0);
        }

        void resetPartyEnteringFirm ()
        {
            memcpy (mPartyEnteringFirm, PARTY_ENTERING_FIRM_NO_VALUE, sizeof (mPartyEnteringFirm));
        }

        string getPartyEnteringTrader () const
        {
            return string (mPartyEnteringTrader, PARTY_ENTERING_TRADER_MAX_LENGTH);
        }

        bool setPartyEnteringTrader (const string& v)
        {
            memset (mPartyEnteringTrader, '\0', sizeof (mPartyEnteringTrader));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_ENTERING_TRADER_MAX_LENGTH);
            strncpy (mPartyEnteringTrader, v.c_str (), size);
            return (v.size () <= PARTY_ENTERING_TRADER_MAX_LENGTH);
        }

        bool isPartyEnteringTraderValid () const
        {
            return (memcmp (mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader)) != 0);
        }

        void resetPartyEnteringTrader ()
        {
            memcpy (mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
        }

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mOrigClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mExecID)
                + sizeof (mCumQty)
                + sizeof (mCxlQty)
                + sizeof (mQuoteID)
                + sizeof (mOrderIDSfx)
                + sizeof (mMarketSegmentID)
                + sizeof (mPartyIDEnteringTrader)
                + sizeof (mPartyIDSessionID)
                + sizeof (mExecRestatementReason)
                + sizeof (mPartyIDEnteringFirm)
                + sizeof (mOrdStatus)
                + sizeof (mExecType)
                + sizeof (mSide)
                + sizeof (mOrderEventType)
                + sizeof (mFIXClOrdID)
                + sizeof (mPartyEnteringFirm)
                + sizeof (mPartyEnteringTrader)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "DeleteOrderBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[OrigClOrdID=" << getOrigClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[CxlQty=" << getCxlQty () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[OrderIDSfx=" << getOrderIDSfx () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[PartyIDEnteringTrader=" << getPartyIDEnteringTrader () << "],"
                << "[PartyIDSessionID=" << getPartyIDSessionID () << "],"
                << "[ExecRestatementReason=" << getExecRestatementReason () << "],"
                << "[PartyIDEnteringFirm=" << getPartyIDEnteringFirm () << "],"
                << "[OrdStatus=" << getOrdStatus () << "],"
                << "[ExecType=" << getExecType () << "],"
                << "[Side=" << getSide () << "],"
                << "[OrderEventType=" << getOrderEventType () << "],"
                << "[FIXClOrdID=" << getFIXClOrdID () << "],"
                << "[PartyEnteringFirm=" << getPartyEnteringFirm () << "],"
                << "[PartyEnteringTrader=" << getPartyEnteringTrader () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const uint64_t xetraDeleteOrderBroadcastPacket::ORDER_ID_MIN = 0UL;
const uint64_t xetraDeleteOrderBroadcastPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t xetraDeleteOrderBroadcastPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraDeleteOrderBroadcastPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t xetraDeleteOrderBroadcastPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraDeleteOrderBroadcastPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraDeleteOrderBroadcastPacket::ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t xetraDeleteOrderBroadcastPacket::ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraDeleteOrderBroadcastPacket::ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraDeleteOrderBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraDeleteOrderBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraDeleteOrderBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraDeleteOrderBroadcastPacket::EXEC_ID_MIN = 0UL;
const uint64_t xetraDeleteOrderBroadcastPacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t xetraDeleteOrderBroadcastPacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraDeleteOrderBroadcastPacket::CUM_QTY_MIN = -922337203685477.5807;
const double xetraDeleteOrderBroadcastPacket::CUM_QTY_MAX = 922337203685477.5807;
const int64_t xetraDeleteOrderBroadcastPacket::CUM_QTY_NO_VALUE = 0x8000000000000000;
const double xetraDeleteOrderBroadcastPacket::CXL_QTY_MIN = -922337203685477.5807;
const double xetraDeleteOrderBroadcastPacket::CXL_QTY_MAX = 922337203685477.5807;
const int64_t xetraDeleteOrderBroadcastPacket::CXL_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t xetraDeleteOrderBroadcastPacket::QUOTE_ID_MIN = 0UL;
const uint64_t xetraDeleteOrderBroadcastPacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraDeleteOrderBroadcastPacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraDeleteOrderBroadcastPacket::ORDER_IDSFX_MIN = 0;
const uint32_t xetraDeleteOrderBroadcastPacket::ORDER_IDSFX_MAX = 4294967294;
const uint32_t xetraDeleteOrderBroadcastPacket::ORDER_IDSFX_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraDeleteOrderBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraDeleteOrderBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraDeleteOrderBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraDeleteOrderBroadcastPacket::PARTY_IDENTERING_TRADER_MIN = 0;
const uint32_t xetraDeleteOrderBroadcastPacket::PARTY_IDENTERING_TRADER_MAX = 4294967294;
const uint32_t xetraDeleteOrderBroadcastPacket::PARTY_IDENTERING_TRADER_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraDeleteOrderBroadcastPacket::PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraDeleteOrderBroadcastPacket::PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraDeleteOrderBroadcastPacket::PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraDeleteOrderBroadcastPacket::EXEC_RESTATEMENT_REASON_MIN = 0;
const int16_t xetraDeleteOrderBroadcastPacket::EXEC_RESTATEMENT_REASON_MAX = 344;
const int16_t xetraDeleteOrderBroadcastPacket::EXEC_RESTATEMENT_REASON_NO_VALUE = 0xFFFF;
const int8_t xetraDeleteOrderBroadcastPacket::PARTY_IDENTERING_FIRM_MIN = 1;
const int8_t xetraDeleteOrderBroadcastPacket::PARTY_IDENTERING_FIRM_MAX = 3;
const int8_t xetraDeleteOrderBroadcastPacket::PARTY_IDENTERING_FIRM_NO_VALUE = 0xFF;
const char xetraDeleteOrderBroadcastPacket::ORD_STATUS_NO_VALUE[1] = {0x00};
const size_t xetraDeleteOrderBroadcastPacket::ORD_STATUS_MAX_LENGTH = 1;
const char xetraDeleteOrderBroadcastPacket::EXEC_TYPE_NO_VALUE[1] = {0x00};
const size_t xetraDeleteOrderBroadcastPacket::EXEC_TYPE_MAX_LENGTH = 1;
const int8_t xetraDeleteOrderBroadcastPacket::SIDE_MIN = 1;
const int8_t xetraDeleteOrderBroadcastPacket::SIDE_MAX = 2;
const int8_t xetraDeleteOrderBroadcastPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraDeleteOrderBroadcastPacket::ORDER_EVENT_TYPE_MIN = 100;
const int8_t xetraDeleteOrderBroadcastPacket::ORDER_EVENT_TYPE_MAX = 100;
const int8_t xetraDeleteOrderBroadcastPacket::ORDER_EVENT_TYPE_NO_VALUE = 0xFF;
const char xetraDeleteOrderBroadcastPacket::FIXCL_ORD_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraDeleteOrderBroadcastPacket::FIXCL_ORD_ID_MAX_LENGTH = 20;
const char xetraDeleteOrderBroadcastPacket::PARTY_ENTERING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraDeleteOrderBroadcastPacket::PARTY_ENTERING_FIRM_MAX_LENGTH = 5;
const char xetraDeleteOrderBroadcastPacket::PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraDeleteOrderBroadcastPacket::PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char xetraDeleteOrderBroadcastPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraDeleteOrderBroadcastPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // XETRA_DELETEORDERBROADCAST_PACKET_H
