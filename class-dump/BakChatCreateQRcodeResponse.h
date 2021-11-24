//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, SKBuiltinBuffer_t;

@interface BakChatCreateQRcodeResponse : PBGeneratedMessage
{
    unsigned int hasRet:1;
    unsigned int hasQrcodeBuffer:1;
    unsigned int hasQrcodeUrl:1;
    unsigned int hasKey:1;
    unsigned int hasHello:1;
    unsigned int hasOk:1;
    unsigned int hasEncryFlag:1;
    unsigned int hasId:1;
    NSString *id_;
    unsigned int hasTickit:1;
    unsigned int ret;
    unsigned int encryFlag;
    SKBuiltinBuffer_t *qrcodeBuffer;
    NSString *qrcodeUrl;
    SKBuiltinBuffer_t *key;
    NSString *hello;
    NSString *ok;
    NSString *tickit;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetTickit:) NSString *tickit; // @synthesize tickit;
@property(readonly, nonatomic) BOOL hasTickit; // @synthesize hasTickit;
@property(retain, nonatomic, setter=SetId:) NSString *id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
@property(nonatomic, setter=SetEncryFlag:) unsigned int encryFlag; // @synthesize encryFlag;
@property(readonly, nonatomic) BOOL hasEncryFlag; // @synthesize hasEncryFlag;
@property(retain, nonatomic, setter=SetOk:) NSString *ok; // @synthesize ok;
@property(readonly, nonatomic) BOOL hasOk; // @synthesize hasOk;
@property(retain, nonatomic, setter=SetHello:) NSString *hello; // @synthesize hello;
@property(readonly, nonatomic) BOOL hasHello; // @synthesize hasHello;
@property(retain, nonatomic, setter=SetKey:) SKBuiltinBuffer_t *key; // @synthesize key;
@property(readonly, nonatomic) BOOL hasKey; // @synthesize hasKey;
@property(retain, nonatomic, setter=SetQrcodeUrl:) NSString *qrcodeUrl; // @synthesize qrcodeUrl;
@property(readonly, nonatomic) BOOL hasQrcodeUrl; // @synthesize hasQrcodeUrl;
@property(retain, nonatomic, setter=SetQrcodeBuffer:) SKBuiltinBuffer_t *qrcodeBuffer; // @synthesize qrcodeBuffer;
@property(readonly, nonatomic) BOOL hasQrcodeBuffer; // @synthesize hasQrcodeBuffer;
@property(nonatomic, setter=SetRet:) unsigned int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

