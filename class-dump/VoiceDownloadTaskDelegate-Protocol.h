//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MessageData;

@protocol VoiceDownloadTaskDelegate <NSObject>
- (void)onDowloadFinished:(MessageData *)arg1 isSuccess:(BOOL)arg2 isNeedSave:(BOOL)arg3 offset:(unsigned long long)arg4 taskId:(unsigned long long)arg5;

@optional
- (void)onUploadCanceledWhenDownloading:(MessageData *)arg1 taskId:(unsigned long long)arg2;
- (void)onFailedToParseXMLWhenDownloading:(MessageData *)arg1 taskId:(unsigned long long)arg2;
@end

