/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSScriptPropertyDescription.h>

@class NSString, NSObject, NSArray;

@interface NSScriptAttributeDescription : NSScriptPropertyDescription {

	unsigned _appleEventCode;
	NSString* _presentableDescription;
	NSObject* _presentableNameOrNames;
	NSArray* _synonymDescriptions;

}
+(id)propertyDescriptionFromKey:(id)arg1 implDeclaration:(id)arg2 presoDeclaration:(id)arg3 suiteName:(id)arg4 className:(id)arg5 ;
-(unsigned)appleEventCode;
-(id)presentableDescription;
-(id)presentableNames;
-(unsigned short)appendPropertyDeclarationsToAETEData:(id)arg1 ;
-(char)matchesAppleEventCode:(unsigned)arg1 ;
-(id)firstPresentableName;
-(void)reconcileToSuiteRegistry:(id)arg1 suiteName:(id)arg2 className:(id)arg3 ;
-(char)matchesPresentableName:(id)arg1 ;
-(id)initWithKey:(id)arg1 type:(id)arg2 isReadOnly:(char)arg3 appleEventCode:(unsigned)arg4 presentableDescription:(id)arg5 nameOrNames:(id)arg6 ;
-(id)initWithKey:(id)arg1 type:(id)arg2 access:(unsigned long long)arg3 appleEventCode:(unsigned)arg4 isHidden:(char)arg5 presentableDescription:(id)arg6 name:(id)arg7 synonymDescriptions:(id)arg8 accessGroupDescriptions:(id)arg9 ;
-(id)_descriptionWithTabCount:(unsigned long long)arg1 ;
-(id)_termedDescriptionWithTabCount:(unsigned long long)arg1 propertyKindName:(id)arg2 ;
-(void)dealloc;
@end

