/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {

	NSArray* _propertiesToUpdate;
	NSArray* _valuesToUpdateTo;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithProperties:(id)arg1 values:(id)arg2 inScope:(id)arg3 ;
-(char)isDestination:(id)arg1 compatibleDestinationFor:(id)arg2 ;
-(char)isRelationship:(id)arg1 compatibleWith:(id)arg2 ;
-(id)_generateSQLForRelationshipUpdate:(id)arg1 destination:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForAttributeUpdate:(id)arg1 value:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForRelationshipUpdate:(id)arg1 sourceRelationship:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForAttributeUpdate:(id)arg1 sourceAttribute:(id)arg2 inContext:(id)arg3 ;
-(char)isUpdateColumnsScoped;
-(void)dealloc;
@end

