//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMView.h"

@class NSArray, NSColor;

@interface MMBorderView : MMView
{
    double _borderWidth;
    NSColor *_borderColor;
    NSArray *_borderPattern;
    unsigned long long _borders;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long borders; // @synthesize borders=_borders;
@property(retain, nonatomic) NSArray *borderPattern; // @synthesize borderPattern=_borderPattern;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void)drawRect:(struct CGRect)arg1;
- (void)setDefaultValues;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

