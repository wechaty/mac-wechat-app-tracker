//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol TXVideoCustomProcessDelegate <NSObject>

@optional
- (BOOL)onPlayerPixelBuffer:(struct __CVBuffer *)arg1;
- (void)onDetectFacePoints:(NSArray *)arg1;
- (void)onTextureDestoryed;
- (unsigned int)onPreProcessTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
@end

