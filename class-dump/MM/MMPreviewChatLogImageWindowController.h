//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPreviewWindowController.h"

#import "IMMFavRecordDownloadMgrExt-Protocol.h"
#import "IMMRecordDownloadMgrExt-Protocol.h"
#import "IMMRecordNestedDownloadMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMFavoritesMgrExt-Protocol.h"

@class FavoritesItem, FavoritesItemDataField, MMQLPreviewItem, MessageData, NSString;

@interface MMPreviewChatLogImageWindowController : MMPreviewWindowController <MMFavoritesMgrExt, IMessageExt, IMMRecordDownloadMgrExt, IMMRecordNestedDownloadMgrExt, IMMFavRecordDownloadMgrExt>
{
    MMQLPreviewItem *m_currentPreviewingItem;
    MessageData *m_currentPreviewingMessage;
    FavoritesItemDataField *m_currentPreviewingParentDataField;
    FavoritesItem *m_currentPreviewingFavoritesItem;
}

- (void).cxx_destruct;
- (void)OnDownloadRecordNestedDataFieldPart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordNestedDataFieldExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordNestedDataFieldFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordNestedDataFieldOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadFavItemRecordPart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadFavItemRecordExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadFavItemRecordFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadFavItemRecordOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (id)getDataField:(id)arg1;
- (id)getLocalIdDetails:(id)arg1 andDataField:(id)arg2;
- (BOOL)isSameLocalId:(id)arg1;
- (BOOL)isSameLocalIdDetails:(id)arg1 andDataField:(id)arg2;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)OnHistoryRecordRevoked:(id)arg1 historyId:(unsigned long long)arg2;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (void)openWith;
- (id)getCurrentPreviewItem;
- (id)getInitialPreviewItem;
- (void)setupPageController;
- (void)showPreviewItem:(id)arg1 targetFrame:(struct CGRect)arg2;
- (void)show;
- (void)_preloadVideoOfPreviewItem:(id)arg1 parentDataField:(id)arg2 parentMessage:(id)arg3 parentFavItem:(id)arg4;
- (unsigned long long)_indexOfPreviewItemWithDataField:(id)arg1;
- (id)_handleInvalidImagePath:(id)arg1;
- (id)_genPreviewItemWithDataField:(id)arg1 parentFavItem:(id)arg2;
- (id)_genPreviewItemWithDataField:(id)arg1 parentMessage:(id)arg2;
- (id)_genPreviewItemWithDataField:(id)arg1 parentDataField:(id)arg2;
- (void)dealloc;
- (id)getDataSourceList:(id)arg1 withFavItem:(id)arg2 withCurrentData:(id)arg3;
- (id)initWithCurrentDataField:(id)arg1 parentData:(id)arg2 scene:(unsigned long long)arg3 subScene:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

