//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface ContactProfileHeader : NSObject
{
    unsigned int _gender;
    NSAttributedString *_nickName;
    NSAttributedString *_wechatId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSAttributedString *wechatId; // @synthesize wechatId=_wechatId;
@property(copy, nonatomic) NSAttributedString *nickName; // @synthesize nickName=_nickName;

@end
