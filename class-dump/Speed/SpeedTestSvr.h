//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class VoipAddr;

@interface SpeedTestSvr : PBGeneratedMessage
{
    unsigned int hasAddr:1;
    unsigned int hasTestCnt:1;
    unsigned int hasTestGap:1;
    unsigned int hasTimeout:1;
    unsigned int hasPktSize:1;
    unsigned int testCnt;
    unsigned int testGap;
    unsigned int timeout;
    unsigned int pktSize;
    VoipAddr *addr;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetPktSize:) unsigned int pktSize; // @synthesize pktSize;
@property(readonly, nonatomic) BOOL hasPktSize; // @synthesize hasPktSize;
@property(nonatomic, setter=SetTimeout:) unsigned int timeout; // @synthesize timeout;
@property(readonly, nonatomic) BOOL hasTimeout; // @synthesize hasTimeout;
@property(nonatomic, setter=SetTestGap:) unsigned int testGap; // @synthesize testGap;
@property(readonly, nonatomic) BOOL hasTestGap; // @synthesize hasTestGap;
@property(nonatomic, setter=SetTestCnt:) unsigned int testCnt; // @synthesize testCnt;
@property(readonly, nonatomic) BOOL hasTestCnt; // @synthesize hasTestCnt;
@property(retain, nonatomic, setter=SetAddr:) VoipAddr *addr; // @synthesize addr;
@property(readonly, nonatomic) BOOL hasAddr; // @synthesize hasAddr;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

