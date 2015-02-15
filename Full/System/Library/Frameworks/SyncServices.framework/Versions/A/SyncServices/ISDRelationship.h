/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISDProperty.h>
#import <SyncServices/NSCoding.h>

@class ISDEntity, NSArray;

@interface ISDRelationship : ISDProperty <NSCoding> {

	ISDEntity* _source;
	NSArray* _targets;
	NSArray* _inverseRelationships;
	NSArray* _anonymousInverseRelationshipNames;

}
+(void)initialize;
-(id)sourceName;
-(int)deleteRule;
-(void)setDeleteRule:(int)arg1 ;
-(char)isRelationship;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)source;
-(void)setSource:(id)arg1 ;
-(char)isToMany;
-(id)targets;
-(char)morphInToObject:(id)arg1 ;
-(char)isCompatibleExtensionOf:(id)arg1 ;
-(void)setTargets:(id)arg1 ;
-(void)setToMany:(char)arg1 ;
-(void)setOrdering:(int)arg1 ;
-(int)ordering;
-(void)setInverseRelationships:(id)arg1 ;
-(void)setAnonymousInverseRelationshipNames:(id)arg1 ;
-(id)inverseRelationships;
-(id)anonymousInverseRelationshipNames;
@end

