//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFavoritesDetailBaseCell, NSEvent, NSMenu, NSString;

@protocol MMFavoritesDetailCellDelegate <NSObject>

@optional
- (void)cellDidStartDownload:(MMFavoritesDetailBaseCell *)arg1;
- (void)cellDidFinishDownload:(MMFavoritesDetailBaseCell *)arg1;
- (void)cellViewOnClickTagButton:(MMFavoritesDetailBaseCell *)arg1 tag:(NSString *)arg2;
- (BOOL)shouldShouldSelectIcon:(MMFavoritesDetailBaseCell *)arg1;
- (void)cellViewNeedsHeightRecalculated:(MMFavoritesDetailBaseCell *)arg1;
- (void)cellDragged:(MMFavoritesDetailBaseCell *)arg1 dragEvent:(NSEvent *)arg2 originalPosition:(struct CGPoint)arg3;
- (void)closedContextMenuFromCell:(MMFavoritesDetailBaseCell *)arg1;
- (void)openedContextMenuFromCell:(MMFavoritesDetailBaseCell *)arg1;
- (NSMenu *)contextMenuForCell:(MMFavoritesDetailBaseCell *)arg1 forEvent:(NSEvent *)arg2;
@end

