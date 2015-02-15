/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:22:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calculator.app/Contents/PlugIns/BasicAndSci.calcview/Contents/MacOS/BasicAndSci
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDecimalNumber;

@interface EngineNumber : NSObject {

	NSString* mTapeRepresentation;
	NSDecimalNumber* mDecimalNumber;
	char mInParenthesis;

}

@property (retain) NSString * tapeRepresentation; 
@property (retain,readonly) NSDecimalNumber * decimalNumber; 
@property (readonly) double doubleValue; 
@property (readonly) NSString * stringValue; 
@property (readonly) long long integerValue; 
@property (assign) char inParenthesis; 
+(id)engineNumberWithDecimalNumber:(id)arg1 tapeRepresentation:(id)arg2 ;
+(id)engineNumberWithString:(id)arg1 tapeRepresentation:(id)arg2 ;
+(unsigned long long)precision;
+(void)setPrecision:(unsigned long long)arg1 ;
-(void)setInParenthesis:(char)arg1 ;
-(void)setTapeRepresentation:(NSString *)arg1 ;
-(id)initWithDecimalNumber:(id)arg1 tapeRepresentation:(id)arg2 ;
-(id)initWithString:(id)arg1 tapeRepresentation:(id)arg2 ;
-(NSDecimalNumber *)decimalNumber;
-(NSString *)tapeRepresentation;
-(id)displayStringWithPrecision:(unsigned long long)arg1 useEE:(id)arg2 ;
-(char)inParenthesis;
-(void)dealloc;
-(id)description;
-(long long)integerValue;
-(NSString *)stringValue;
-(double)doubleValue;
@end
