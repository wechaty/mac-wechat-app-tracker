//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMChatLogImageDownloadServiceExt <NSObject>

@optional
- (void)onChatLogImageDownloadProgress:(id)arg1 dataId:(NSString *)arg2 partLen:(unsigned int)arg3 totalLen:(unsigned int)arg4;
- (void)onChatLogImageDownloadExpired:(id)arg1 dataId:(NSString *)arg2;
- (void)onChatLogImageDownloadFailed:(id)arg1 dataId:(NSString *)arg2;
- (void)onChatLogImageDownloadOK:(id)arg1 dataId:(NSString *)arg2 isThumb:(BOOL)arg3;
@end

