//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FavTVItem : NSObject
{
    NSString *_title;
    NSString *_descriptionStr;
    NSString *_thumbUrl;
    NSString *_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

