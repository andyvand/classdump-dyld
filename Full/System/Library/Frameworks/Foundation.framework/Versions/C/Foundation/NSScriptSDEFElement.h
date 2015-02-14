/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSMutableDictionary;

@interface NSScriptSDEFElement : NSObject {

	NSString* _name;
	NSDictionary* _attributes;
	NSMutableDictionary* _descriptionsPerSubelementName;

}
-(id)initWithName:(id)arg1 attributes:(id)arg2 ;
-(void)addDescription:(id)arg1 forSubelementName:(id)arg2 ;
-(id)valueForOptionalAttributeKey:(id)arg1 ;
-(id)valueForRequiredAttributeKey:(id)arg1 ;
-(id)descriptionForOptionalSubelementName:(id)arg1 ;
-(id)zeroOrMoreDescriptionsForSubelementName:(id)arg1 ;
-(id)oneOrMoreDescriptionsForSubelementName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)attributes;
@end

