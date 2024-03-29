//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseEmoticonMgrLogic.h"

#import "GetEmotionCustomMD5ListCGIDelegate-Protocol.h"

@class GetEmotionCustomMD5ListCGI, NSString;
@protocol MMEmotionCustomMgrLogicDelegate;

@interface MMCustomEmoticonMgrLogic : MMBaseEmoticonMgrLogic <GetEmotionCustomMD5ListCGIDelegate>
{
    id <MMEmotionCustomMgrLogicDelegate> _delegate;
    GetEmotionCustomMD5ListCGI *_getCustomMD5ListCGI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetEmotionCustomMD5ListCGI *getCustomMD5ListCGI; // @synthesize getCustomMD5ListCGI=_getCustomMD5ListCGI;
@property(nonatomic) __weak id <MMEmotionCustomMgrLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onEmoticonMd5ObjectDownloadFail:(id)arg1;
- (void)onEmoticonMd5ObjectDownloadFinish:(id)arg1;
- (void)onEmoticonDataDelete:(id)arg1;
- (void)onEmoticonDataDownloadFail:(id)arg1;
- (void)onEmoticonDataDownloadFinish:(id)arg1;
- (void)onGetEmoticonCustomMD5ListFinished:(id)arg1;
- (void)onGetEmoticonCustomMD5ListFailed;
- (void)refreshCustomEmoticons;
- (BOOL)addCustomEmoticon:(id)arg1 customEmojiType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

