//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, SKBuiltinBuffer_t;

@interface WxVerifyCodeRespInfo : PBGeneratedMessage
{
    unsigned int hasVerifySignature:1;
    unsigned int hasVerifyBuff:1;
    NSString *verifySignature;
    SKBuiltinBuffer_t *verifyBuff;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetVerifyBuff:) SKBuiltinBuffer_t *verifyBuff; // @synthesize verifyBuff;
@property(readonly, nonatomic) BOOL hasVerifyBuff; // @synthesize hasVerifyBuff;
@property(retain, nonatomic, setter=SetVerifySignature:) NSString *verifySignature; // @synthesize verifySignature;
@property(readonly, nonatomic) BOOL hasVerifySignature; // @synthesize hasVerifySignature;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

