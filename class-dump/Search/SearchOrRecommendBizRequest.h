//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface SearchOrRecommendBizRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasNickName:1;
    unsigned int hasOpCode:1;
    unsigned int hasEntryFlag:1;
    unsigned int hasReqBuf:1;
    unsigned int opCode;
    unsigned int entryFlag;
    BaseRequest *baseRequest;
    SKBuiltinString_t *nickName;
    SKBuiltinBuffer_t *reqBuf;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetReqBuf:) SKBuiltinBuffer_t *reqBuf; // @synthesize reqBuf;
@property(readonly, nonatomic) BOOL hasReqBuf; // @synthesize hasReqBuf;
@property(nonatomic, setter=SetEntryFlag:) unsigned int entryFlag; // @synthesize entryFlag;
@property(readonly, nonatomic) BOOL hasEntryFlag; // @synthesize hasEntryFlag;
@property(nonatomic, setter=SetOpCode:) unsigned int opCode; // @synthesize opCode;
@property(readonly, nonatomic) BOOL hasOpCode; // @synthesize hasOpCode;
@property(retain, nonatomic, setter=SetNickName:) SKBuiltinString_t *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

