//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ListMFriendMobileInfo : PBGeneratedMessage
{
    unsigned int hasValue:1;
    NSString *value_;
    unsigned int hasUserName:1;
    unsigned int hasStatus:1;
    unsigned int hasBigHeadImgUrl:1;
    unsigned int hasSmallHeadImgUrl:1;
    unsigned int hasNickName:1;
    unsigned int hasAntispamTicket:1;
    unsigned int status;
    NSString *userName;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
    NSString *nickName;
    NSString *antispamTicket;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAntispamTicket:) NSString *antispamTicket; // @synthesize antispamTicket;
@property(readonly, nonatomic) BOOL hasAntispamTicket; // @synthesize hasAntispamTicket;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetSmallHeadImgUrl:) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadImgUrl; // @synthesize hasSmallHeadImgUrl;
@property(retain, nonatomic, setter=SetBigHeadImgUrl:) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadImgUrl; // @synthesize hasBigHeadImgUrl;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetValue:) NSString *value; // @synthesize value=value_;
@property(readonly, nonatomic) BOOL hasValue; // @synthesize hasValue;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

