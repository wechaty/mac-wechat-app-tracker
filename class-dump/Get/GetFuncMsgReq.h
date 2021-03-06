//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, BusinessInfo, NSString;

@interface GetFuncMsgReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFunctionMsgId:1;
    unsigned int hasCustomBuff:1;
    unsigned int hasOpenId:1;
    unsigned int hasBusinessInfo:1;
    BaseRequest *baseRequest;
    NSString *functionMsgId;
    NSString *customBuff;
    NSString *openId;
    BusinessInfo *businessInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetBusinessInfo:) BusinessInfo *businessInfo; // @synthesize businessInfo;
@property(readonly, nonatomic) BOOL hasBusinessInfo; // @synthesize hasBusinessInfo;
@property(retain, nonatomic, setter=SetOpenId:) NSString *openId; // @synthesize openId;
@property(readonly, nonatomic) BOOL hasOpenId; // @synthesize hasOpenId;
@property(retain, nonatomic, setter=SetCustomBuff:) NSString *customBuff; // @synthesize customBuff;
@property(readonly, nonatomic) BOOL hasCustomBuff; // @synthesize hasCustomBuff;
@property(retain, nonatomic, setter=SetFunctionMsgId:) NSString *functionMsgId; // @synthesize functionMsgId;
@property(readonly, nonatomic) BOOL hasFunctionMsgId; // @synthesize hasFunctionMsgId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

