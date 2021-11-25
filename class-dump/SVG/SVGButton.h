//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor, NSString;

@interface SVGButton : NSButton
{
    BOOL _isUserInteractionEnabled;
    long long _eType;
    long long _eState;
    NSString *_imageName;
    NSString *_alternateImageName;
    NSColor *_normalColor;
    NSColor *_alternateColor;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSColor *alternateColor; // @synthesize alternateColor=_alternateColor;
@property(retain, nonatomic) NSColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) NSString *alternateImageName; // @synthesize alternateImageName=_alternateImageName;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) BOOL isUserInteractionEnabled; // @synthesize isUserInteractionEnabled=_isUserInteractionEnabled;
@property(nonatomic) long long eState; // @synthesize eState=_eState;
@property(nonatomic) long long eType; // @synthesize eType=_eType;
- (void)setup;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidChangeBackingProperties;
- (void)dealloc;
- (void)layout;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
