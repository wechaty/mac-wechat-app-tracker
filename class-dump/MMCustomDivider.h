//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMDivider.h"

@class NSColor;

@interface MMCustomDivider : MMDivider
{
    double _customAlpha;
    NSColor *_customColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *customColor; // @synthesize customColor=_customColor;
@property(nonatomic) double customAlpha; // @synthesize customAlpha=_customAlpha;
- (void)drawRect:(struct CGRect)arg1;

@end

