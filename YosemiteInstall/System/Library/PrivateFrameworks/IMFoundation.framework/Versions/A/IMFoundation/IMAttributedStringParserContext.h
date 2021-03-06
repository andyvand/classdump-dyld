/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSAttributedString, NSString, NSArray;

@interface IMAttributedStringParserContext : NSObject {

	NSAttributedString* _inString;

}

@property (retain,readonly) NSAttributedString * inString;              //@synthesize inString=_inString - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
@property (readonly) char shouldPreprocess; 
-(NSArray *)resultsForLogging;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(NSAttributedString *)inString;
-(void)parserDidStart:(id)arg1 ;
-(char)shouldPreprocess;
-(void)parserDidEnd:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithAttributedString:(id)arg1 ;
@end

