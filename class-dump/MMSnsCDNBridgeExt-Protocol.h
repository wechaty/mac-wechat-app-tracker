//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CdnComVideoProcessInfo, CdnDownloadTaskInfo, CdnProgressInfo, CdnUploadTaskInfo;

@protocol MMSnsCDNBridgeExt

@optional
- (void)onCdnUploadProgress:(CdnProgressInfo *)arg1;
- (void)onCdnUploadFinished:(CdnUploadTaskInfo *)arg1;
- (void)onCdnVideoMoovReady:(CdnComVideoProcessInfo *)arg1;
- (void)onCdnDownloadPartialData:(CdnComVideoProcessInfo *)arg1;
- (void)onCdnDownloadFinished:(CdnDownloadTaskInfo *)arg1;
- (void)onCdnDownloadProgress:(CdnProgressInfo *)arg1;
@end

