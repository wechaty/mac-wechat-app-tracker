//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMImageEditItem.h"

@class MMImageEditSelectedTextView, NSString;

@interface MMImageEditTextViewBasedItem : MMImageEditItem
{
    MMImageEditSelectedTextView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageEditSelectedTextView *textView; // @synthesize textView=_textView;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (id)clippingStringWithRange:(struct _NSRange)arg1;
- (void)selectAll;
- (id)selectedText;
- (struct _NSRange)selctedRange;
- (void)insertText:(id)arg1 toLocation:(unsigned long long)arg2;
- (void)insertText:(id)arg1;
@property(retain, nonatomic) NSString *contentString;

@end

