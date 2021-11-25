//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMMSessionMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMService-Protocol.h"

@class MMCache, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMMessageCacheMgr : MMService <IMMSessionMgrExt, IMessageExt, MMService>
{
    MMCache *_textMessageCache;
    MMCache *_translationCache;
    MMCache *_referCache;
    MMCache *_thumbImgCache;
    MMCache *_originImgCache;
    NSObject<OS_dispatch_queue> *_diskQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *diskQueue; // @synthesize diskQueue=_diskQueue;
@property(retain, nonatomic) MMCache *originImgCache; // @synthesize originImgCache=_originImgCache;
@property(retain, nonatomic) MMCache *thumbImgCache; // @synthesize thumbImgCache=_thumbImgCache;
@property(retain, nonatomic) MMCache *referCache; // @synthesize referCache=_referCache;
@property(retain, nonatomic) MMCache *translationCache; // @synthesize translationCache=_translationCache;
@property(retain, nonatomic) MMCache *textMessageCache; // @synthesize textMessageCache=_textMessageCache;
- (void)loadImageWithMessage:(id)arg1;
- (void)thumbImageWithReaderMessage:(id)arg1 thumbUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)thumbImageWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)originalImageWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)originalImageWithMessage:(id)arg1;
- (void)originalImageWithPreviewMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCachedImageWithFilePath:(id)arg1 isThumbnail:(BOOL)arg2;
- (void)cachedOriginImageWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cachedThumbImageWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedImageWithFilePath:(id)arg1 isThumbnail:(BOOL)arg2;
- (BOOL)cacheImageWithImage:(id)arg1 FilePath:(id)arg2 isThumbnail:(BOOL)arg3;
- (BOOL)cacheImageWithImageData:(id)arg1 FilePath:(id)arg2 isThumbnail:(BOOL)arg3;
- (void)clearTextMessageCache;
- (void)clearReferCacheForMessage:(id)arg1;
- (void)clearReferStringForKey:(id)arg1;
- (void)setReferString:(id)arg1 forKey:(id)arg2;
- (void)setTranslationString:(id)arg1 forKey:(id)arg2;
- (id)cachedReferStringForKey:(id)arg1;
- (id)cachedTranslationStringForKey:(id)arg1;
- (void)setTextMessageString:(id)arg1 forKey:(id)arg2;
- (id)cachedTextMessageStringForKey:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)onDelAllMsg:(id)arg1;
- (void)onSessionDeletedWithUserName:(id)arg1 atIndex:(long long)arg2;
- (void)clearAllCache;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)destroy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
