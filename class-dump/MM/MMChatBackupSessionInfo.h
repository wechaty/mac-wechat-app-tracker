//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMChatBackupSessionInfo : NSObject
{
    NSString *_sessionName;
    long long _totalSize;
    NSString *_nickName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
- (id)init;

@end

