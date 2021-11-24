//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CdnComVideoProcessInfo, CdnDownloadTaskInfo, CdnProgressInfo, CdnUploadTaskInfo;

@protocol ICdnComMgrExt <NSObject>

@optional
- (void)OnCdnNetworkWarning:(unsigned int)arg1;
- (void)OnCdnVideoMoovReady:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnDownloadPartialData:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnDownloadFinished:(CdnDownloadTaskInfo *)arg1;
- (void)OnCdnUpload:(CdnUploadTaskInfo *)arg1;
- (void)OnCdnDownloadProgress:(CdnProgressInfo *)arg1;
- (void)OnCdnUploadProgress:(CdnProgressInfo *)arg1;
- (void)OnSetCdnDnsInfo;
@end

