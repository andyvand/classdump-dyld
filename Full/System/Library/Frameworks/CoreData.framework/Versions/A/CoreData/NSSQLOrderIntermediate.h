/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {

	NSArray* _sortDescriptors;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2 ;
-(id)_generateSQLForOrderedManyToManyInverse:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForOrderedToManyInverse:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
@end

