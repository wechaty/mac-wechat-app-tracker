//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ForwardToWeWorkAPI : NSObject
{
}

+ (BOOL)sendMessagesCountToWeWork:(id)arg1 appType:(long long)arg2 andKey:(id)arg3 andErrCode:(int)arg4;
+ (BOOL)sendMessagesToWeWork:(id)arg1 appType:(long long)arg2 andKey:(id)arg3 andMsgType:(long long)arg4 andErrCode:(int)arg5;
+ (BOOL)openWeWorkBySchema:(id)arg1 andSendMsgType:(long long)arg2;
+ (BOOL)openWeWork;
+ (BOOL)isCanIgnoreUpload:(id)arg1 andFieldDepth:(unsigned int)arg2 andIsHDImage:(BOOL)arg3;
+ (BOOL)isCanIgnoreUpload:(id)arg1 andFieldDepth:(unsigned int)arg2;
+ (BOOL)requestForwardMessagesFromWeWork:(id)arg1;
+ (BOOL)isWeWorkRunning:(long long)arg1;
+ (id)readVersionFromInfoPlistString:(id)arg1;
+ (id)getWeWorkVersion:(long long)arg1;
+ (BOOL)isWeWorkAppId:(long long)arg1 andAppId:(id)arg2;
+ (BOOL)isAvailableVersion:(long long)arg1 andVersion:(id)arg2;
+ (BOOL)isWeWorkInstalled:(long long)arg1;
+ (id)p_wxworkGovernmentScheme;
+ (id)p_wxworkEnterpriseScheme;
+ (BOOL)p_isAppInstalledWithScheme:(id)arg1;

@end
