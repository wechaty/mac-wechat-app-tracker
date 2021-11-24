//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface SyncFriendResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasNewSyncKey:1;
    unsigned int hasContinueFlag:1;
    unsigned int hasCmdCount:1;
    unsigned int newSyncKey;
    int continueFlag;
    unsigned int cmdCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableCmdListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableCmdListList; // @synthesize mutableCmdListList;
@property(nonatomic, setter=SetCmdCount:) unsigned int cmdCount; // @synthesize cmdCount;
@property(readonly, nonatomic) BOOL hasCmdCount; // @synthesize hasCmdCount;
@property(nonatomic, setter=SetContinueFlag:) int continueFlag; // @synthesize continueFlag;
@property(readonly, nonatomic) BOOL hasContinueFlag; // @synthesize hasContinueFlag;
@property(nonatomic, setter=SetNewSyncKey:) unsigned int newSyncKey; // @synthesize newSyncKey;
@property(readonly, nonatomic) BOOL hasNewSyncKey; // @synthesize hasNewSyncKey;
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

