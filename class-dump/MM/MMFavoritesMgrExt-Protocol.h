//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesItem, NSArray, NSString;

@protocol MMFavoritesMgrExt <NSObject>

@optional
- (void)onDeleteRecentFavItem:(unsigned int)arg1;
- (void)onAddRecentFavItems:(NSArray *)arg1;
- (void)onAddRecentFavItem:(unsigned int)arg1;
- (void)onDeleteTagSuccess:(NSString *)arg1;
- (void)onUpdateTagNameSuccess:(unsigned int)arg1 oldTagName:(NSString *)arg2 newTagName:(NSString *)arg3;
- (void)onFinishUpdateItemsTags:(NSArray *)arg1;
- (void)onUpdateItemsTagsSuccess:(NSArray *)arg1;
- (void)onStartUpdateItemsTags:(NSArray *)arg1;
- (void)OnGetNextPageFavoritesCapacityItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(BOOL)arg3;
- (void)OnGetFirstPageFavoritesCapacityItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(BOOL)arg3;
- (void)onGetFavObjectByIdFail:(NSString *)arg1;
- (void)onGetFavObjectByObjectIdSuccess:(NSString *)arg1 Object:(NSString *)arg2;
- (void)onGetFavEncryptObjectIdFail:(unsigned int)arg1;
- (void)onGetFavEncryptObjectIdSuccess:(unsigned int)arg1 ObjectId:(NSString *)arg2;
- (void)OnDelAllFavItem;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)OnModFavoritesItem:(NSArray *)arg1;
- (void)OnStartDownloadFavoritesItem:(FavoritesItem *)arg1;
- (void)OnStartUploadFavoritesItem:(FavoritesItem *)arg1;
- (void)OnRestartAllUploadFailItems;
- (void)OnHasAnyFavoriteData:(BOOL)arg1;
- (void)OnLoadMoreFavoritesItemFail;
- (void)OnUpdateItemDescription:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnUpdateItems:(NSArray *)arg1;
- (void)OnUpdateItemRemark:(unsigned int)arg1 ErrCode:(int)arg2;
- (void)OnSearch:(NSArray *)arg1;
- (void)OnUploadFavoritesItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)OnDownloadFavoritesItemFail:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2;
- (void)OnDownloadFavoritesItemOK:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2;
- (void)OnDownloadFavoritesItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)OnFavoritesItemDownloadFinished:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnNewFavoritesItemUpdate:(NSArray *)arg1;
- (void)OnRemoveFavoritesItem;
- (void)OnFavoritesItemStartAsyncUpload:(FavoritesItem *)arg1;
- (void)OnAddFavoritesItem:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnGetNextPageFavoritesItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(BOOL)arg3;
- (void)OnGetFirstPageFavoritesItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(BOOL)arg3;
- (void)onSyncNoteConflict:(FavoritesItem *)arg1;
- (void)onFavItem:(unsigned int)arg1 syncStatusChange:(int)arg2;
- (void)onAddLocalNoteItem:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)favoritesMgrDidProcessTagFromService:(NSArray *)arg1 updateTags:(NSArray *)arg2 deleteTags:(NSArray *)arg3;
- (void)favoritesMgrDidUpdateTagsWithLocalIDArray:(NSArray *)arg1;
- (void)favoritesMgrDidRemoveItem:(FavoritesItem *)arg1;
- (void)favoritesMgrDidUpdatedItemWithLocalID:(unsigned int)arg1;
- (void)favoritesMgrDidUpdatedItemsWithLocalIDArray:(NSArray *)arg1;
- (void)favoritesMgrDidAddItems:(NSArray *)arg1 ErrCode:(int)arg2;
- (void)favoritesMgrDidUpdateTotalItemsCount:(unsigned long long)arg1;
- (void)favoritesMgrDidUpdateFavSetting;
- (void)favoritesMgrDidFinishedSync;
@end

