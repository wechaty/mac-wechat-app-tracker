//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, SKBuiltinBuffer_t;

@interface NewInitResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCurrentSynckey:1;
    unsigned int hasMaxSynckey:1;
    unsigned int hasContinueFlag:1;
    unsigned int hasSelectBitmap:1;
    unsigned int hasCmdCount:1;
    unsigned int hasRatio:1;
    unsigned int continueFlag;
    unsigned int selectBitmap;
    unsigned int cmdCount;
    unsigned int ratio;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *currentSynckey;
    SKBuiltinBuffer_t *maxSynckey;
    NSMutableArray *mutableCmdListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetRatio:) unsigned int ratio; // @synthesize ratio;
@property(readonly, nonatomic) BOOL hasRatio; // @synthesize hasRatio;
@property(retain, nonatomic) NSMutableArray *mutableCmdListList; // @synthesize mutableCmdListList;
@property(nonatomic, setter=SetCmdCount:) unsigned int cmdCount; // @synthesize cmdCount;
@property(readonly, nonatomic) BOOL hasCmdCount; // @synthesize hasCmdCount;
@property(nonatomic, setter=SetSelectBitmap:) unsigned int selectBitmap; // @synthesize selectBitmap;
@property(readonly, nonatomic) BOOL hasSelectBitmap; // @synthesize hasSelectBitmap;
@property(nonatomic, setter=SetContinueFlag:) unsigned int continueFlag; // @synthesize continueFlag;
@property(readonly, nonatomic) BOOL hasContinueFlag; // @synthesize hasContinueFlag;
@property(retain, nonatomic, setter=SetMaxSynckey:) SKBuiltinBuffer_t *maxSynckey; // @synthesize maxSynckey;
@property(readonly, nonatomic) BOOL hasMaxSynckey; // @synthesize hasMaxSynckey;
@property(retain, nonatomic, setter=SetCurrentSynckey:) SKBuiltinBuffer_t *currentSynckey; // @synthesize currentSynckey;
@property(readonly, nonatomic) BOOL hasCurrentSynckey; // @synthesize hasCurrentSynckey;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addCmdList:(id)arg1;
- (void)addCmdListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *cmdList; // @dynamic cmdList;
- (id)cmdListList;
- (id)init;

@end

