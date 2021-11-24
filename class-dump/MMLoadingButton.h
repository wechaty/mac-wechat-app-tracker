//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSProgressIndicator, NSString, NSTextField;

@interface MMLoadingButton : NSView
{
    BOOL _enabled;
    BOOL _highlighted;
    BOOL _isLoading;
    double _cornerRaidus;
    NSColor *_highlightedBackgroundColor;
    NSColor *_backgrounColor;
    double _borderWidth;
    id _target;
    SEL _action;
    NSProgressIndicator *_loadingIndicator;
    double _titleFittingWith;
    NSTextField *_titleTextField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) double titleFittingWith; // @synthesize titleFittingWith=_titleFittingWith;
@property(retain, nonatomic) NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) NSColor *backgrounColor; // @synthesize backgrounColor=_backgrounColor;
@property(retain, nonatomic) NSColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(nonatomic) double cornerRaidus; // @synthesize cornerRaidus=_cornerRaidus;
@property(retain, nonatomic) NSString *title;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

