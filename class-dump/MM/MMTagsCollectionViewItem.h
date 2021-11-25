//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class MMContactTag, MMOutlineButton;
@protocol MMTagCollectionViewItemDelegate;

@interface MMTagsCollectionViewItem : NSCollectionViewItem
{
    BOOL _bSelected;
    id <MMTagCollectionViewItemDelegate> _delegate;
    MMContactTag *_tagInfo;
    MMOutlineButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMOutlineButton *button; // @synthesize button=_button;
@property(retain, nonatomic) MMContactTag *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(nonatomic) BOOL bSelected; // @synthesize bSelected=_bSelected;
@property(nonatomic) __weak id <MMTagCollectionViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateContent:(id)arg1;
- (void)onContactTagButtonClick;
- (void)initSubViews;
- (void)viewDidLoad;
- (void)prepareForReuse;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
