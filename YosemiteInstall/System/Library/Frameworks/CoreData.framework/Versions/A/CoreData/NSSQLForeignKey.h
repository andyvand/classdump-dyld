/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {

	NSSQLToOne* _toOne;

}
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)toOneRelationship;
-(id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(void)dealloc;
@end

