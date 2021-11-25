//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse;

@interface TalkMicActionResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasMicSeq:1;
    unsigned int hasChannelId:1;
    int micSeq;
    unsigned int channelId;
    BaseResponse *baseResponse;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetChannelId:) unsigned int channelId; // @synthesize channelId;
@property(readonly, nonatomic) BOOL hasChannelId; // @synthesize hasChannelId;
@property(nonatomic, setter=SetMicSeq:) int micSeq; // @synthesize micSeq;
@property(readonly, nonatomic) BOOL hasMicSeq; // @synthesize hasMicSeq;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
