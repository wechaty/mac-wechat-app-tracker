//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PatWrap;

@interface SendPatWrap : NSObject
{
    unsigned int _associateMessageLocalID;
    NSString *_fromUserName;
    NSString *_pattedUserName;
    NSString *_chatUserName;
    PatWrap *_patWrap;
    unsigned long long _status;
    NSString *_cachedPatSuffix;
}

+ (id)sendPatWrapKeyForPat:(id)arg1 fromChat:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cachedPatSuffix; // @synthesize cachedPatSuffix=_cachedPatSuffix;
@property(nonatomic) unsigned int associateMessageLocalID; // @synthesize associateMessageLocalID=_associateMessageLocalID;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) PatWrap *patWrap; // @synthesize patWrap=_patWrap;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(retain, nonatomic) NSString *pattedUserName; // @synthesize pattedUserName=_pattedUserName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
- (id)key;
- (id)messageWrapForRevokeOnly;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)generateSystemMessage:(id)arg1;
- (void)updatePatSuffix:(id)arg1 andServerId:(long long)arg2;
- (id)associateMessageWrap;

@end

