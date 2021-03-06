//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t;

@interface HeartBeatResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasNextTime:1;
    unsigned int hasSelector:1;
    unsigned int hasBlueToothBroadCastContent:1;
    unsigned int nextTime;
    unsigned int selector;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *blueToothBroadCastContent;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetBlueToothBroadCastContent:) SKBuiltinBuffer_t *blueToothBroadCastContent; // @synthesize blueToothBroadCastContent;
@property(readonly, nonatomic) BOOL hasBlueToothBroadCastContent; // @synthesize hasBlueToothBroadCastContent;
@property(nonatomic, setter=SetSelector:) unsigned int selector; // @synthesize selector;
@property(readonly, nonatomic) BOOL hasSelector; // @synthesize hasSelector;
@property(nonatomic, setter=SetNextTime:) unsigned int nextTime; // @synthesize nextTime;
@property(readonly, nonatomic) BOOL hasNextTime; // @synthesize hasNextTime;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

