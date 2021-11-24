//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextAttachmentCell.h>

@class NSString, WeNoteParagraphInfo;
@protocol MMTextAttachmentCellDelegate;

@interface MMTextAttachmentCell : NSTextAttachmentCell
{
    BOOL _fillWidth;
    NSString *_placeholderString;
    id _data;
    WeNoteParagraphInfo *_paraInfo;
    id <MMTextAttachmentCellDelegate> _delegate;
    struct CGSize _size;
    struct NSEdgeInsets _contentInset;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(nonatomic) id <MMTextAttachmentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WeNoteParagraphInfo *paraInfo; // @synthesize paraInfo=_paraInfo;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct NSEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) BOOL fillWidth; // @synthesize fillWidth=_fillWidth;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)dealloc;
- (id)init;

@end

