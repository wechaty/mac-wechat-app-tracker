//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMOutlineButton.h"

@class SVGImageView;

@interface MMTagButton : MMOutlineButton
{
    SVGImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SVGImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)setIconColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
