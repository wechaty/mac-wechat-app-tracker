//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComposeTextView.h"

@class NSAttributedString, NSString;
@protocol MMStringComposeTextViewDelegate;

@interface MMStringComposeTextView : MMComposeTextView
{
    BOOL _isHiddenHolderAfterGetFocus;
    id <MMStringComposeTextViewDelegate> _textContrainerDelegate;
    NSString *_holderString;
    CDUnknownBlockType _didPasteMessagesBlock;
    CDUnknownBlockType _didPasteFilesBlock;
    NSAttributedString *_placeHolderString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *placeHolderString; // @synthesize placeHolderString=_placeHolderString;
@property(copy, nonatomic) CDUnknownBlockType didPasteFilesBlock; // @synthesize didPasteFilesBlock=_didPasteFilesBlock;
@property(copy, nonatomic) CDUnknownBlockType didPasteMessagesBlock; // @synthesize didPasteMessagesBlock=_didPasteMessagesBlock;
@property(retain, nonatomic) NSString *holderString; // @synthesize holderString=_holderString;
@property(nonatomic) BOOL isHiddenHolderAfterGetFocus; // @synthesize isHiddenHolderAfterGetFocus=_isHiddenHolderAfterGetFocus;
@property(nonatomic) __weak id <MMStringComposeTextViewDelegate> textContrainerDelegate; // @synthesize textContrainerDelegate=_textContrainerDelegate;
- (void)didChangeText;
- (void)sendMessage;
- (id)_reformatEmotionString:(id)arg1;
- (void)insertEmoticon:(id)arg1;
- (void)insertImageWithRefresh:(id)arg1;
- (void)insertImage:(id)arg1;
- (id)mentionTextCellEscapedAttributedString:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)doCut;
- (void)doCopy;
- (unsigned char)pastePlainTextWithItem:(id)arg1 type:(id)arg2;
- (void)pasteFileURLWithItems:(id)arg1 names:(id)arg2 type:(id)arg3;
- (void)pasteMessages:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textStorage:(id)arg2;

@end
