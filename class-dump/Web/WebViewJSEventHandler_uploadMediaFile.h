//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IWebviewResourceManagerExt-Protocol.h"

@class NSString;

@interface WebViewJSEventHandler_uploadMediaFile : WebviewJSEventHandlerBase <IWebviewResourceManagerExt>
{
    BOOL _isShowProgressTips;
}

- (void)onLocalResourceUploadFinishedWithoutMediaId:(id)arg1 LocalId:(id)arg2 FileUrl:(id)arg3 ErrCode:(int)arg4;
- (void)onLocalResourceUploadProgressWithouMediaId:(int)arg1 LocalId:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

