/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAScriptElement.h>

@class NSString;

@interface OSAControlElement : OSAScriptElement {

	NSString* _controlName;

}
+(id)elementWithName:(id)arg1 text:(id)arg2 ;
-(char)generateIntoText:(id)arg1 indent:(unsigned)arg2 ;
-(id)initWithName:(id)arg1 text:(id)arg2 ;
-(id)controlName;
-(void)setControlName:(id)arg1 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
@end

