//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinBuffer_t;

@interface BlueToothAutoLoginInfoPkg : PBGeneratedMessage
{
    unsigned int hasSalt:1;
    unsigned int hasData:1;
    SKBuiltinBuffer_t *data_;
    SKBuiltinBuffer_t *salt;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetData:) SKBuiltinBuffer_t *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(retain, nonatomic, setter=SetSalt:) SKBuiltinBuffer_t *salt; // @synthesize salt;
@property(readonly, nonatomic) BOOL hasSalt; // @synthesize hasSalt;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
