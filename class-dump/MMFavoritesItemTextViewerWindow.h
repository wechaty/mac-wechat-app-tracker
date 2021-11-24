//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFavoriteItemViewerWindow.h"

@class MMView, NSScrollView, NSTextView;

@interface MMFavoritesItemTextViewerWindow : MMFavoriteItemViewerWindow
{
    NSTextView *_textView;
    NSScrollView *_scrollView;
    MMView *_scrollDocumentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMView *scrollDocumentView; // @synthesize scrollDocumentView=_scrollDocumentView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
- (id)contentForSharing;
- (id)shareSubMenuSupportActions;
- (id)supportedActions;
- (struct CGSize)sizeForContent;
- (void)loadContent;
- (void)setupTextView;
- (id)senderContact;
- (id)titleString;
- (void)dealloc;
- (void)windowDidLoad;

@end

