//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString, VoipAddr;

@interface SpeedResult : PBGeneratedMessage
{
    unsigned int hasClientIp:1;
    unsigned int hasTestPktSize:1;
    unsigned int hasTestCnt:1;
    unsigned int hasAddr:1;
    unsigned int hasAvgRtt:1;
    unsigned int hasMinRtt:1;
    unsigned int hasMaxRtt:1;
    unsigned int hasRttCnt:1;
    int rttMemoizedSerializedSize;
    unsigned int hasDownSeqCnt:1;
    int downSeqMemoizedSerializedSize;
    unsigned int hasUpSeqCnt:1;
    int upSeqMemoizedSerializedSize;
    unsigned int hasClientIpStr:1;
    unsigned int clientIp;
    unsigned int testPktSize;
    unsigned int testCnt;
    unsigned int avgRtt;
    unsigned int minRtt;
    unsigned int maxRtt;
    unsigned int rttCnt;
    unsigned int downSeqCnt;
    unsigned int upSeqCnt;
    VoipAddr *addr;
    NSMutableArray *mutableRttList;
    NSMutableArray *mutableDownSeqList;
    NSMutableArray *mutableUpSeqList;
    NSString *clientIpStr;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetClientIpStr:) NSString *clientIpStr; // @synthesize clientIpStr;
@property(readonly, nonatomic) BOOL hasClientIpStr; // @synthesize hasClientIpStr;
@property(retain, nonatomic) NSMutableArray *mutableUpSeqList; // @synthesize mutableUpSeqList;
@property(nonatomic, setter=SetUpSeqCnt:) unsigned int upSeqCnt; // @synthesize upSeqCnt;
@property(readonly, nonatomic) BOOL hasUpSeqCnt; // @synthesize hasUpSeqCnt;
@property(retain, nonatomic) NSMutableArray *mutableDownSeqList; // @synthesize mutableDownSeqList;
@property(nonatomic, setter=SetDownSeqCnt:) unsigned int downSeqCnt; // @synthesize downSeqCnt;
@property(readonly, nonatomic) BOOL hasDownSeqCnt; // @synthesize hasDownSeqCnt;
@property(retain, nonatomic) NSMutableArray *mutableRttList; // @synthesize mutableRttList;
@property(nonatomic, setter=SetRttCnt:) unsigned int rttCnt; // @synthesize rttCnt;
@property(readonly, nonatomic) BOOL hasRttCnt; // @synthesize hasRttCnt;
@property(nonatomic, setter=SetMaxRtt:) unsigned int maxRtt; // @synthesize maxRtt;
@property(readonly, nonatomic) BOOL hasMaxRtt; // @synthesize hasMaxRtt;
@property(nonatomic, setter=SetMinRtt:) unsigned int minRtt; // @synthesize minRtt;
@property(readonly, nonatomic) BOOL hasMinRtt; // @synthesize hasMinRtt;
@property(nonatomic, setter=SetAvgRtt:) unsigned int avgRtt; // @synthesize avgRtt;
@property(readonly, nonatomic) BOOL hasAvgRtt; // @synthesize hasAvgRtt;
@property(retain, nonatomic, setter=SetAddr:) VoipAddr *addr; // @synthesize addr;
@property(readonly, nonatomic) BOOL hasAddr; // @synthesize hasAddr;
@property(nonatomic, setter=SetTestCnt:) unsigned int testCnt; // @synthesize testCnt;
@property(readonly, nonatomic) BOOL hasTestCnt; // @synthesize hasTestCnt;
@property(nonatomic, setter=SetTestPktSize:) unsigned int testPktSize; // @synthesize testPktSize;
@property(readonly, nonatomic) BOOL hasTestPktSize; // @synthesize hasTestPktSize;
@property(nonatomic, setter=SetClientIp:) unsigned int clientIp; // @synthesize clientIp;
@property(readonly, nonatomic) BOOL hasClientIp; // @synthesize hasClientIp;
- (void)addUpSeqFromArray:(id)arg1;
- (void)addUpSeq:(unsigned int)arg1;
- (void)addDownSeqFromArray:(id)arg1;
- (void)addDownSeq:(unsigned int)arg1;
- (void)addRttFromArray:(id)arg1;
- (void)addRtt:(unsigned int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *upSeq; // @dynamic upSeq;
- (id)upSeqList;
@property(retain, nonatomic) NSMutableArray *downSeq; // @dynamic downSeq;
- (id)downSeqList;
@property(retain, nonatomic) NSMutableArray *rtt; // @dynamic rtt;
- (id)rttList;
- (id)init;

@end

