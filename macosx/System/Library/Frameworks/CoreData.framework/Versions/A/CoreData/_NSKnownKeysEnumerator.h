/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface _NSKnownKeysEnumerator : NSEnumerator {

	id _target;
	const id* _list;
	const id* _referenceItems;
	NSRange _range;
	unsigned long long _index;
	unsigned long long _flags;

}
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(const id*)arg3 andRange:(NSRange)arg4 andCopyItems:(char)arg5 ;
-(void)dealloc;
-(id)nextObject;
-(void)_invalidate;
@end

