/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSScriptTypeDescription.h>

@class NSString;

@interface NSScriptValueTypeDescription : NSScriptTypeDescription {

	NSString* _name;
	unsigned _appleEventCode;
	NSString* _objcClassName;
	SEL _cachedObjcCreationMethodSelector;
	char _isHidden;

}
+(id)valueTypeDescriptionFromName:(id)arg1 declaration:(id)arg2 ;
-(unsigned)appleEventCode;
-(id)objcClassName;
-(void)appendObjectClassDeclarationToAETEData:(id)arg1 ;
-(SEL)objcDescriptorCreationMethodSelector;
-(SEL)objcCreationMethodSelector;
-(SEL)objcCreationMethodSelector2;
-(SEL)objcDescriptorCreationMethodSelector2ForClass:(Class)arg1 ;
-(id)initWithName:(id)arg1 appleEventCode:(unsigned)arg2 objcClassName:(id)arg3 ;
-(id)initWithName:(id)arg1 appleEventCode:(unsigned)arg2 objcClassName:(id)arg3 isHidden:(char)arg4 ;
-(id)_descriptionWithTabCount:(unsigned long long)arg1 ;
-(id)_oneWordName;
-(id)_oldStyleOneWordName;
-(void)dealloc;
-(char)isHidden;
-(id)name;
@end

