/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSScriptRecordTypeDescription.h>

@class NSString, NSArray;

@interface NSScriptDeclaredRecordTypeDescription : NSScriptRecordTypeDescription {

	NSString* _name;
	unsigned _appleEventCode;
	NSArray* _fieldDescriptions;
	char _isHidden;
	NSString* _presentableDescription;

}
-(unsigned)appleEventCode;
-(id)presentableDescription;
-(id)fieldDescriptions;
-(char)hasHiddenParts;
-(void)appendObjectClassDeclarationToAETEData:(id)arg1 includingParts:(int)arg2 ;
-(id)fieldDescriptionForAppleEventCode:(unsigned)arg1 ;
-(id)fieldDescriptionForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 appleEventCode:(unsigned)arg2 fieldDescriptions:(id)arg3 isHidden:(char)arg4 presentableDescription:(id)arg5 ;
-(id)_descriptionWithTabCount:(unsigned long long)arg1 ;
-(void)reconcileToSuiteRegistry:(id)arg1 suiteName:(id)arg2 ;
-(void)dealloc;
-(char)isHidden;
-(id)name;
@end
