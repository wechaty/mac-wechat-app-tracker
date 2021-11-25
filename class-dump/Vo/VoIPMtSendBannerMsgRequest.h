//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSData, NSString, VoIPMtUserInfo;

@interface VoIPMtSendBannerMsgRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasWxGroupid:1;
    unsigned int hasBannerMsg:1;
    unsigned int hasFromUser:1;
    BaseRequest *baseRequest;
    NSString *wxGroupid;
    NSData *bannerMsg;
    VoIPMtUserInfo *fromUser;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetFromUser:) VoIPMtUserInfo *fromUser; // @synthesize fromUser;
@property(readonly, nonatomic) BOOL hasFromUser; // @synthesize hasFromUser;
@property(retain, nonatomic, setter=SetBannerMsg:) NSData *bannerMsg; // @synthesize bannerMsg;
@property(readonly, nonatomic) BOOL hasBannerMsg; // @synthesize hasBannerMsg;
@property(retain, nonatomic, setter=SetWxGroupid:) NSString *wxGroupid; // @synthesize wxGroupid;
@property(readonly, nonatomic) BOOL hasWxGroupid; // @synthesize hasWxGroupid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
