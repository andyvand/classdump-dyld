/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSADefinition.h>

@class NSMutableArray, OSADocumentationDefinition;

@interface OSASuiteDefinition : OSADefinition {

	NSMutableArray* _typeDefinitions;
	NSMutableArray* _classDefinitions;
	NSMutableArray* _commandDefinitions;
	NSMutableArray* _eventDefinitions;
	OSADocumentationDefinition* _documentation;

}
-(id)itemKind;
-(id)itemIcon;
-(id)commandDefinitions;
-(id)eventDefinitions;
-(id)classDefinitions;
-(char)isExpandable;
-(char)isOutlinable;
-(void)setClassDefinitions:(id)arg1 ;
-(void)addClassDefinition:(id)arg1 ;
-(void)addCommandDefinition:(id)arg1 ;
-(void)addEventDefinition:(id)arg1 ;
-(id)documentation;
-(void)setDocumentation:(id)arg1 ;
-(id)typeDefinitions;
-(void)setTypeDefinitions:(id)arg1 ;
-(void)setCommandDefinitions:(id)arg1 ;
-(void)setEventDefinitions:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

