//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSColor.h>

@interface NSColor (RBLCGColorAdditions)
+ (id)rbl_colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithHex:(id)arg1 alpha:(double)arg2;
+ (id)colorWithARGBHex:(id)arg1 alpha:(double)arg2;
+ (id)colorWithARGBHex:(id)arg1;
+ (id)colorWithHex:(id)arg1;
@property(readonly, nonatomic) struct CGColor *rbl_CGColor;
- (struct CGColor *)forwardCompatibilityCGColor;
@end

