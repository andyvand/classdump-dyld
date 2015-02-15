/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppleScriptObjC.framework/Versions/A/AppleScriptObjC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface BAFunctionSignature : NSObject {

	NSString* _returnType;
	NSMutableArray* _argTypes;
	NSMutableArray* _argModifiers;
	char _isVariadic;

}

@property (assign,nonatomic) char isVariadic;                            //@synthesize isVariadic=_isVariadic - In the implementation block
@property (nonatomic,retain) NSMutableArray * argTypes;                  //@synthesize argTypes=_argTypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * argModifiers;              //@synthesize argModifiers=_argModifiers - In the implementation block
-(char)isVariadic;
-(char)getArgumentModifierAtIndex:(long long)arg1 ;
-(void)setArgTypes:(NSMutableArray *)arg1 ;
-(void)setArgModifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)argTypes;
-(NSMutableArray *)argModifiers;
-(void)setIsVariadic:(char)arg1 ;
-(id)init;
-(unsigned long long)numberOfArguments;
-(const char*)getArgumentTypeAtIndex:(long long)arg1 ;
-(const char*)returnType;
-(void)setReturnType:(id)arg1 ;
@end
