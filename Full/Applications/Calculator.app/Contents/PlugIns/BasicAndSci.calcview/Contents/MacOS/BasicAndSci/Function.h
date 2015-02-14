/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calculator.app/Contents/PlugIns/BasicAndSci.calcview/Contents/MacOS/BasicAndSci
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface Function : NSObject {

	NSString* mName;
	NSString* mSpeechName;
	unsigned long long mOperator;
	unsigned long long mNumOfParamsRequired;
	unsigned long long mNumOfPeekParameters;
	long long mPrecedence;
	SEL mFunctionSelector;

}

@property (readonly) NSString * name; 
@property (readonly) NSString * speechName; 
@property (readonly) unsigned long long operator; 
@property (readonly) unsigned long long paramsRequired; 
@property (readonly) unsigned long long peekParameters; 
@property (readonly) long long precedence; 
@property (readonly) SEL selector; 
+(void)setRadMode:(char)arg1 ;
+(id)speechStringForOperator:(int)arg1 ;
+(id)findFunctionForOperatorName:(id)arg1 ;
+(id)findFunctionForOperator:(int)arg1 ;
+(id)pi;
+(id)plus:(id)arg1 ;
+(id)times:(id)arg1 ;
+(id)divide:(id)arg1 ;
+(id)changeSign:(id)arg1 ;
+(id)oneOverX:(id)arg1 ;
+(id)squared:(id)arg1 ;
+(id)cubed:(id)arg1 ;
+(id)twoToPow:(id)arg1 ;
+(id)power:(id)arg1 ;
+(id)reversePower:(id)arg1 ;
+(id)factorial:(id)arg1 ;
+(id)cuberoot:(id)arg1 ;
+(id)xrooty:(id)arg1 ;
+(id)percent:(id)arg1 ;
+(id)sin:(id)arg1 ;
+(id)asin:(id)arg1 ;
+(id)cos:(id)arg1 ;
+(id)acos:(id)arg1 ;
+(id)tan:(id)arg1 ;
+(id)atan:(id)arg1 ;
+(id)log2:(id)arg1 ;
+(id)logY:(id)arg1 ;
+(id)tentox:(id)arg1 ;
+(id)etox:(id)arg1 ;
+(id)sinh:(id)arg1 ;
+(id)asinh:(id)arg1 ;
+(id)cosh:(id)arg1 ;
+(id)acosh:(id)arg1 ;
+(id)tanh:(id)arg1 ;
+(id)atanh:(id)arg1 ;
+(id)e;
+(id)sqrt:(id)arg1 ;
+(id)log:(id)arg1 ;
+(id)ln:(id)arg1 ;
+(id)random;
+(id)minus:(id)arg1 ;
-(NSString *)speechName;
-(id)performOperationWithParameters:(id)arg1 ;
-(unsigned long long)paramsRequired;
-(unsigned long long)peekParameters;
-(long long)precedence;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(SEL)selector;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)operator;
-(id)performOperation;
@end

