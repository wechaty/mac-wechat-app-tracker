//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAttachmentObject.h"

@class NSImage, NSString;

@interface MMMediaAttachmentObject : MMAttachmentObject
{
    NSImage *_iconImage;
    NSString *_titleInfo;
    NSString *_detailInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *titleInfo; // @synthesize titleInfo=_titleInfo;
@property(retain, nonatomic) NSImage *iconImage; // @synthesize iconImage=_iconImage;

@end

