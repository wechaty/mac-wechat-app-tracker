//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class SVGImageView;

@interface MMLoadingIndicatorView : NSView
{
    BOOL _isLoading;
    SVGImageView *_loadingIndicator;
    unsigned long long _loadingType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long loadingType; // @synthesize loadingType=_loadingType;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) SVGImageView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void)stopLoading;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)startLoading;
- (void)awakeFromNib;
- (void)updateLoadingColor:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andColorType:(unsigned long long)arg2;

@end

