//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppPackageInfo : NSObject
{
    unsigned int _type;
    NSString *_md5;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)toXML;
- (BOOL)fromXMLStr:(id)arg1;
- (BOOL)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

