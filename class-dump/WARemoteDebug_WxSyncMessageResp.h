//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, WARemoteDebug_BaseResp;

@interface WARemoteDebug_WxSyncMessageResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasSendAck:1;
    unsigned int sendAck;
    WARemoteDebug_BaseResp *baseResponse;
    NSMutableArray *mutableDebugMessageListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetSendAck:) unsigned int sendAck; // @synthesize sendAck;
@property(readonly, nonatomic) BOOL hasSendAck; // @synthesize hasSendAck;
@property(retain, nonatomic) NSMutableArray *mutableDebugMessageListList; // @synthesize mutableDebugMessageListList;
@property(retain, nonatomic, setter=SetBaseResponse:) WARemoteDebug_BaseResp *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addDebugMessageList:(id)arg1;
- (void)addDebugMessageListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *debugMessageList; // @dynamic debugMessageList;
- (id)debugMessageListList;
- (id)init;

@end

