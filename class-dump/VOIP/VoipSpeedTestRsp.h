//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface VoipSpeedTestRsp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasNeedTest:1;
    unsigned int hasTestId:1;
    unsigned int hasSvrListCnt:1;
    unsigned int needTest;
    unsigned int svrListCnt;
    BaseResponse *baseResponse;
    unsigned long long testId;
    NSMutableArray *mutableSvrListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableSvrListList; // @synthesize mutableSvrListList;
@property(nonatomic, setter=SetSvrListCnt:) unsigned int svrListCnt; // @synthesize svrListCnt;
@property(readonly, nonatomic) BOOL hasSvrListCnt; // @synthesize hasSvrListCnt;
@property(nonatomic, setter=SetTestId:) unsigned long long testId; // @synthesize testId;
@property(readonly, nonatomic) BOOL hasTestId; // @synthesize hasTestId;
@property(nonatomic, setter=SetNeedTest:) unsigned int needTest; // @synthesize needTest;
@property(readonly, nonatomic) BOOL hasNeedTest; // @synthesize hasNeedTest;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addSvrList:(id)arg1;
- (void)addSvrListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *svrList; // @dynamic svrList;
- (id)svrListList;
- (id)init;

@end
