//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAShapeLayer, NSArray, NSColor;

@interface MMCircularProgressView : NSView
{
    BOOL _clockwise;
    NSColor *_fillColor;
    NSColor *_progressColor;
    double _edgeRatio;
    double _innerPadding;
    NSArray *_steps;
    double _max;
    double _min;
    double _current;
    CAShapeLayer *_trimCircleLayer;
    CAShapeLayer *_progressLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *trimCircleLayer; // @synthesize trimCircleLayer=_trimCircleLayer;
@property(nonatomic) BOOL clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) double current; // @synthesize current=_current;
@property(nonatomic) double min; // @synthesize min=_min;
@property(nonatomic) double max; // @synthesize max=_max;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(nonatomic) double innerPadding; // @synthesize innerPadding=_innerPadding;
@property(nonatomic) double edgeRatio; // @synthesize edgeRatio=_edgeRatio;
@property(retain, nonatomic) NSColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)orientation;
- (double)maxValue;
- (double)currentValue;
- (double)previousStepMaxValue;
- (double)currentStepMaxValue;
- (void)setIncrementalSteps:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setCurrentValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)incrementBy:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

