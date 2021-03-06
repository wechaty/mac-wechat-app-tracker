//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetWxaAppCDNDownloadUrlResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRet:1;
    unsigned int hasUrl:1;
    unsigned int hasLifespan:1;
    unsigned int hasPatchUrl:1;
    int ret;
    unsigned int lifespan;
    BaseResponse *baseResponse;
    NSString *url;
    NSString *patchUrl;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetPatchUrl:) NSString *patchUrl; // @synthesize patchUrl;
@property(readonly, nonatomic) BOOL hasPatchUrl; // @synthesize hasPatchUrl;
@property(nonatomic, setter=SetLifespan:) unsigned int lifespan; // @synthesize lifespan;
@property(readonly, nonatomic) BOOL hasLifespan; // @synthesize hasLifespan;
@property(retain, nonatomic, setter=SetUrl:) NSString *url; // @synthesize url;
@property(readonly, nonatomic) BOOL hasUrl; // @synthesize hasUrl;
@property(nonatomic, setter=SetRet:) int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

