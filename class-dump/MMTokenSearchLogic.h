//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMTokenSearchLogic : NSObject
{
    NSArray *_searchResultList;
    NSArray *_allTags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allTags; // @synthesize allTags=_allTags;
@property(retain, nonatomic) NSArray *searchResultList; // @synthesize searchResultList=_searchResultList;
- (void)dealloc;
- (void)doSearchByKey:(id)arg1 except:(id)arg2;
- (void)fetchAllTags;
- (id)init;

@end

