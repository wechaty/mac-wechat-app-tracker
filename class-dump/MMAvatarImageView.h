//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMImageView.h"

@interface MMAvatarImageView : MMImageView
{
    BOOL _bUseRoundAvatar;
    double _cornerRadius;
    CDUnknownBlockType _didClickBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didClickBlock; // @synthesize didClickBlock=_didClickBlock;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL bUseRoundAvatar; // @synthesize bUseRoundAvatar=_bUseRoundAvatar;
- (void)mouseDown:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

