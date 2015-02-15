/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSTokenizer, NSData;

@interface ICSParser : NSObject {

	long long _options;
	ICSTokenizer* _lexer;
	NSData* _data;

}

@property (readonly) ICSTokenizer * lexer;              //@synthesize lexer=_lexer - In the implementation block
+(id)entitiesFromNSData:(id)arg1 options:(long long)arg2 ;
-(void)parseParameter:(id)arg1 ;
-(char)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3 ;
-(id)makeComponent:(char*)arg1 ;
-(void)parseComponent:(id)arg1 ;
-(char)parseProperty:(id)arg1 ;
-(id)parseData;
-(ICSTokenizer *)lexer;
-(void)dealloc;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 ;
@end

