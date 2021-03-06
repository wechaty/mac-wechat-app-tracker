//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface VerifyPayTransitionReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasType:1;
    unsigned int hasOutTradeNo:1;
    unsigned int hasExtInfo:1;
    unsigned int type;
    BaseRequest *baseRequest;
    NSString *outTradeNo;
    NSString *extInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetExtInfo:) NSString *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(retain, nonatomic, setter=SetOutTradeNo:) NSString *outTradeNo; // @synthesize outTradeNo;
@property(readonly, nonatomic) BOOL hasOutTradeNo; // @synthesize hasOutTradeNo;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

