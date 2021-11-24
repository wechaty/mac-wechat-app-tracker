//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSData, NSString, WxaExternalInfo;

@interface JSOperateWxDataRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasAppid:1;
    unsigned int hasData:1;
    NSData *data_;
    unsigned int hasGrantScope:1;
    unsigned int hasOpt:1;
    unsigned int hasVersionType:1;
    unsigned int hasExtInfo:1;
    unsigned int opt;
    unsigned int versionType;
    BaseRequest *baseRequest;
    NSString *appid;
    NSString *grantScope;
    WxaExternalInfo *extInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetExtInfo:) WxaExternalInfo *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(nonatomic, setter=SetVersionType:) unsigned int versionType; // @synthesize versionType;
@property(readonly, nonatomic) BOOL hasVersionType; // @synthesize hasVersionType;
@property(nonatomic, setter=SetOpt:) unsigned int opt; // @synthesize opt;
@property(readonly, nonatomic) BOOL hasOpt; // @synthesize hasOpt;
@property(retain, nonatomic, setter=SetGrantScope:) NSString *grantScope; // @synthesize grantScope;
@property(readonly, nonatomic) BOOL hasGrantScope; // @synthesize hasGrantScope;
@property(retain, nonatomic, setter=SetData:) NSData *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

