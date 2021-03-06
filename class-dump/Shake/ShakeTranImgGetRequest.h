//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t;

@interface ShakeTranImgGetRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasBuffer:1;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *buffer;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetBuffer:) SKBuiltinBuffer_t *buffer; // @synthesize buffer;
@property(readonly, nonatomic) BOOL hasBuffer; // @synthesize hasBuffer;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

