//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCMonitorAPI : NSObject
{
}

+ (void)UnInit;
+ (void)SetStatus:(unsigned int)arg1 value:(int)arg2 remote_user_id:(const char *)arg3;
+ (void)OnlineLog:(int)arg1 subcode:(int)arg2 more_msg:(const char *)arg3 msg:(const char *)arg4 cooling_time:(unsigned int)arg5 limit_count:(unsigned int)arg6;
+ (void)OnlineLog:(int)arg1 msg:(const char *)arg2 more_msg:(const char *)arg3 subcode:(int)arg4;
+ (void)Init:(const char *)arg1 sdkappid:(unsigned int)arg2 room_id:(const char *)arg3;

@end

