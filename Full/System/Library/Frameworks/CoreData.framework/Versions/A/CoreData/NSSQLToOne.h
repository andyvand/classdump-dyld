/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLRelationship.h>

@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {

	NSSQLForeignKey* _foreignKey;
	NSSQLForeignEntityKey* _foreignEntityKey;
	NSSQLForeignOrderKey* _foreignOrderKey;
	unsigned _slot;
	char _isVirtual;

}
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)columnName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(unsigned)slot;
-(char)isVirtual;
-(id)foreignEntityKey;
-(id)foreignOrderKey;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 inverseToMany:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3 ;
-(char)isOptional;
-(void)dealloc;
-(id)description;
@end

