/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSEntityMigrationPolicy : NSObject
-(char)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(char)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4 ;
-(char)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(char)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4 ;
-(char)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(char)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(char)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
@end

