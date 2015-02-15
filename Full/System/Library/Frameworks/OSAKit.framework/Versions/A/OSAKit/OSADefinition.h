/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, OSADictionary, OSASuiteDefinition;

@interface OSADefinition : NSObject {

	NSMutableDictionary* _attributes;
	OSADictionary* _dictionary;
	OSASuiteDefinition* _suiteDefinition;

}
-(id)itemDescription;
-(void)setItemDescription:(id)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 ;
-(char)hidden;
-(void)setCode:(id)arg1 ;
-(id)itemKind;
-(id)viewAnchor;
-(id)itemIcon;
-(char)isExpandable;
-(char)isOutlinable;
-(id)initWithDictionary:(id)arg1 suiteDefinition:(id)arg2 ;
-(void)setViewAnchor:(id)arg1 ;
-(id)suiteDefinition;
-(void)setSuiteDefinition:(id)arg1 ;
-(id)itemSuite;
-(char)containsSearchValue:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)code;
-(void)setName:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id)dictionary;
-(id)name;
-(id)type;
-(id)uniqueIdentifier;
-(void)setType:(id)arg1 ;
-(id)attributes;
-(void)setDictionary:(id)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
@end

