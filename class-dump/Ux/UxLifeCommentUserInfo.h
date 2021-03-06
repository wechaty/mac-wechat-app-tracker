//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface UxLifeCommentUserInfo : PBGeneratedMessage
{
    unsigned int hasUsername:1;
    unsigned int hasHeadimgurl:1;
    unsigned int hasNickname:1;
    NSString *username;
    NSString *headimgurl;
    NSString *nickname;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetNickname:) NSString *nickname; // @synthesize nickname;
@property(readonly, nonatomic) BOOL hasNickname; // @synthesize hasNickname;
@property(retain, nonatomic, setter=SetHeadimgurl:) NSString *headimgurl; // @synthesize headimgurl;
@property(readonly, nonatomic) BOOL hasHeadimgurl; // @synthesize hasHeadimgurl;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

