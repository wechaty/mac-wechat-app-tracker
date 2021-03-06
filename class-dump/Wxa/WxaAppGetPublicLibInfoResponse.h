//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface WxaAppGetPublicLibInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasUrl:1;
    unsigned int hasMd5:1;
    unsigned int hasVersion:1;
    unsigned int hasForceUpdate:1;
    unsigned int hasNeedUpdate:1;
    unsigned int hasPatchUrl:1;
    unsigned int version;
    unsigned int forceUpdate;
    unsigned int needUpdate;
    BaseResponse *baseResponse;
    NSString *url;
    NSString *md5;
    NSString *patchUrl;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetPatchUrl:) NSString *patchUrl; // @synthesize patchUrl;
@property(readonly, nonatomic) BOOL hasPatchUrl; // @synthesize hasPatchUrl;
@property(nonatomic, setter=SetNeedUpdate:) unsigned int needUpdate; // @synthesize needUpdate;
@property(readonly, nonatomic) BOOL hasNeedUpdate; // @synthesize hasNeedUpdate;
@property(nonatomic, setter=SetForceUpdate:) unsigned int forceUpdate; // @synthesize forceUpdate;
@property(readonly, nonatomic) BOOL hasForceUpdate; // @synthesize hasForceUpdate;
@property(nonatomic, setter=SetVersion:) unsigned int version; // @synthesize version;
@property(readonly, nonatomic) BOOL hasVersion; // @synthesize hasVersion;
@property(retain, nonatomic, setter=SetMd5:) NSString *md5; // @synthesize md5;
@property(readonly, nonatomic) BOOL hasMd5; // @synthesize hasMd5;
@property(retain, nonatomic, setter=SetUrl:) NSString *url; // @synthesize url;
@property(readonly, nonatomic) BOOL hasUrl; // @synthesize hasUrl;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

