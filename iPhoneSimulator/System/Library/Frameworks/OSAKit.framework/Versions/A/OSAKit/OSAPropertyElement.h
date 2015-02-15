/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAScriptElement.h>

@class NSString;

@interface OSAPropertyElement : OSAScriptElement {

	NSString* _value;

}
+(id)elementWithProperty:(id)arg1 value:(id)arg2 ;
-(id)property;
-(id)initWithProperty:(id)arg1 value:(id)arg2 ;
-(char)generateIntoText:(id)arg1 indent:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)title;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setProperty:(id)arg1 ;
@end

