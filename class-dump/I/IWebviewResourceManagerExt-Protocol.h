//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WebviewLocalResItem;

@protocol IWebviewResourceManagerExt <NSObject>

@optional
- (void)onLocalResourceUploadFinishedWithoutMediaId:(WebviewLocalResItem *)arg1 LocalId:(NSString *)arg2 FileUrl:(NSString *)arg3 ErrCode:(int)arg4;
- (void)onLocalResourceUploadProgressWithouMediaId:(int)arg1 LocalId:(NSString *)arg2;
- (void)onLocalResourceUploadFinished:(NSString *)arg1 SvrId:(NSString *)arg2 ErrCode:(int)arg3;
- (void)onLocalResourceUploadProgress:(int)arg1 LocalId:(NSString *)arg2;
- (void)onLocalImageSaveFinish:(NSArray *)arg1;
@end

