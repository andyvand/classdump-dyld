/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@class NSMutableArray;

@interface NSIBSortedEncodingMutableSet : NSMutableSet {

	NSMutableArray* storageArray;
	/*^block*/id comparator;
	char needsSorting;

}
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS119*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeObject:(id)arg1 ;
-(id)objectEnumerator;
-(id)allObjects;
-(id)member:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(Class)classForCoder;
-(id)initWithSet:(id)arg1 comparator:(/*^block*/id)arg2 ;
-(void)sortStorageArray;
@end
