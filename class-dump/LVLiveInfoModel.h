//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LVLiveInfoModel : NSObject
{
    unsigned long long _liveId;
    NSString *_roomId;
    NSString *_anchorIdentityId;
    NSString *_avatarUrlString;
    NSString *_anchorName;
}

+ (id)convertFromLiveInfo:(id)arg1 andRoomId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(retain, nonatomic) NSString *avatarUrlString; // @synthesize avatarUrlString=_avatarUrlString;
@property(retain, nonatomic) NSString *anchorIdentityId; // @synthesize anchorIdentityId=_anchorIdentityId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;

@end

