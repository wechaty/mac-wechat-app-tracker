//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSImage, NSString;

@interface ExpressionWrap : NSObject
{
    NSString *_key;
    NSDictionary *_descDic;
    NSString *_imagePath;
    NSString *_imageName;
    NSImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSDictionary *descDic; // @synthesize descDic=_descDic;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)loadImage;

@end

