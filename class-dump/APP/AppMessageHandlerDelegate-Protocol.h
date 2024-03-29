//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AppDownloadTask, MessageData, NSString;

@protocol AppMessageHandlerDelegate <NSObject>

@optional
- (void)notifyAppMsgDownloadProgress:(AppDownloadTask *)arg1 downloadedBytes:(int)arg2 totalBytes:(int)arg3;
- (void)onAppMsgDownloadExpired:(AppDownloadTask *)arg1;
- (void)onAppMsgDownloadCancel:(AppDownloadTask *)arg1;
- (void)onAppMsgDownloadFinish:(AppDownloadTask *)arg1 isSuccess:(BOOL)arg2;
- (void)notifyAppMsgUploadProgress:(NSString *)arg1 msgData:(MessageData *)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onAppMsgCheckIsExist:(MessageData *)arg1 isSuccess:(BOOL)arg2;
- (void)onAppMsgSendFinish:(NSString *)arg1 msgData:(MessageData *)arg2 isSuccess:(BOOL)arg3;
- (void)onAppMsgUploadFinish:(MessageData *)arg1 isSuccess:(BOOL)arg2;
@end

