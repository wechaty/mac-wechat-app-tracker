//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MessageData;

@protocol IMessageServiceVideoExt <NSObject>

@optional
- (void)onVideoDidCancelUploadWithMessage:(MessageData *)arg1;
- (void)onVideoDidFinishUploadWithMessage:(MessageData *)arg1;
- (void)onVideoUploaded:(int)arg1 of:(int)arg2 withMessage:(MessageData *)arg3;
- (void)onVideoDidCancelDownloadWithMessage:(MessageData *)arg1;
- (void)onVideoDidFailDownloadWithMessage:(MessageData *)arg1;
- (void)onVideoDidFinishDownloadWithMessage:(MessageData *)arg1;
- (void)onVideoDownloaded:(int)arg1 of:(int)arg2 withMessage:(MessageData *)arg3;
@end
