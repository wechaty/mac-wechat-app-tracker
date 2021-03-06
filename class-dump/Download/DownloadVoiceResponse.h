//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface DownloadVoiceResponse : PBGeneratedMessage
{
    unsigned int hasMsgId:1;
    unsigned int hasOffset:1;
    unsigned int hasLength:1;
    unsigned int hasVoiceLength:1;
    unsigned int hasClientMsgId:1;
    unsigned int hasData:1;
    SKBuiltinBuffer_t *data_;
    unsigned int hasEndFlag:1;
    unsigned int hasBaseResponse:1;
    unsigned int hasCancelFlag:1;
    unsigned int hasNewMsgId:1;
    unsigned int msgId;
    unsigned int offset;
    unsigned int length;
    unsigned int voiceLength;
    unsigned int endFlag;
    unsigned int cancelFlag;
    NSString *clientMsgId;
    BaseResponse *baseResponse;
    unsigned long long newMsgId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetNewMsgId:) unsigned long long newMsgId; // @synthesize newMsgId;
@property(readonly, nonatomic) BOOL hasNewMsgId; // @synthesize hasNewMsgId;
@property(nonatomic, setter=SetCancelFlag:) unsigned int cancelFlag; // @synthesize cancelFlag;
@property(readonly, nonatomic) BOOL hasCancelFlag; // @synthesize hasCancelFlag;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
@property(nonatomic, setter=SetEndFlag:) unsigned int endFlag; // @synthesize endFlag;
@property(readonly, nonatomic) BOOL hasEndFlag; // @synthesize hasEndFlag;
@property(retain, nonatomic, setter=SetData:) SKBuiltinBuffer_t *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(retain, nonatomic, setter=SetClientMsgId:) NSString *clientMsgId; // @synthesize clientMsgId;
@property(readonly, nonatomic) BOOL hasClientMsgId; // @synthesize hasClientMsgId;
@property(nonatomic, setter=SetVoiceLength:) unsigned int voiceLength; // @synthesize voiceLength;
@property(readonly, nonatomic) BOOL hasVoiceLength; // @synthesize hasVoiceLength;
@property(nonatomic, setter=SetLength:) unsigned int length; // @synthesize length;
@property(readonly, nonatomic) BOOL hasLength; // @synthesize hasLength;
@property(nonatomic, setter=SetOffset:) unsigned int offset; // @synthesize offset;
@property(readonly, nonatomic) BOOL hasOffset; // @synthesize hasOffset;
@property(nonatomic, setter=SetMsgId:) unsigned int msgId; // @synthesize msgId;
@property(readonly, nonatomic) BOOL hasMsgId; // @synthesize hasMsgId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

