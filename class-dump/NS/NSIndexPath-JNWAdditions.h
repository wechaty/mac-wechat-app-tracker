//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (JNWAdditions)
+ (id)jnw_indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)indexPathForRow:(long long)arg1 inSection:(long long)arg2;
@property(readonly, nonatomic) long long jnw_item;
@property(readonly, nonatomic) long long jnw_section;
@property(readonly, nonatomic) long long section;
@property(readonly, nonatomic) long long row;
@end

