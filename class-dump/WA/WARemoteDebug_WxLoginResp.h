//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class WARemoteDebug_BaseResp, WARemoteDebug_RoomInfo;

@interface WARemoteDebug_WxLoginResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRoomInfo:1;
    WARemoteDebug_BaseResp *baseResponse;
    WARemoteDebug_RoomInfo *roomInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetRoomInfo:) WARemoteDebug_RoomInfo *roomInfo; // @synthesize roomInfo;
@property(readonly, nonatomic) BOOL hasRoomInfo; // @synthesize hasRoomInfo;
@property(retain, nonatomic, setter=SetBaseResponse:) WARemoteDebug_BaseResp *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
