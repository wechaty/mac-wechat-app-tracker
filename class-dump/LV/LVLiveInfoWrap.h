//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveInfo, LiveSdkInfo, NSData, NSMutableArray, NSString;

@interface LVLiveInfoWrap : NSObject
{
    BOOL _isClosed;
    unsigned long long _liveId;
    NSString *_roomId;
    LiveSdkInfo *_liveSdkInfo;
    LiveInfo *_liveInfo;
    NSData *_liveCookies;
    NSMutableArray *_currentRoomIds;
    NSString *_latestLiveMicId;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
@property(retain, nonatomic) NSString *latestLiveMicId; // @synthesize latestLiveMicId=_latestLiveMicId;
@property(retain, nonatomic) NSMutableArray *currentRoomIds; // @synthesize currentRoomIds=_currentRoomIds;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) LiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) LiveSdkInfo *liveSdkInfo; // @synthesize liveSdkInfo=_liveSdkInfo;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;

@end
