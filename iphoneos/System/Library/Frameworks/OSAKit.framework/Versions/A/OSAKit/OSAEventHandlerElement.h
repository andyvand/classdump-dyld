/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAHandlerElement.h>

@class NSString;

@interface OSAEventHandlerElement : OSAHandlerElement {

	NSString* _eventHandlerName;

}
+(id)elementWithName:(id)arg1 eventHandlerName:(id)arg2 parameters:(id)arg3 ;
+(id)elementWithName:(id)arg1 eventHandlerName:(id)arg2 ;
-(char)generateIntoText:(id)arg1 indent:(unsigned)arg2 ;
-(id)eventHandlerName;
-(id)initWithName:(id)arg1 eventHandlerName:(id)arg2 ;
-(id)initWithName:(id)arg1 eventHandlerName:(id)arg2 parameters:(id)arg3 ;
-(void)setEventHandlerName:(id)arg1 ;
-(void)dealloc;
@end

