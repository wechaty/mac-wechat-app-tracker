//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "JNWCollectionViewDataSource-Protocol.h"
#import "JNWCollectionViewDelegate-Protocol.h"
#import "JNWCollectionViewGridLayoutDelegate-Protocol.h"
#import "JNWCollectionViewListLayoutDelegate-Protocol.h"
#import "MMChatBaseCellViewDelegate-Protocol.h"
#import "MMViewerWindowDelegate-Protocol.h"

@class JNWCollectionView, MMChatManagerDataSource, MMTimer, NSMutableDictionary, NSString, NSTimer, WCContactData;
@protocol MMCollectionDelegate;

@interface MMChatCollectionViewController : NSViewController <JNWCollectionViewDelegate, JNWCollectionViewDataSource, JNWCollectionViewGridLayoutDelegate, JNWCollectionViewListLayoutDelegate, MMChatBaseCellViewDelegate, MMViewerWindowDelegate>
{
    BOOL _multiSelectionMode;
    BOOL _isLoadingMore;
    WCContactData *_chatContact;
    id <MMCollectionDelegate> _delegate;
    MMChatManagerDataSource *_messageDataSource;
    unsigned long long _mediaType;
    JNWCollectionView *_collectionView;
    unsigned long long _collectionLayoutStyle;
    MMTimer *_scrollDelaytimer;
    NSTimer *_uiReloadTimer;
    NSMutableDictionary *_viewerWindowDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *viewerWindowDic; // @synthesize viewerWindowDic=_viewerWindowDic;
@property(retain, nonatomic) NSTimer *uiReloadTimer; // @synthesize uiReloadTimer=_uiReloadTimer;
@property(nonatomic) BOOL isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(retain, nonatomic) MMTimer *scrollDelaytimer; // @synthesize scrollDelaytimer=_scrollDelaytimer;
@property(nonatomic) unsigned long long collectionLayoutStyle; // @synthesize collectionLayoutStyle=_collectionLayoutStyle;
@property(nonatomic) __weak JNWCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) MMChatManagerDataSource *messageDataSource; // @synthesize messageDataSource=_messageDataSource;
@property(nonatomic) __weak id <MMCollectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCContactData *chatContact; // @synthesize chatContact=_chatContact;
@property(nonatomic) BOOL multiSelectionMode; // @synthesize multiSelectionMode=_multiSelectionMode;
- (void)doScrollViewBoundsDidChanged;
- (void)onScrollViewBoundsDidChanged:(id)arg1;
- (void)cellView:(id)arg1 showDetailWindowWithItem:(id)arg2;
- (BOOL)isMultiSelectionMode;
- (void)startMultiSelection:(id)arg1;
- (struct CGRect)originScreenRectForAnimationForWindow:(id)arg1;
- (void)windowDidColsed:(id)arg1;
- (double)getListRowHeightWithIndexPath:(id)arg1 andWidthConstrain:(double)arg2;
- (double)collectionView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewGotMouseUpNotInCell:(id)arg1 needAsSameKind:(BOOL)arg2;
- (void)collectionViewGotMouseDownNotInCell:(id)arg1 needAsSameKind:(BOOL)arg2;
- (void)collectionView:(id)arg1 didDoubleClickItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 mouseUpInItemAtIndexPath:(id)arg2 cell:(id)arg3;
- (void)collectionView:(id)arg1 mouseUpInItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 mouseDownInItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didScrollToItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)shouldShowSectionHeader;
- (id)collectionView:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 inSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)getCollectionViewCellIdWithIndexPath:(id)arg1;
- (unsigned long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)multiSelectMessageWithDragRect:(struct CGRect)arg1;
- (id)getMultiSelectedMessages;
- (void)reloadData;
- (BOOL)flushLinks;
- (BOOL)showLinks;
- (BOOL)flushFiles;
- (BOOL)showFiles;
- (BOOL)flushPhotos;
- (BOOL)showPhotos;
- (void)showAll;
- (void)setupCollectionViewLayout;
- (void)setupCollectionView;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

