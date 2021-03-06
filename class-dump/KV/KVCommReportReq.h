//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t;

@interface KVCommReportReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasBin:1;
    unsigned int hasKvbuffer:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int hasUuid:1;
    unsigned int bin;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *kvbuffer;
    SKBuiltinBuffer_t *randomEncryKey;
    SKBuiltinBuffer_t *uuid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetUuid:) SKBuiltinBuffer_t *uuid; // @synthesize uuid;
@property(readonly, nonatomic) BOOL hasUuid; // @synthesize hasUuid;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic, setter=SetKvbuffer:) SKBuiltinBuffer_t *kvbuffer; // @synthesize kvbuffer;
@property(readonly, nonatomic) BOOL hasKvbuffer; // @synthesize hasKvbuffer;
@property(nonatomic, setter=SetBin:) unsigned int bin; // @synthesize bin;
@property(readonly, nonatomic) BOOL hasBin; // @synthesize hasBin;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

