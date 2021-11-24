//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface PBCoderPropertyType : NSObject <PBCoding>
{
    unsigned int m_index;
    int m_cType;
    Class m_cls;
    Class m_subCls;
    SEL m_getter;
    SEL m_setter;
    id m_blockGet;
    id m_blockSet;
    BOOL m_isSuperPlaceHolder;
    BOOL m_isContainerUnpacked;
    NSString *m_clsName;
    NSString *m_subClsName;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_isContainerUnpacked;
+ (void)PBArrayAdd_m_subClsName;
+ (void)PBArrayAdd_m_clsName;
+ (void)PBArrayAdd_m_cType;
+ (void)PBArrayAdd_m_isSuperPlaceHolder;
+ (void)PBArrayAdd_m_index;
- (void).cxx_destruct;
@property(nonatomic) BOOL m_isContainerUnpacked; // @synthesize m_isContainerUnpacked;
@property(nonatomic) int m_cType; // @synthesize m_cType;
@property(nonatomic) BOOL m_isSuperPlaceHolder; // @synthesize m_isSuperPlaceHolder;
@property(nonatomic) unsigned int m_index; // @synthesize m_index;
@property(retain, nonatomic) id m_blockSet; // @synthesize m_blockSet;
@property(retain, nonatomic) id m_blockGet; // @synthesize m_blockGet;
@property(readonly, nonatomic) SEL m_setter; // @synthesize m_setter;
@property(readonly, nonatomic) SEL m_getter; // @synthesize m_getter;
@property(readonly, nonatomic) Class m_subCls; // @synthesize m_subCls;
@property(readonly, nonatomic) Class m_cls; // @synthesize m_cls;
- (id)initWithCType:(int)arg1 index:(unsigned int)arg2 getter:(SEL)arg3 setter:(SEL)arg4 blockGet:(id)arg5 blockSet:(id)arg6;
- (id)initWithClass:(Class)arg1 subClass:(Class)arg2 unpacked:(BOOL)arg3 index:(unsigned int)arg4 getter:(SEL)arg5 setter:(SEL)arg6 blockGet:(id)arg7 blockSet:(id)arg8;
- (id)initWithClass:(Class)arg1 subClass:(Class)arg2 index:(unsigned int)arg3 getter:(SEL)arg4 setter:(SEL)arg5 blockGet:(id)arg6 blockSet:(id)arg7;
@property(nonatomic) NSString *m_subClsName; // @synthesize m_subClsName;
@property(nonatomic) NSString *m_clsName; // @synthesize m_clsName;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

