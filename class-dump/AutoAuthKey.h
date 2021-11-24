//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinBuffer_t;

@interface AutoAuthKey : PBGeneratedMessage
{
    unsigned int hasEncryptKey:1;
    unsigned int hasKey:1;
    SKBuiltinBuffer_t *encryptKey;
    SKBuiltinBuffer_t *key;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetKey:) SKBuiltinBuffer_t *key; // @synthesize key;
@property(readonly, nonatomic) BOOL hasKey; // @synthesize hasKey;
@property(retain, nonatomic, setter=SetEncryptKey:) SKBuiltinBuffer_t *encryptKey; // @synthesize encryptKey;
@property(readonly, nonatomic) BOOL hasEncryptKey; // @synthesize hasEncryptKey;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

