//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SolitaireReport : NSObject
{
    NSString *_nsChatName;
    NSString *_nsLaunchUserName;
    NSString *_nsCurMsgUserName;
    long long _sessionID;
    NSString *_nsIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(nonatomic) long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *nsCurMsgUserName; // @synthesize nsCurMsgUserName=_nsCurMsgUserName;
@property(retain, nonatomic) NSString *nsLaunchUserName; // @synthesize nsLaunchUserName=_nsLaunchUserName;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;
- (void)report;
- (id)initWithSolitaire:(id)arg1;

@end

