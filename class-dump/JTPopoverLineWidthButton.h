//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSImage;

@interface JTPopoverLineWidthButton : NSButton
{
    BOOL _isSelected;
    unsigned long long _width;
    NSImage *_selectedImage;
    NSImage *_normalImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) NSImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
- (void)mouseUp:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

