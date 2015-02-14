/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, NSMutableArray, ISDConflictManager, NSSet;

@interface ISDConflictChangeEnumerator : NSEnumerator {

	NSEnumerator* _conflictEnumerator;
	NSMutableArray* _changeQueue;
	unsigned _generation;
	ISDConflictManager* _conflictManager;
	NSSet* _entityNames;

}
-(void)dealloc;
-(id)nextObject;
-(void)_processConflict:(id)arg1 ;
-(id)initWithConflictEnumerator:(id)arg1 conflictManager:(id)arg2 entityNames:(id)arg3 generation:(unsigned)arg4 ;
@end

