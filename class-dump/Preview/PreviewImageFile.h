//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface PreviewImageFile : NSObject
{
    BOOL _isThumb;
    BOOL _useCache;
    unsigned int _dataSize;
    NSString *_filePath;
    NSImage *_defaultImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) BOOL useCache; // @synthesize useCache=_useCache;
@property(nonatomic) BOOL isThumb; // @synthesize isThumb=_isThumb;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;

@end
