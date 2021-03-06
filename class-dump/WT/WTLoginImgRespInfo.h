//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, SKBuiltinBuffer_t;

@interface WTLoginImgRespInfo : PBGeneratedMessage
{
    unsigned int hasImgEncryptKey:1;
    unsigned int hasKsid:1;
    unsigned int hasImgSid:1;
    unsigned int hasImgBuf:1;
    NSString *imgEncryptKey;
    SKBuiltinBuffer_t *ksid;
    NSString *imgSid;
    SKBuiltinBuffer_t *imgBuf;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetImgBuf:) SKBuiltinBuffer_t *imgBuf; // @synthesize imgBuf;
@property(readonly, nonatomic) BOOL hasImgBuf; // @synthesize hasImgBuf;
@property(retain, nonatomic, setter=SetImgSid:) NSString *imgSid; // @synthesize imgSid;
@property(readonly, nonatomic) BOOL hasImgSid; // @synthesize hasImgSid;
@property(retain, nonatomic, setter=SetKsid:) SKBuiltinBuffer_t *ksid; // @synthesize ksid;
@property(readonly, nonatomic) BOOL hasKsid; // @synthesize hasKsid;
@property(retain, nonatomic, setter=SetImgEncryptKey:) NSString *imgEncryptKey; // @synthesize imgEncryptKey;
@property(readonly, nonatomic) BOOL hasImgEncryptKey; // @synthesize hasImgEncryptKey;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

