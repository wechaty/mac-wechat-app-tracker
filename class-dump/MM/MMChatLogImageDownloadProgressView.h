//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMProgressView;

@interface MMChatLogImageDownloadProgressView : NSView
{
    MMProgressView *_progressView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMProgressView *progressView; // @synthesize progressView=_progressView;
- (void)setCurrentProgress:(unsigned int)arg1;
- (void)initProgress;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

@end
