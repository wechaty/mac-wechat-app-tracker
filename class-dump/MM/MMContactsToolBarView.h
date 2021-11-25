//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMContactsToolBarIConView, MMOutlineButton, NSMutableArray, NSString;
@protocol MMContactsToolBarDelegate;

@interface MMContactsToolBarView : NSView
{
    BOOL _bShow;
    long long _type;
    id <MMContactsToolBarDelegate> _delegate;
    NSString *_currentTagId;
    MMContactsToolBarIConView *_deleteBtn;
    MMContactsToolBarIConView *_modifyBtn;
    MMContactsToolBarIConView *_addTagBtn;
    MMContactsToolBarIConView *_removeTagBtn;
    NSMutableArray *_btnArray;
    NSMutableArray *_menuArray;
    MMOutlineButton *_clearBtn;
    MMOutlineButton *_lookupBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMOutlineButton *lookupBtn; // @synthesize lookupBtn=_lookupBtn;
@property(retain, nonatomic) MMOutlineButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) NSMutableArray *menuArray; // @synthesize menuArray=_menuArray;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) MMContactsToolBarIConView *removeTagBtn; // @synthesize removeTagBtn=_removeTagBtn;
@property(retain, nonatomic) MMContactsToolBarIConView *addTagBtn; // @synthesize addTagBtn=_addTagBtn;
@property(retain, nonatomic) MMContactsToolBarIConView *modifyBtn; // @synthesize modifyBtn=_modifyBtn;
@property(retain, nonatomic) MMContactsToolBarIConView *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) NSString *currentTagId; // @synthesize currentTagId=_currentTagId;
@property(nonatomic) BOOL bShow; // @synthesize bShow=_bShow;
@property(nonatomic) __weak id <MMContactsToolBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)onRemoveTagButtonClick;
- (void)onAddMemberButtonClick;
- (void)onAddTagButtonClick;
- (void)onModifyButtonClick;
- (void)onDeleteButtonClick;
- (void)onLookupButtonClick:(id)arg1;
- (void)onContactsPreviewClear;
- (void)updateMemberCount:(long long)arg1;
- (void)initSubButtons;
- (void)initLeftToolBarViews;
- (void)initSubViews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
