/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@class NSData;

@interface _PFEncodedArray : NSArray {

	NSData* _sourceData;
	int _cd_rc;
	unsigned _count;

}
-(void)_replaceObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)copy;
-(id)mutableCopy;
-(unsigned long long)retainCount;
-(Class)classForCoder;
-(char)_tryRetain;
-(char)_isDeallocating;
-(Class)classForArchiver;
-(const id*)_values;
@end
