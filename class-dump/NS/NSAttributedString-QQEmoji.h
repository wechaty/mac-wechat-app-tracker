//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (QQEmoji)
+ (double)heightForAttributedString:(id)arg1 widthConstraint:(double)arg2 padding:(double)arg3;
- (BOOL)lastCharacterIsQQEmoji;
- (BOOL)containsQQEmoji;
- (unsigned long long)bulletAttachmentCount;
- (struct _NSRange)nextParagraphRangeFromTextRange:(struct _NSRange)arg1;
- (struct _NSRange)previousParagraphRangeFromTextRange:(struct _NSRange)arg1;
- (id)rangeOfParagraphsFromTextRange:(struct _NSRange)arg1;
- (struct _NSRange)firstParagraphRangeFromTextRange:(struct _NSRange)arg1;
@end

