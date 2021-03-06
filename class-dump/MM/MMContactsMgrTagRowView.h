//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMContactsMgrBaseRowView.h"

#import "NSMenuDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class MMContactTag, MMTextField, NSString, SVGButton;

@interface MMContactsMgrTagRowView : MMContactsMgrBaseRowView <NSMenuDelegate, NSTextFieldDelegate>
{
    BOOL _isCreateRowCell;
    long long _editType;
    MMTextField *_tagTextField;
    MMContactTag *_tagInfo;
    CDUnknownBlockType _modifyTagBlock;
    CDUnknownBlockType _deleteTagBlock;
    CDUnknownBlockType _createTagBlock;
    CDUnknownBlockType _addMemberTagBlock;
    CDUnknownBlockType _copyTagBlock;
    CDUnknownBlockType _menuShowBlock;
    CDUnknownBlockType _createNewTagBlock;
    NSString *_replaceString;
    SVGButton *_addButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SVGButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSString *replaceString; // @synthesize replaceString=_replaceString;
@property(copy, nonatomic) CDUnknownBlockType createNewTagBlock; // @synthesize createNewTagBlock=_createNewTagBlock;
@property(copy, nonatomic) CDUnknownBlockType menuShowBlock; // @synthesize menuShowBlock=_menuShowBlock;
@property(copy, nonatomic) CDUnknownBlockType copyTagBlock; // @synthesize copyTagBlock=_copyTagBlock;
@property(copy, nonatomic) CDUnknownBlockType addMemberTagBlock; // @synthesize addMemberTagBlock=_addMemberTagBlock;
@property(copy, nonatomic) CDUnknownBlockType createTagBlock; // @synthesize createTagBlock=_createTagBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteTagBlock; // @synthesize deleteTagBlock=_deleteTagBlock;
@property(copy, nonatomic) CDUnknownBlockType modifyTagBlock; // @synthesize modifyTagBlock=_modifyTagBlock;
@property(nonatomic) BOOL isCreateRowCell; // @synthesize isCreateRowCell=_isCreateRowCell;
@property(retain, nonatomic) MMContactTag *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) MMTextField *tagTextField; // @synthesize tagTextField=_tagTextField;
@property(nonatomic) long long editType; // @synthesize editType=_editType;
- (void)checkNewLabelNameAvailable;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)onCreateNewTagButtonClick;
- (void)onCopyTagMenuClick;
- (void)onAddMemberToTagMenuClick;
- (void)onDeleteTagMenuClick;
- (void)onModifyTagMenuClick;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)contentMenu;
- (id)menuForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)endTagTextFieldEditing;
- (void)startTagTextFieldEditing;
- (void)resetTagTextFieldStatus;
- (void)setSelected:(BOOL)arg1;
- (void)updateUI:(id)arg1 withCount:(long long)arg2;
- (void)updateUI:(id)arg1;
- (void)initViews;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

