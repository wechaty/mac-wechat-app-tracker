//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSData, NSString;

@interface WxaAttrSyncRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasWxaUserName:1;
    unsigned int hasLastAttrVersion:1;
    unsigned int hasWxaAppId:1;
    unsigned int hasInstanceId:1;
    BaseRequest *baseRequest;
    NSString *wxaUserName;
    NSData *lastAttrVersion;
    NSString *wxaAppId;
    NSString *instanceId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetInstanceId:) NSString *instanceId; // @synthesize instanceId;
@property(readonly, nonatomic) BOOL hasInstanceId; // @synthesize hasInstanceId;
@property(retain, nonatomic, setter=SetWxaAppId:) NSString *wxaAppId; // @synthesize wxaAppId;
@property(readonly, nonatomic) BOOL hasWxaAppId; // @synthesize hasWxaAppId;
@property(retain, nonatomic, setter=SetLastAttrVersion:) NSData *lastAttrVersion; // @synthesize lastAttrVersion;
@property(readonly, nonatomic) BOOL hasLastAttrVersion; // @synthesize hasLastAttrVersion;
@property(retain, nonatomic, setter=SetWxaUserName:) NSString *wxaUserName; // @synthesize wxaUserName;
@property(readonly, nonatomic) BOOL hasWxaUserName; // @synthesize hasWxaUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

