//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCVideoRender : NSObject
{
}

- (void)updateOrientation;
- (void)cameraFrontMode:(BOOL)arg1;
- (void)flipView;
- (id)getRenderView;
- (void)changeFrame:(struct CGRect)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;

@end

