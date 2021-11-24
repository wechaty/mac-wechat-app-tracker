//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t;

@interface RcptInfoImportYiXunRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasQq:1;
    unsigned int hasA2Key:1;
    unsigned int hasNewA2Key:1;
    unsigned int qq;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *a2Key;
    SKBuiltinBuffer_t *newA2Key;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetNewA2Key:) SKBuiltinBuffer_t *newA2Key; // @synthesize newA2Key;
@property(readonly, nonatomic) BOOL hasNewA2Key; // @synthesize hasNewA2Key;
@property(retain, nonatomic, setter=SetA2Key:) SKBuiltinBuffer_t *a2Key; // @synthesize a2Key;
@property(readonly, nonatomic) BOOL hasA2Key; // @synthesize hasA2Key;
@property(nonatomic, setter=SetQq:) unsigned int qq; // @synthesize qq;
@property(readonly, nonatomic) BOOL hasQq; // @synthesize hasQq;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

