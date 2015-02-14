/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface QCMathematicalExpression : NSObject {

	void* _interpreter;

}
+(double)evaluateString:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(id)variables;
-(void)setVariable:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(double)variableAtIndex:(unsigned long long)arg1 ;
-(double)evaluate;
@end

