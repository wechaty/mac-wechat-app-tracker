//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JNWCollectionViewLayout.h"

@class NSMutableArray;
@protocol JNWCollectionViewGridLayoutDelegate;

@interface JNWCollectionViewGridLayout : JNWCollectionViewLayout
{
    BOOL _itemPaddingEnabled;
    id <JNWCollectionViewGridLayoutDelegate> _delegate;
    double _verticalSpacing;
    double _itemHorizontalMargin;
    NSMutableArray *_sections;
    unsigned long long _numberOfColumns;
    double _itemPadding;
    struct CGSize _itemSize;
    struct CGRect _lastInvalidatedBounds;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect lastInvalidatedBounds; // @synthesize lastInvalidatedBounds=_lastInvalidatedBounds;
@property(nonatomic) double itemPadding; // @synthesize itemPadding=_itemPadding;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) double itemHorizontalMargin; // @synthesize itemHorizontalMargin=_itemHorizontalMargin;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) BOOL itemPaddingEnabled; // @synthesize itemPaddingEnabled=_itemPaddingEnabled;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) __weak id <JNWCollectionViewGridLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (struct _NSRange)rowsInRect:(struct CGRect)arg1 fromSection:(id)arg2;
- (struct _NSRange)columnsInRect:(struct CGRect)arg1;
- (id)indexPathForNextItemInDirection:(long long)arg1 currentIndexPath:(id)arg2;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (struct CGRect)rectForSectionAtIndex:(long long)arg1;
- (id)layoutAttributesForSupplementaryItemInSection:(long long)arg1 kind:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)init;

@end

