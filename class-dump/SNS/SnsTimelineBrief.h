//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface SnsTimelineBrief : PBGeneratedMessage
{
    unsigned int hasFeedId:1;
    unsigned int hasUsername:1;
    unsigned int hasWeishangFlag:1;
    unsigned int hasCreatetime:1;
    unsigned int weishangFlag;
    unsigned int createtime;
    unsigned long long feedId;
    NSString *username;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetCreatetime:) unsigned int createtime; // @synthesize createtime;
@property(readonly, nonatomic) BOOL hasCreatetime; // @synthesize hasCreatetime;
@property(nonatomic, setter=SetWeishangFlag:) unsigned int weishangFlag; // @synthesize weishangFlag;
@property(readonly, nonatomic) BOOL hasWeishangFlag; // @synthesize hasWeishangFlag;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
@property(nonatomic, setter=SetFeedId:) unsigned long long feedId; // @synthesize feedId;
@property(readonly, nonatomic) BOOL hasFeedId; // @synthesize hasFeedId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
