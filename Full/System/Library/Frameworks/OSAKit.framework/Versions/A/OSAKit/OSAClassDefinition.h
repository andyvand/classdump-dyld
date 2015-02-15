/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSADefinition.h>

@class NSMutableArray, NSMutableDictionary, OSADocumentationDefinition, NSString;

@interface OSAClassDefinition : OSADefinition {

	NSMutableArray* _propertyDefinitions;
	NSMutableArray* _elementDefinitions;
	NSMutableArray* _respondsToCommandDefinitions;
	NSMutableArray* _respondsToEventDefinitions;
	NSMutableDictionary* _subclassDefinitions;
	OSADocumentationDefinition* _documentation;
	NSString* _inheritsClassName;

}
-(id)propertyDefinitions;
-(id)inherits;
-(id)itemKind;
-(id)itemIcon;
-(id)elementDefinitions;
-(char)isOutlinable;
-(id)subclassDefinitions;
-(void)setInheritsClassName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 suiteDefinition:(id)arg2 ;
-(void)setPluralName:(id)arg1 ;
-(void)setInherits:(id)arg1 ;
-(void)addPropertyDefinition:(id)arg1 ;
-(void)addElementDefinition:(id)arg1 ;
-(id)inheritsClassName;
-(void)setPropertyDefinitions:(id)arg1 ;
-(void)setElementDefinitions:(id)arg1 ;
-(id)respondsToCommandDefinitions;
-(void)setRespondsToCommandDefinitions:(id)arg1 ;
-(id)respondsToEventDefinitions;
-(void)setRespondsToEventDefinitions:(id)arg1 ;
-(void)setSubclassDefinitions:(id)arg1 ;
-(id)documentation;
-(void)setDocumentation:(id)arg1 ;
-(id)pluralName;
-(void)addRespondsToCommandDefinition:(id)arg1 ;
-(void)addRespondsToEventDefinition:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

