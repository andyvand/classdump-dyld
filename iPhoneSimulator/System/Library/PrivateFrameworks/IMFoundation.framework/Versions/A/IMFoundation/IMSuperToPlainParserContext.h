/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMFromSuperParserContext.h>

@class NSMutableString, NSString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext {

	NSMutableString* _plainString;
	char _extractLinks;

}

@property (nonatomic,readonly) NSString * plainString; 
-(id)resultsForLogging;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(id)initWithAttributedString:(id)arg1 extractLinks:(char)arg2 ;
-(NSString *)plainString;
-(void)dealloc;
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
@end
