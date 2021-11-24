//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class CustomizedInfo, NSString, SKBuiltinString_t;

@interface SearchOrRecommendItem : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasSex:1;
    unsigned int hasProvince:1;
    unsigned int hasCity:1;
    unsigned int hasSignature:1;
    unsigned int hasPersonalCard:1;
    unsigned int hasVerifyFlag:1;
    unsigned int hasVerifyInfo:1;
    unsigned int hasWeibo:1;
    unsigned int hasAlias:1;
    unsigned int hasWeiboNickname:1;
    unsigned int hasWeiboFlag:1;
    unsigned int hasCountry:1;
    unsigned int hasCustomizedInfo:1;
    unsigned int hasBigHeadImgUrl:1;
    unsigned int hasSmallHeadImgUrl:1;
    int sex;
    unsigned int personalCard;
    unsigned int verifyFlag;
    unsigned int weiboFlag;
    SKBuiltinString_t *userName;
    SKBuiltinString_t *nickName;
    NSString *province;
    NSString *city;
    NSString *signature;
    NSString *verifyInfo;
    NSString *weibo;
    NSString *alias;
    NSString *weiboNickname;
    NSString *country;
    CustomizedInfo *customizedInfo;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetSmallHeadImgUrl:) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadImgUrl; // @synthesize hasSmallHeadImgUrl;
@property(retain, nonatomic, setter=SetBigHeadImgUrl:) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadImgUrl; // @synthesize hasBigHeadImgUrl;
@property(retain, nonatomic, setter=SetCustomizedInfo:) CustomizedInfo *customizedInfo; // @synthesize customizedInfo;
@property(readonly, nonatomic) BOOL hasCustomizedInfo; // @synthesize hasCustomizedInfo;
@property(retain, nonatomic, setter=SetCountry:) NSString *country; // @synthesize country;
@property(readonly, nonatomic) BOOL hasCountry; // @synthesize hasCountry;
@property(nonatomic, setter=SetWeiboFlag:) unsigned int weiboFlag; // @synthesize weiboFlag;
@property(readonly, nonatomic) BOOL hasWeiboFlag; // @synthesize hasWeiboFlag;
@property(retain, nonatomic, setter=SetWeiboNickname:) NSString *weiboNickname; // @synthesize weiboNickname;
@property(readonly, nonatomic) BOOL hasWeiboNickname; // @synthesize hasWeiboNickname;
@property(retain, nonatomic, setter=SetAlias:) NSString *alias; // @synthesize alias;
@property(readonly, nonatomic) BOOL hasAlias; // @synthesize hasAlias;
@property(retain, nonatomic, setter=SetWeibo:) NSString *weibo; // @synthesize weibo;
@property(readonly, nonatomic) BOOL hasWeibo; // @synthesize hasWeibo;
@property(retain, nonatomic, setter=SetVerifyInfo:) NSString *verifyInfo; // @synthesize verifyInfo;
@property(readonly, nonatomic) BOOL hasVerifyInfo; // @synthesize hasVerifyInfo;
@property(nonatomic, setter=SetVerifyFlag:) unsigned int verifyFlag; // @synthesize verifyFlag;
@property(readonly, nonatomic) BOOL hasVerifyFlag; // @synthesize hasVerifyFlag;
@property(nonatomic, setter=SetPersonalCard:) unsigned int personalCard; // @synthesize personalCard;
@property(readonly, nonatomic) BOOL hasPersonalCard; // @synthesize hasPersonalCard;
@property(retain, nonatomic, setter=SetSignature:) NSString *signature; // @synthesize signature;
@property(readonly, nonatomic) BOOL hasSignature; // @synthesize hasSignature;
@property(retain, nonatomic, setter=SetCity:) NSString *city; // @synthesize city;
@property(readonly, nonatomic) BOOL hasCity; // @synthesize hasCity;
@property(retain, nonatomic, setter=SetProvince:) NSString *province; // @synthesize province;
@property(readonly, nonatomic) BOOL hasProvince; // @synthesize hasProvince;
@property(nonatomic, setter=SetSex:) int sex; // @synthesize sex;
@property(readonly, nonatomic) BOOL hasSex; // @synthesize hasSex;
@property(retain, nonatomic, setter=SetNickName:) SKBuiltinString_t *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetUserName:) SKBuiltinString_t *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

