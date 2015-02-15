/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleIDAuthAgent/AppleIDAuthAgent-Structs.h>
#import <AppleIDAuthAgent/XMLRPCEncoder.h>

@class NSString, NSArray;

@interface XMLRPCDefaultEncoder : NSObject <XMLRPCEncoder> {

	NSString* myMethod;
	NSArray* myParameters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)encodeString:(id)arg1 omitTag:(char)arg2 ;
-(id)encode;
-(void)setMethod:(id)arg1 withParameters:(id)arg2 ;
-(id)encodeBoolean:(CFBooleanRef)arg1 ;
-(id)valueTag:(id)arg1 value:(id)arg2 ;
-(id)replaceTarget:(id)arg1 withValue:(id)arg2 inString:(id)arg3 ;
-(id)method;
-(id)init;
-(void)dealloc;
-(id)encodeObject:(id)arg1 ;
-(id)parameters;
-(id)encodeData:(id)arg1 ;
-(id)encodeArray:(id)arg1 ;
-(id)encodeDictionary:(id)arg1 ;
-(id)encodeNumber:(id)arg1 ;
-(id)encodeDate:(id)arg1 ;
@end

