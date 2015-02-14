/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject {

	NSData* _inContentAsData;

}

@property (retain,readonly) NSData * inContentAsData;                 //@synthesize inContentAsData=_inContentAsData - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
-(NSArray *)resultsForLogging;
-(NSData *)inContentAsData;
-(id)initWithContentAsData:(id)arg1 ;
-(id)inContent;
-(void)dealloc;
-(NSString *)name;
-(void)reset;
-(id)initWithContent:(id)arg1 ;
@end

