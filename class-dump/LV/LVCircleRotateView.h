//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@interface LVCircleRotateView : NSImageView
{
    NSImageView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImageView *loadingView; // @synthesize loadingView=_loadingView;
- (void)setHidden:(BOOL)arg1;
- (void)stopRotate;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (void)startRotate;
- (BOOL)isRotating;
- (void)updateImage:(struct CGSize)arg1;
- (void)setRotateSize:(struct CGSize)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

