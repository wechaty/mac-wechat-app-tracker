//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LVCommonUtil : NSObject
{
}

+ (BOOL)checkNetWorkReachable;
+ (BOOL)verifyScreenRecordPrivilege:(id)arg1;
+ (BOOL)isLiveEnabled:(id)arg1 andIsForAnchor:(BOOL)arg2;
+ (id)viewToImage:(id)arg1;
+ (struct __CVBuffer *)imageToPixelBufferRef:(id)arg1;
+ (struct CGSize)calculateContentSize:(id)arg1 andType:(unsigned int)arg2;
+ (struct CGSize)liveSmallVideoViewSizeWithScreenView:(id)arg1;
+ (id)getNormalContactDisplayDesc:(id)arg1;
+ (id)getGroupNickName:(id)arg1 andRoomUserName:(id)arg2;
+ (id)getDisplayNameByUserName:(id)arg1 andRoomUserName:(id)arg2 andSeverNickName:(id)arg3;
+ (id)getDisplayNameByUserName:(id)arg1 andRoomUserName:(id)arg2;
+ (id)getContactByUserName:(id)arg1;

@end

