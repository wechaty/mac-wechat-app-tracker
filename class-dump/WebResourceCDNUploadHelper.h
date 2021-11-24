//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"

@class NSMutableArray, NSString, WebviewLocalResItem;
@protocol WebResourceCDNUploadHelperDelegate;

@interface WebResourceCDNUploadHelper : NSObject <MMCGIDelegate, ICdnComMgrExt>
{
    BOOL _isUploading;
    NSMutableArray *_uploadArray;
    WebviewLocalResItem *_curUploadingItem;
    id <WebResourceCDNUploadHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WebResourceCDNUploadHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)handleGetMediaIdResp:(id)arg1;
- (void)sendNextResItemGetMediaIdRequest;
- (void)sendGetMediaIdRequest;
- (void)sendUploadRequest;
- (BOOL)stopUpload;
- (BOOL)startUpload;
- (void)addUploadCDNItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

