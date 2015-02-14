/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSObject, NSArray;

@interface NSScriptRecordFieldDescription : NSObject {

	NSString* _key;
	NSObject* _typeNameOrDescription;
	unsigned _appleEventCode;
	char _isHidden;
	NSString* _presentableDescription;
	NSString* _presentableName;
	NSArray* _synonymDescriptions;

}
-(unsigned)appleEventCode;
-(id)typeDescription;
-(id)presentableDescription;
-(void)appendPropertyDeclarationToAETEData:(id)arg1 ;
-(char)matchesAppleEventCode:(unsigned)arg1 ;
-(id)synonymDescriptions;
-(id)initWithKey:(id)arg1 type:(id)arg2 appleEventCode:(unsigned)arg3 isHidden:(char)arg4 presentableDescription:(id)arg5 name:(id)arg6 synonymDescriptions:(id)arg7 ;
-(id)initWithKey:(id)arg1 typeDescription:(id)arg2 appleEventCode:(unsigned)arg3 presentableDescription:(id)arg4 name:(id)arg5 ;
-(void)reconcileToSuiteRegistry:(id)arg1 suiteName:(id)arg2 recordTypeName:(id)arg3 ;
-(void)dealloc;
-(char)isHidden;
-(id)key;
-(id)presentableName;
@end

