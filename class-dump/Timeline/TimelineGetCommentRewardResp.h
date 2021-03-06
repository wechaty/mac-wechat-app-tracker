//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface TimelineGetCommentRewardResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRefreshIntervalSec:1;
    unsigned int refreshIntervalSec;
    BaseResponse *baseResponse;
    NSMutableArray *mutableStatListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetRefreshIntervalSec:) unsigned int refreshIntervalSec; // @synthesize refreshIntervalSec;
@property(readonly, nonatomic) BOOL hasRefreshIntervalSec; // @synthesize hasRefreshIntervalSec;
@property(retain, nonatomic) NSMutableArray *mutableStatListList; // @synthesize mutableStatListList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addStatList:(id)arg1;
- (void)addStatListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *statList; // @dynamic statList;
- (id)statListList;
- (id)init;

@end

