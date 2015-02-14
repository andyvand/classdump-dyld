/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSMapTable;

@interface _NSPasteboardTypeCache : NSObject {

	NSMutableArray* _cachedTypeNames;
	NSMutableSet* _cachedTypeNameUnion;
	NSMutableSet* _conformingTypeIdentifiers;
	NSMapTable* _cachedRequestOnlyTypeNames;

}

@property (nonatomic,retain) NSMutableArray * _cachedTypeNames;                         //@synthesize cachedTypeNames=_cachedTypeNames - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * _cachedTypeNameUnion; 
-(id)init;
-(void)dealloc;
-(NSMutableSet *)_cachedTypeNameUnion;
-(id)_conformingTypeIdentifiers;
-(void)_addRequestOnlyType:(id)arg1 forIndex:(long long)arg2 ;
-(id)_requestOnlyTypesForIndex:(long long)arg1 ;
-(NSMutableArray *)_cachedTypeNames;
-(void)set_cachedTypeNames:(NSMutableArray *)arg1 ;
@end

