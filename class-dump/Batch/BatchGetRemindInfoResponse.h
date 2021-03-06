//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface BatchGetRemindInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRemindInfoCount:1;
    unsigned int remindInfoCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableRemindInfoListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableRemindInfoListList; // @synthesize mutableRemindInfoListList;
@property(nonatomic, setter=SetRemindInfoCount:) unsigned int remindInfoCount; // @synthesize remindInfoCount;
@property(readonly, nonatomic) BOOL hasRemindInfoCount; // @synthesize hasRemindInfoCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addRemindInfoList:(id)arg1;
- (void)addRemindInfoListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *remindInfoList; // @dynamic remindInfoList;
- (id)remindInfoListList;
- (id)init;

@end

