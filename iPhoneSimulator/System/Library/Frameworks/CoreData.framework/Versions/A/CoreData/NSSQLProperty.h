/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:14 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSString, NSPropertyDescription, NSSQLEntity;

@interface NSSQLProperty : NSStoreMapping {

	NSString* _name;
	NSPropertyDescription* _propertyDescription;
	NSSQLEntity* _entity;
	unsigned _propertyType;

}
-(id)externalName;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)columnName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)propertyDescription;
-(unsigned)slot;
-(char)isManyToMany;
-(char)isToOne;
-(char)isColumn;
-(char)isRelationship;
-(void)setEntityForReadOnlyFetch:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(char)isPrimaryKey;
-(void)setPropertyDescription:(id)arg1 ;
-(char)isAttribute;
-(char)isForeignKey;
-(char)isForeignEntityKey;
-(char)isForeignOrderKey;
-(char)isEntityKey;
-(char)isOptLockKey;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(id)name;
-(id)entity;
-(char)isToMany;
-(unsigned)propertyType;
@end

