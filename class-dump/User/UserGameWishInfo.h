//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class UserGameInfo;

@interface UserGameWishInfo : PBGeneratedMessage
{
    unsigned int hasUserInfo:1;
    UserGameInfo *userInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetUserInfo:) UserGameInfo *userInfo; // @synthesize userInfo;
@property(readonly, nonatomic) BOOL hasUserInfo; // @synthesize hasUserInfo;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
