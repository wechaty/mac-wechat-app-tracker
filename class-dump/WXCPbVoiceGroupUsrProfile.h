//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WXCPbVoiceGroupUsrProfile : PBGeneratedMessage
{
    unsigned int hasUuid:1;
    unsigned int hasUsername:1;
    unsigned int hasHeadUrl:1;
    unsigned int hasAbilityFlags:1;
    unsigned int uuid;
    NSString *username;
    NSString *headUrl;
    unsigned long long abilityFlags;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetAbilityFlags:) unsigned long long abilityFlags; // @synthesize abilityFlags;
@property(readonly, nonatomic) BOOL hasAbilityFlags; // @synthesize hasAbilityFlags;
@property(retain, nonatomic, setter=SetHeadUrl:) NSString *headUrl; // @synthesize headUrl;
@property(readonly, nonatomic) BOOL hasHeadUrl; // @synthesize hasHeadUrl;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
@property(nonatomic, setter=SetUuid:) unsigned int uuid; // @synthesize uuid;
@property(readonly, nonatomic) BOOL hasUuid; // @synthesize hasUuid;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;
- (id)description;

@end

